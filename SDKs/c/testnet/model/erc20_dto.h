/*
 * erc20_dto.h
 *
 * 
 */

#ifndef _erc20_dto_H_
#define _erc20_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct erc20_dto_t erc20_dto_t;

#include "location_dto.h"
#include "tier_function_dto.h"



typedef struct erc20_dto_t {
    int is_qrc20; //boolean
    char *token_unit; // string
    int decimal_places; //numeric
    list_t *functions; //nonprimitive container
    char *token_name; // string
    char *smart_contract_address; // string
    struct location_dto_t *location; //model
    char *version; // string
    char *url; // string
    char *audit_date; //date

} erc20_dto_t;

erc20_dto_t *erc20_dto_create(
    int is_qrc20,
    char *token_unit,
    int decimal_places,
    list_t *functions,
    char *token_name,
    char *smart_contract_address,
    location_dto_t *location,
    char *version,
    char *url,
    char *audit_date
);

void erc20_dto_free(erc20_dto_t *erc20_dto);

erc20_dto_t *erc20_dto_parseFromJSON(cJSON *erc20_dtoJSON);

cJSON *erc20_dto_convertToJSON(erc20_dto_t *erc20_dto);

#endif /* _erc20_dto_H_ */

