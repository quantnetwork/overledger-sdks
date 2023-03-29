/*
 * fungible_token_response_dto.h
 *
 * 
 */

#ifndef _fungible_token_response_dto_H_
#define _fungible_token_response_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fungible_token_response_dto_t fungible_token_response_dto_t;

#include "function_dto.h"
#include "location_dto.h"

// Enum CONTRACTTYPE for fungible_token_response_dto

typedef enum  { quant_overledger_api_fungible_token_response_dto_CONTRACTTYPE_NULL = 0, quant_overledger_api_fungible_token_response_dto_CONTRACTTYPE_ERC20, quant_overledger_api_fungible_token_response_dto_CONTRACTTYPE_QRC20 } quant_overledger_api_fungible_token_response_dto_CONTRACTTYPE_e;

char* fungible_token_response_dto_contract_type_ToString(quant_overledger_api_fungible_token_response_dto_CONTRACTTYPE_e contract_type);

quant_overledger_api_fungible_token_response_dto_CONTRACTTYPE_e fungible_token_response_dto_contract_type_FromString(char* contract_type);



typedef struct fungible_token_response_dto_t {
    char *documentation_url; // string
    char *unit; // string
    int decimal_places; //numeric
    list_t *functions; //nonprimitive container
    quant_overledger_api_fungible_token_response_dto_CONTRACTTYPE_e contract_type; //enum
    struct location_dto_t *location; //model
    char *smart_contract_id; // string

} fungible_token_response_dto_t;

fungible_token_response_dto_t *fungible_token_response_dto_create(
    char *documentation_url,
    char *unit,
    int decimal_places,
    list_t *functions,
    quant_overledger_api_fungible_token_response_dto_CONTRACTTYPE_e contract_type,
    location_dto_t *location,
    char *smart_contract_id
);

void fungible_token_response_dto_free(fungible_token_response_dto_t *fungible_token_response_dto);

fungible_token_response_dto_t *fungible_token_response_dto_parseFromJSON(cJSON *fungible_token_response_dtoJSON);

cJSON *fungible_token_response_dto_convertToJSON(fungible_token_response_dto_t *fungible_token_response_dto);

#endif /* _fungible_token_response_dto_H_ */

