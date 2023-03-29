/*
 * execute_search_balance_response.h
 *
 * 
 */

#ifndef _execute_search_balance_response_H_
#define _execute_search_balance_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct execute_search_balance_response_t execute_search_balance_response_t;

#include "address_balance_response.h"
#include "location.h"



typedef struct execute_search_balance_response_t {
    list_t *balances; //nonprimitive container
    struct location_t *location; //model
    char *timestamp; // string
    char *address_id; // string

} execute_search_balance_response_t;

execute_search_balance_response_t *execute_search_balance_response_create(
    list_t *balances,
    location_t *location,
    char *timestamp,
    char *address_id
);

void execute_search_balance_response_free(execute_search_balance_response_t *execute_search_balance_response);

execute_search_balance_response_t *execute_search_balance_response_parseFromJSON(cJSON *execute_search_balance_responseJSON);

cJSON *execute_search_balance_response_convertToJSON(execute_search_balance_response_t *execute_search_balance_response);

#endif /* _execute_search_balance_response_H_ */

