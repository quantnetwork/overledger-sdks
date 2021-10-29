/*
 * prepare_payment_transaction_request_schema.h
 *
 * 
 */

#ifndef _prepare_payment_transaction_request_schema_H_
#define _prepare_payment_transaction_request_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct prepare_payment_transaction_request_schema_t prepare_payment_transaction_request_schema_t;

#include "location.h"
#include "payment_request_details_schema.h"



typedef struct prepare_payment_transaction_request_schema_t {
    char *urgency; // string
    struct payment_request_details_schema_t *request_details; //model
    struct location_t *location; //model
    char *type; // string

} prepare_payment_transaction_request_schema_t;

prepare_payment_transaction_request_schema_t *prepare_payment_transaction_request_schema_create(
    char *urgency,
    payment_request_details_schema_t *request_details,
    location_t *location,
    char *type
);

void prepare_payment_transaction_request_schema_free(prepare_payment_transaction_request_schema_t *prepare_payment_transaction_request_schema);

prepare_payment_transaction_request_schema_t *prepare_payment_transaction_request_schema_parseFromJSON(cJSON *prepare_payment_transaction_request_schemaJSON);

cJSON *prepare_payment_transaction_request_schema_convertToJSON(prepare_payment_transaction_request_schema_t *prepare_payment_transaction_request_schema);

#endif /* _prepare_payment_transaction_request_schema_H_ */

