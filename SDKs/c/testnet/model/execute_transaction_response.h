/*
 * execute_transaction_response.h
 *
 * 
 */

#ifndef _execute_transaction_response_H_
#define _execute_transaction_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct execute_transaction_response_t execute_transaction_response_t;

#include "location.h"
#include "status.h"



typedef struct execute_transaction_response_t {
    char *urgency; // string
    char *request_id; // string
    char *overledger_transaction_id; // string
    struct location_t *location; //model
    char *type; // string
    char *transaction_id; // string
    struct status_t *status; //model

} execute_transaction_response_t;

execute_transaction_response_t *execute_transaction_response_create(
    char *urgency,
    char *request_id,
    char *overledger_transaction_id,
    location_t *location,
    char *type,
    char *transaction_id,
    status_t *status
);

void execute_transaction_response_free(execute_transaction_response_t *execute_transaction_response);

execute_transaction_response_t *execute_transaction_response_parseFromJSON(cJSON *execute_transaction_responseJSON);

cJSON *execute_transaction_response_convertToJSON(execute_transaction_response_t *execute_transaction_response);

#endif /* _execute_transaction_response_H_ */

