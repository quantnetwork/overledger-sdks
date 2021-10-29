/*
 * error.h
 *
 * 
 */

#ifndef _error_H_
#define _error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct error_t error_t;




typedef struct error_t {
    int code; //numeric
    char *service; // string
    char *message; // string
    long timestamp; //numeric

} error_t;

error_t *error_create(
    int code,
    char *service,
    char *message,
    long timestamp
);

void error_free(error_t *error);

error_t *error_parseFromJSON(cJSON *errorJSON);

cJSON *error_convertToJSON(error_t *error);

#endif /* _error_H_ */

