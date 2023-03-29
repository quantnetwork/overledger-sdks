/*
 * owner_burn_schema.h
 *
 * Who is the owner of the tokens
 */

#ifndef _owner_burn_schema_H_
#define _owner_burn_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct owner_burn_schema_t owner_burn_schema_t;

#include "burn_schema.h"



typedef struct owner_burn_schema_t {
    char *account_id; // string
    struct burn_schema_t *burn; //model

} owner_burn_schema_t;

owner_burn_schema_t *owner_burn_schema_create(
    char *account_id,
    burn_schema_t *burn
);

void owner_burn_schema_free(owner_burn_schema_t *owner_burn_schema);

owner_burn_schema_t *owner_burn_schema_parseFromJSON(cJSON *owner_burn_schemaJSON);

cJSON *owner_burn_schema_convertToJSON(owner_burn_schema_t *owner_burn_schema);

#endif /* _owner_burn_schema_H_ */

