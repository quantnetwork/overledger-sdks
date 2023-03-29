/*
 * owner_remove_secondary_schema.h
 *
 * Who are the owner of this transaction
 */

#ifndef _owner_remove_secondary_schema_H_
#define _owner_remove_secondary_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct owner_remove_secondary_schema_t owner_remove_secondary_schema_t;




typedef struct owner_remove_secondary_schema_t {
    char *account_id; // string
    char *unit; // string

} owner_remove_secondary_schema_t;

owner_remove_secondary_schema_t *owner_remove_secondary_schema_create(
    char *account_id,
    char *unit
);

void owner_remove_secondary_schema_free(owner_remove_secondary_schema_t *owner_remove_secondary_schema);

owner_remove_secondary_schema_t *owner_remove_secondary_schema_parseFromJSON(cJSON *owner_remove_secondary_schemaJSON);

cJSON *owner_remove_secondary_schema_convertToJSON(owner_remove_secondary_schema_t *owner_remove_secondary_schema);

#endif /* _owner_remove_secondary_schema_H_ */

