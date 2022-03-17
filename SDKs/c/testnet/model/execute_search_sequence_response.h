/*
 * execute_search_sequence_response.h
 *
 * 
 */

#ifndef _execute_search_sequence_response_H_
#define _execute_search_sequence_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct execute_search_sequence_response_t execute_search_sequence_response_t;

#include "location.h"



typedef struct execute_search_sequence_response_t {
    char *sequence; // string
    struct location_t *location; //model
    char *timestamp; // string
    char *address_id; // string

} execute_search_sequence_response_t;

execute_search_sequence_response_t *execute_search_sequence_response_create(
    char *sequence,
    location_t *location,
    char *timestamp,
    char *address_id
);

void execute_search_sequence_response_free(execute_search_sequence_response_t *execute_search_sequence_response);

execute_search_sequence_response_t *execute_search_sequence_response_parseFromJSON(cJSON *execute_search_sequence_responseJSON);

cJSON *execute_search_sequence_response_convertToJSON(execute_search_sequence_response_t *execute_search_sequence_response);

#endif /* _execute_search_sequence_response_H_ */

