/*
 * owner.h
 *
 * Who is the owner of the tokens.
 */

#ifndef _owner_H_
#define _owner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct owner_t owner_t;

#include "burn.h"



typedef struct owner_t {
    char *account_id; // string
    struct burn_t *burn; //model
    char *unit; // string

} owner_t;

owner_t *owner_create(
    char *account_id,
    burn_t *burn,
    char *unit
);

void owner_free(owner_t *owner);

owner_t *owner_parseFromJSON(cJSON *ownerJSON);

cJSON *owner_convertToJSON(owner_t *owner);

#endif /* _owner_H_ */

