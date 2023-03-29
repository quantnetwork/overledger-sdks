/*
 * non_fungible_token_response.h
 *
 * 
 */

#ifndef _non_fungible_token_response_H_
#define _non_fungible_token_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct non_fungible_token_response_t non_fungible_token_response_t;

#include "function.h"
#include "location.h"



typedef struct non_fungible_token_response_t {
    char *token_name; // string
    char *documentation_url; // string
    struct location_t *location; //model
    list_t *functions; //nonprimitive container
    char *contract_type; // string
    char *smart_contract_id; // string

} non_fungible_token_response_t;

non_fungible_token_response_t *non_fungible_token_response_create(
    char *token_name,
    char *documentation_url,
    location_t *location,
    list_t *functions,
    char *contract_type,
    char *smart_contract_id
);

void non_fungible_token_response_free(non_fungible_token_response_t *non_fungible_token_response);

non_fungible_token_response_t *non_fungible_token_response_parseFromJSON(cJSON *non_fungible_token_responseJSON);

cJSON *non_fungible_token_response_convertToJSON(non_fungible_token_response_t *non_fungible_token_response);

#endif /* _non_fungible_token_response_H_ */

