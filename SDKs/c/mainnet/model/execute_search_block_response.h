/*
 * execute_search_block_response.h
 *
 * 
 */

#ifndef _execute_search_block_response_H_
#define _execute_search_block_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct execute_search_block_response_t execute_search_block_response_t;

#include "block.h"
#include "location.h"
#include "status.h"



typedef struct execute_search_block_response_t {
    struct location_t *location; //model
    struct block_t *block; //model
    struct status_t *status; //model

} execute_search_block_response_t;

execute_search_block_response_t *execute_search_block_response_create(
    location_t *location,
    block_t *block,
    status_t *status
);

void execute_search_block_response_free(execute_search_block_response_t *execute_search_block_response);

execute_search_block_response_t *execute_search_block_response_parseFromJSON(cJSON *execute_search_block_responseJSON);

cJSON *execute_search_block_response_convertToJSON(execute_search_block_response_t *execute_search_block_response);

#endif /* _execute_search_block_response_H_ */

