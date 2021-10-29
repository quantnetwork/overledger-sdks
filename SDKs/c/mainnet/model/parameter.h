/*
 * parameter.h
 *
 * 
 */

#ifndef _parameter_H_
#define _parameter_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct parameter_t parameter_t;

#include "object.h"



typedef struct parameter_t {
    char *type; // string
    object_t *value; //object
    char *key; // string

} parameter_t;

parameter_t *parameter_create(
    char *type,
    object_t *value,
    char *key
);

void parameter_free(parameter_t *parameter);

parameter_t *parameter_parseFromJSON(cJSON *parameterJSON);

cJSON *parameter_convertToJSON(parameter_t *parameter);

#endif /* _parameter_H_ */

