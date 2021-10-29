/*
 * overledger_transaction_response_schema.h
 *
 * 
 */

#ifndef _overledger_transaction_response_schema_H_
#define _overledger_transaction_response_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct overledger_transaction_response_schema_t overledger_transaction_response_schema_t;

#include "location.h"
#include "status.h"



typedef struct overledger_transaction_response_schema_t {
    char *client_id; // string
    char *request_id; // string
    char *overledger_transaction_id; // string
    struct location_t *location; //model
    list_t *transaction_history; //nonprimitive container
    char *type; // string
    char *transaction_id; // string
    struct status_t *status; //model

} overledger_transaction_response_schema_t;

overledger_transaction_response_schema_t *overledger_transaction_response_schema_create(
    char *client_id,
    char *request_id,
    char *overledger_transaction_id,
    location_t *location,
    list_t *transaction_history,
    char *type,
    char *transaction_id,
    status_t *status
);

void overledger_transaction_response_schema_free(overledger_transaction_response_schema_t *overledger_transaction_response_schema);

overledger_transaction_response_schema_t *overledger_transaction_response_schema_parseFromJSON(cJSON *overledger_transaction_response_schemaJSON);

cJSON *overledger_transaction_response_schema_convertToJSON(overledger_transaction_response_schema_t *overledger_transaction_response_schema);

#endif /* _overledger_transaction_response_schema_H_ */

