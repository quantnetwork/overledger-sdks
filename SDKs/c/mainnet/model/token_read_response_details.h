/*
 * token_read_response_details.h
 *
 * 
 */

#ifndef _token_read_response_details_H_
#define _token_read_response_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct token_read_response_details_t token_read_response_details_t;

#include "object.h"



typedef struct token_read_response_details_t {
    char *name; // string
    char *type; // string
    object_t *value; //object

} token_read_response_details_t;

token_read_response_details_t *token_read_response_details_create(
    char *name,
    char *type,
    object_t *value
);

void token_read_response_details_free(token_read_response_details_t *token_read_response_details);

token_read_response_details_t *token_read_response_details_parseFromJSON(cJSON *token_read_response_detailsJSON);

cJSON *token_read_response_details_convertToJSON(token_read_response_details_t *token_read_response_details);

#endif /* _token_read_response_details_H_ */

