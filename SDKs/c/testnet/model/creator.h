/*
 * creator.h
 *
 * Where is this transaction coming from
 */

#ifndef _creator_H_
#define _creator_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creator_t creator_t;




typedef struct creator_t {
    char *account_id; // string

} creator_t;

creator_t *creator_create(
    char *account_id
);

void creator_free(creator_t *creator);

creator_t *creator_parseFromJSON(cJSON *creatorJSON);

cJSON *creator_convertToJSON(creator_t *creator);

#endif /* _creator_H_ */

