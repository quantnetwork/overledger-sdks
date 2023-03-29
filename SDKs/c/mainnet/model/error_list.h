/*
 * error_list.h
 *
 * 
 */

#ifndef _error_list_H_
#define _error_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct error_list_t error_list_t;

#include "error.h"



typedef struct error_list_t {
    list_t *errors; //nonprimitive container
    int error_count; //numeric

} error_list_t;

error_list_t *error_list_create(
    list_t *errors,
    int error_count
);

void error_list_free(error_list_t *error_list);

error_list_t *error_list_parseFromJSON(cJSON *error_listJSON);

cJSON *error_list_convertToJSON(error_list_t *error_list);

#endif /* _error_list_H_ */

