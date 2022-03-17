/*
 * execute_search_transaction_response.h
 *
 * 
 */

#ifndef _execute_search_transaction_response_H_
#define _execute_search_transaction_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct execute_search_transaction_response_t execute_search_transaction_response_t;

#include "location.h"
#include "object.h"
#include "status.h"
#include "transaction.h"



typedef struct execute_search_transaction_response_t {
    struct location_t *location; //model
    char *type; // string
    struct transaction_t *transaction; //model
    char *timestamp; // string
    struct status_t *status; //model
    object_t *extra_fields; //object

} execute_search_transaction_response_t;

execute_search_transaction_response_t *execute_search_transaction_response_create(
    location_t *location,
    char *type,
    transaction_t *transaction,
    char *timestamp,
    status_t *status,
    object_t *extra_fields
);

void execute_search_transaction_response_free(execute_search_transaction_response_t *execute_search_transaction_response);

execute_search_transaction_response_t *execute_search_transaction_response_parseFromJSON(cJSON *execute_search_transaction_responseJSON);

cJSON *execute_search_transaction_response_convertToJSON(execute_search_transaction_response_t *execute_search_transaction_response);

#endif /* _execute_search_transaction_response_H_ */

