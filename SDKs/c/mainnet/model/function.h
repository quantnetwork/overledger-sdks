/*
 * function.h
 *
 * 
 */

#ifndef _function_H_
#define _function_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct function_t function_t;




typedef struct function_t {
    char *type; // string
    char *api; // string

} function_t;

function_t *function_create(
    char *type,
    char *api
);

void function_free(function_t *function);

function_t *function_parseFromJSON(cJSON *functionJSON);

cJSON *function_convertToJSON(function_t *function);

#endif /* _function_H_ */

