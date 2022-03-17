/*
 * execute_search_utxo_response.h
 *
 * 
 */

#ifndef _execute_search_utxo_response_H_
#define _execute_search_utxo_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct execute_search_utxo_response_t execute_search_utxo_response_t;

#include "destination.h"
#include "location.h"
#include "object.h"
#include "status.h"



typedef struct execute_search_utxo_response_t {
    char *utxo_id; // string
    list_t *destination; //nonprimitive container
    struct location_t *location; //model
    char *timestamp; // string
    struct status_t *status; //model
    object_t *native_data; //object

} execute_search_utxo_response_t;

execute_search_utxo_response_t *execute_search_utxo_response_create(
    char *utxo_id,
    list_t *destination,
    location_t *location,
    char *timestamp,
    status_t *status,
    object_t *native_data
);

void execute_search_utxo_response_free(execute_search_utxo_response_t *execute_search_utxo_response);

execute_search_utxo_response_t *execute_search_utxo_response_parseFromJSON(cJSON *execute_search_utxo_responseJSON);

cJSON *execute_search_utxo_response_convertToJSON(execute_search_utxo_response_t *execute_search_utxo_response);

#endif /* _execute_search_utxo_response_H_ */

