/*
 * non_fungible_token_dto.h
 *
 * 
 */

#ifndef _non_fungible_token_dto_H_
#define _non_fungible_token_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct non_fungible_token_dto_t non_fungible_token_dto_t;

#include "location_dto.h"
#include "tier_function_dto.h"



typedef struct non_fungible_token_dto_t {
    list_t *functions; //nonprimitive container
    char *token_name; // string
    char *smart_contract_address; // string
    struct location_dto_t *location; //model
    char *id; // string
    char *token_type; // string
    char *url; // string

} non_fungible_token_dto_t;

non_fungible_token_dto_t *non_fungible_token_dto_create(
    list_t *functions,
    char *token_name,
    char *smart_contract_address,
    location_dto_t *location,
    char *id,
    char *token_type,
    char *url
);

void non_fungible_token_dto_free(non_fungible_token_dto_t *non_fungible_token_dto);

non_fungible_token_dto_t *non_fungible_token_dto_parseFromJSON(cJSON *non_fungible_token_dtoJSON);

cJSON *non_fungible_token_dto_convertToJSON(non_fungible_token_dto_t *non_fungible_token_dto);

#endif /* _non_fungible_token_dto_H_ */

