/*
 * prepare_and_execute_search_address_balance_response.h
 *
 * 
 */

#ifndef _prepare_and_execute_search_address_balance_response_H_
#define _prepare_and_execute_search_address_balance_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct prepare_and_execute_search_address_balance_response_t prepare_and_execute_search_address_balance_response_t;

#include "location.h"
#include "prepare_and_execute_balance_details.h"



typedef struct prepare_and_execute_search_address_balance_response_t {
    list_t *balances; //nonprimitive container
    struct location_t *location; //model
    char *timestamp; // string
    char *address_id; // string

} prepare_and_execute_search_address_balance_response_t;

prepare_and_execute_search_address_balance_response_t *prepare_and_execute_search_address_balance_response_create(
    list_t *balances,
    location_t *location,
    char *timestamp,
    char *address_id
);

void prepare_and_execute_search_address_balance_response_free(prepare_and_execute_search_address_balance_response_t *prepare_and_execute_search_address_balance_response);

prepare_and_execute_search_address_balance_response_t *prepare_and_execute_search_address_balance_response_parseFromJSON(cJSON *prepare_and_execute_search_address_balance_responseJSON);

cJSON *prepare_and_execute_search_address_balance_response_convertToJSON(prepare_and_execute_search_address_balance_response_t *prepare_and_execute_search_address_balance_response);

#endif /* _prepare_and_execute_search_address_balance_response_H_ */

