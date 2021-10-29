/*
 * status.h
 *
 * 
 */

#ifndef _status_H_
#define _status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_t status_t;




typedef struct status_t {
    char *code; // string
    char *description; // string
    char *message; // string
    char *value; // string
    char *timestamp; // string

} status_t;

status_t *status_create(
    char *code,
    char *description,
    char *message,
    char *value,
    char *timestamp
);

void status_free(status_t *status);

status_t *status_parseFromJSON(cJSON *statusJSON);

cJSON *status_convertToJSON(status_t *status);

#endif /* _status_H_ */

