/*
 * secondary_account_owner_schema.h
 *
 * 
 */

#ifndef _secondary_account_owner_schema_H_
#define _secondary_account_owner_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct secondary_account_owner_schema_t secondary_account_owner_schema_t;




typedef struct secondary_account_owner_schema_t {
    char *account_id; // string
    char *unit; // string

} secondary_account_owner_schema_t;

secondary_account_owner_schema_t *secondary_account_owner_schema_create(
    char *account_id,
    char *unit
);

void secondary_account_owner_schema_free(secondary_account_owner_schema_t *secondary_account_owner_schema);

secondary_account_owner_schema_t *secondary_account_owner_schema_parseFromJSON(cJSON *secondary_account_owner_schemaJSON);

cJSON *secondary_account_owner_schema_convertToJSON(secondary_account_owner_schema_t *secondary_account_owner_schema);

#endif /* _secondary_account_owner_schema_H_ */

