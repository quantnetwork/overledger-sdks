/*
 * tier_function_dto.h
 *
 * 
 */

#ifndef _tier_function_dto_H_
#define _tier_function_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tier_function_dto_t tier_function_dto_t;




typedef struct tier_function_dto_t {
    char *function_name; // string
    char *api; // string

} tier_function_dto_t;

tier_function_dto_t *tier_function_dto_create(
    char *function_name,
    char *api
);

void tier_function_dto_free(tier_function_dto_t *tier_function_dto);

tier_function_dto_t *tier_function_dto_parseFromJSON(cJSON *tier_function_dtoJSON);

cJSON *tier_function_dto_convertToJSON(tier_function_dto_t *tier_function_dto);

#endif /* _tier_function_dto_H_ */

