/*
 * payment_request_details_schema.h
 *
 * 
 */

#ifndef _payment_request_details_schema_H_
#define _payment_request_details_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_request_details_schema_t payment_request_details_schema_t;

#include "destination_payment_schema.h"
#include "origin_payment_schema.h"



typedef struct payment_request_details_schema_t {
    char *overledger_signing_type; // string
    list_t *origin; //nonprimitive container
    list_t *destination; //nonprimitive container
    char *message; // string

} payment_request_details_schema_t;

payment_request_details_schema_t *payment_request_details_schema_create(
    char *overledger_signing_type,
    list_t *origin,
    list_t *destination,
    char *message
);

void payment_request_details_schema_free(payment_request_details_schema_t *payment_request_details_schema);

payment_request_details_schema_t *payment_request_details_schema_parseFromJSON(cJSON *payment_request_details_schemaJSON);

cJSON *payment_request_details_schema_convertToJSON(payment_request_details_schema_t *payment_request_details_schema);

#endif /* _payment_request_details_schema_H_ */

