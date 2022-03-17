/*
 * prepare_approve_debit_transaction_request_schema.h
 *
 * 
 */

#ifndef _prepare_approve_debit_transaction_request_schema_H_
#define _prepare_approve_debit_transaction_request_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct prepare_approve_debit_transaction_request_schema_t prepare_approve_debit_transaction_request_schema_t;

#include "approve_request_details_schema.h"
#include "location.h"



typedef struct prepare_approve_debit_transaction_request_schema_t {
    char *urgency; // string
    struct approve_request_details_schema_t *request_details; //model
    struct location_t *location; //model
    char *type; // string

} prepare_approve_debit_transaction_request_schema_t;

prepare_approve_debit_transaction_request_schema_t *prepare_approve_debit_transaction_request_schema_create(
    char *urgency,
    approve_request_details_schema_t *request_details,
    location_t *location,
    char *type
);

void prepare_approve_debit_transaction_request_schema_free(prepare_approve_debit_transaction_request_schema_t *prepare_approve_debit_transaction_request_schema);

prepare_approve_debit_transaction_request_schema_t *prepare_approve_debit_transaction_request_schema_parseFromJSON(cJSON *prepare_approve_debit_transaction_request_schemaJSON);

cJSON *prepare_approve_debit_transaction_request_schema_convertToJSON(prepare_approve_debit_transaction_request_schema_t *prepare_approve_debit_transaction_request_schema);

#endif /* _prepare_approve_debit_transaction_request_schema_H_ */

