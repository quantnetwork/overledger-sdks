/*
 * creator_mint_schema.h
 *
 * Who is the creator of this transaction
 */

#ifndef _creator_mint_schema_H_
#define _creator_mint_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creator_mint_schema_t creator_mint_schema_t;




typedef struct creator_mint_schema_t {
    char *account_id; // string

} creator_mint_schema_t;

creator_mint_schema_t *creator_mint_schema_create(
    char *account_id
);

void creator_mint_schema_free(creator_mint_schema_t *creator_mint_schema);

creator_mint_schema_t *creator_mint_schema_parseFromJSON(cJSON *creator_mint_schemaJSON);

cJSON *creator_mint_schema_convertToJSON(creator_mint_schema_t *creator_mint_schema);

#endif /* _creator_mint_schema_H_ */

