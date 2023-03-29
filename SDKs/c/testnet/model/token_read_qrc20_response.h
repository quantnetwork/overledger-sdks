/*
 * token_read_qrc20_response.h
 *
 * 
 */

#ifndef _token_read_qrc20_response_H_
#define _token_read_qrc20_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct token_read_qrc20_response_t token_read_qrc20_response_t;

#include "location.h"
#include "token_read_response_details.h"



typedef struct token_read_qrc20_response_t {
    list_t *response_details; //nonprimitive container
    char *request_id; // string
    struct location_t *location; //model

} token_read_qrc20_response_t;

token_read_qrc20_response_t *token_read_qrc20_response_create(
    list_t *response_details,
    char *request_id,
    location_t *location
);

void token_read_qrc20_response_free(token_read_qrc20_response_t *token_read_qrc20_response);

token_read_qrc20_response_t *token_read_qrc20_response_parseFromJSON(cJSON *token_read_qrc20_responseJSON);

cJSON *token_read_qrc20_response_convertToJSON(token_read_qrc20_response_t *token_read_qrc20_response);

#endif /* _token_read_qrc20_response_H_ */

