/*
 * status_update_schema.h
 *
 * 
 */

#ifndef _status_update_schema_H_
#define _status_update_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_update_schema_t status_update_schema_t;




typedef struct status_update_schema_t {
    char *value; // string

} status_update_schema_t;

status_update_schema_t *status_update_schema_create(
    char *value
);

void status_update_schema_free(status_update_schema_t *status_update_schema);

status_update_schema_t *status_update_schema_parseFromJSON(cJSON *status_update_schemaJSON);

cJSON *status_update_schema_convertToJSON(status_update_schema_t *status_update_schema);

#endif /* _status_update_schema_H_ */

