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

#include "parameter.h"



typedef struct function_t {
    char *function_id; // string
    char *code; // string
    char *name; // string
    list_t *input_parameters; //nonprimitive container
    list_t *output_parameters; //nonprimitive container

} function_t;

function_t *function_create(
    char *function_id,
    char *code,
    char *name,
    list_t *input_parameters,
    list_t *output_parameters
);

void function_free(function_t *function);

function_t *function_parseFromJSON(cJSON *functionJSON);

cJSON *function_convertToJSON(function_t *function);

#endif /* _function_H_ */

