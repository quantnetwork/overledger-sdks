/*
 * token_read_qrc721_response.h
 *
 * 
 */

#ifndef _token_read_qrc721_response_H_
#define _token_read_qrc721_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct token_read_qrc721_response_t token_read_qrc721_response_t;

#include "location.h"
#include "token_read_response_details.h"



typedef struct token_read_qrc721_response_t {
    char *token_name; // string
    struct token_read_response_details_t *response_details; //model
    struct location_t *location; //model
    char *request_id; // string

} token_read_qrc721_response_t;

token_read_qrc721_response_t *token_read_qrc721_response_create(
    char *token_name,
    token_read_response_details_t *response_details,
    location_t *location,
    char *request_id
);

void token_read_qrc721_response_free(token_read_qrc721_response_t *token_read_qrc721_response);

token_read_qrc721_response_t *token_read_qrc721_response_parseFromJSON(cJSON *token_read_qrc721_responseJSON);

cJSON *token_read_qrc721_response_convertToJSON(token_read_qrc721_response_t *token_read_qrc721_response);

#endif /* _token_read_qrc721_response_H_ */

