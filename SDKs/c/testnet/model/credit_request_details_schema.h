/*
 * credit_request_details_schema.h
 *
 * 
 */

#ifndef _credit_request_details_schema_H_
#define _credit_request_details_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct credit_request_details_schema_t credit_request_details_schema_t;

#include "payee_credit_schema.h"
#include "payer_credit_schema.h"



typedef struct credit_request_details_schema_t {
    list_t *payee; //nonprimitive container
    char *message; // string
    list_t *payer; //nonprimitive container
    char *overledger_signing_type; // string

} credit_request_details_schema_t;

credit_request_details_schema_t *credit_request_details_schema_create(
    list_t *payee,
    char *message,
    list_t *payer,
    char *overledger_signing_type
);

void credit_request_details_schema_free(credit_request_details_schema_t *credit_request_details_schema);

credit_request_details_schema_t *credit_request_details_schema_parseFromJSON(cJSON *credit_request_details_schemaJSON);

cJSON *credit_request_details_schema_convertToJSON(credit_request_details_schema_t *credit_request_details_schema);

#endif /* _credit_request_details_schema_H_ */

