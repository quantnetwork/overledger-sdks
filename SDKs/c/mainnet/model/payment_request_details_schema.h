/*
 * payment_request_details_schema.h
 *
 * The payload request
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

// Enum OVERLEDGERSIGNINGTYPE for payment_request_details_schema

typedef enum  { quant_overledger_api_payment_request_details_schema_OVERLEDGERSIGNINGTYPE_NULL = 0, quant_overledger_api_payment_request_details_schema_OVERLEDGERSIGNINGTYPE_overledger_javascript_library } quant_overledger_api_payment_request_details_schema_OVERLEDGERSIGNINGTYPE_e;

char* payment_request_details_schema_overledger_signing_type_ToString(quant_overledger_api_payment_request_details_schema_OVERLEDGERSIGNINGTYPE_e overledger_signing_type);

quant_overledger_api_payment_request_details_schema_OVERLEDGERSIGNINGTYPE_e payment_request_details_schema_overledger_signing_type_FromString(char* overledger_signing_type);



typedef struct payment_request_details_schema_t {
    list_t *destination; //nonprimitive container
    char *message; // string
    quant_overledger_api_payment_request_details_schema_OVERLEDGERSIGNINGTYPE_e overledger_signing_type; //enum
    list_t *origin; //nonprimitive container

} payment_request_details_schema_t;

payment_request_details_schema_t *payment_request_details_schema_create(
    list_t *destination,
    char *message,
    quant_overledger_api_payment_request_details_schema_OVERLEDGERSIGNINGTYPE_e overledger_signing_type,
    list_t *origin
);

void payment_request_details_schema_free(payment_request_details_schema_t *payment_request_details_schema);

payment_request_details_schema_t *payment_request_details_schema_parseFromJSON(cJSON *payment_request_details_schemaJSON);

cJSON *payment_request_details_schema_convertToJSON(payment_request_details_schema_t *payment_request_details_schema);

#endif /* _payment_request_details_schema_H_ */

