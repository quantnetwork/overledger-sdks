/*
 * additional_owner_remove_secondary_schema.h
 *
 * Who are the additional owner of this transaction
 */

#ifndef _additional_owner_remove_secondary_schema_H_
#define _additional_owner_remove_secondary_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct additional_owner_remove_secondary_schema_t additional_owner_remove_secondary_schema_t;




typedef struct additional_owner_remove_secondary_schema_t {
    char *account_id; // string

} additional_owner_remove_secondary_schema_t;

additional_owner_remove_secondary_schema_t *additional_owner_remove_secondary_schema_create(
    char *account_id
);

void additional_owner_remove_secondary_schema_free(additional_owner_remove_secondary_schema_t *additional_owner_remove_secondary_schema);

additional_owner_remove_secondary_schema_t *additional_owner_remove_secondary_schema_parseFromJSON(cJSON *additional_owner_remove_secondary_schemaJSON);

cJSON *additional_owner_remove_secondary_schema_convertToJSON(additional_owner_remove_secondary_schema_t *additional_owner_remove_secondary_schema);

#endif /* _additional_owner_remove_secondary_schema_H_ */

