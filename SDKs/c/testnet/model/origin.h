/*
 * origin.h
 *
 * Where is this transaction coming from
 */

#ifndef _origin_H_
#define _origin_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct origin_t origin_t;

#include "smart_contract.h"



typedef struct origin_t {
    char *sequence; // string
    struct smart_contract_t *smart_contract; //model
    char *origin_id; // string

} origin_t;

origin_t *origin_create(
    char *sequence,
    smart_contract_t *smart_contract,
    char *origin_id
);

void origin_free(origin_t *origin);

origin_t *origin_parseFromJSON(cJSON *originJSON);

cJSON *origin_convertToJSON(origin_t *origin);

#endif /* _origin_H_ */

