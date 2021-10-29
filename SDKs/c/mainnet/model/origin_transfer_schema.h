/*
 * origin_transfer_schema.h
 *
 * 
 */

#ifndef _origin_transfer_schema_H_
#define _origin_transfer_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct origin_transfer_schema_t origin_transfer_schema_t;




typedef struct origin_transfer_schema_t {
    char *origin_id; // string

} origin_transfer_schema_t;

origin_transfer_schema_t *origin_transfer_schema_create(
    char *origin_id
);

void origin_transfer_schema_free(origin_transfer_schema_t *origin_transfer_schema);

origin_transfer_schema_t *origin_transfer_schema_parseFromJSON(cJSON *origin_transfer_schemaJSON);

cJSON *origin_transfer_schema_convertToJSON(origin_transfer_schema_t *origin_transfer_schema);

#endif /* _origin_transfer_schema_H_ */

