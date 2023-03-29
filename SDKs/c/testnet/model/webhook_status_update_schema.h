/*
 * webhook_status_update_schema.h
 *
 * 
 */

#ifndef _webhook_status_update_schema_H_
#define _webhook_status_update_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_status_update_schema_t webhook_status_update_schema_t;




typedef struct webhook_status_update_schema_t {
    char *value; // string

} webhook_status_update_schema_t;

webhook_status_update_schema_t *webhook_status_update_schema_create(
    char *value
);

void webhook_status_update_schema_free(webhook_status_update_schema_t *webhook_status_update_schema);

webhook_status_update_schema_t *webhook_status_update_schema_parseFromJSON(cJSON *webhook_status_update_schemaJSON);

cJSON *webhook_status_update_schema_convertToJSON(webhook_status_update_schema_t *webhook_status_update_schema);

#endif /* _webhook_status_update_schema_H_ */

