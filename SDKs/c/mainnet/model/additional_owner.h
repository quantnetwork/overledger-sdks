/*
 * additional_owner.h
 *
 * Who is authorized as an operator on behalf of the Owner.
 */

#ifndef _additional_owner_H_
#define _additional_owner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct additional_owner_t additional_owner_t;




typedef struct additional_owner_t {
    char *account_id; // string

} additional_owner_t;

additional_owner_t *additional_owner_create(
    char *account_id
);

void additional_owner_free(additional_owner_t *additional_owner);

additional_owner_t *additional_owner_parseFromJSON(cJSON *additional_ownerJSON);

cJSON *additional_owner_convertToJSON(additional_owner_t *additional_owner);

#endif /* _additional_owner_H_ */

