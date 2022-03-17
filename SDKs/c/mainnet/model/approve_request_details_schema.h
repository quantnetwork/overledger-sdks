/*
 * approve_request_details_schema.h
 *
 * 
 */

#ifndef _approve_request_details_schema_H_
#define _approve_request_details_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct approve_request_details_schema_t approve_request_details_schema_t;

#include "payee_credit_schema.h"
#include "payer_credit_schema.h"



typedef struct approve_request_details_schema_t {
    list_t *mandate; //nonprimitive container
    char *overledger_signing_type; // string
    list_t *payer; //nonprimitive container

} approve_request_details_schema_t;

approve_request_details_schema_t *approve_request_details_schema_create(
    list_t *mandate,
    char *overledger_signing_type,
    list_t *payer
);

void approve_request_details_schema_free(approve_request_details_schema_t *approve_request_details_schema);

approve_request_details_schema_t *approve_request_details_schema_parseFromJSON(cJSON *approve_request_details_schemaJSON);

cJSON *approve_request_details_schema_convertToJSON(approve_request_details_schema_t *approve_request_details_schema);

#endif /* _approve_request_details_schema_H_ */

