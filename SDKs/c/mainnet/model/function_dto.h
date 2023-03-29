/*
 * function_dto.h
 *
 * 
 */

#ifndef _function_dto_H_
#define _function_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct function_dto_t function_dto_t;




typedef struct function_dto_t {
    char *type; // string
    char *api; // string

} function_dto_t;

function_dto_t *function_dto_create(
    char *type,
    char *api
);

void function_dto_free(function_dto_t *function_dto);

function_dto_t *function_dto_parseFromJSON(cJSON *function_dtoJSON);

cJSON *function_dto_convertToJSON(function_dto_t *function_dto);

#endif /* _function_dto_H_ */

