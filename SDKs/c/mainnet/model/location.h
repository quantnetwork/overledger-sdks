/*
 * location.h
 *
 * Unique reference to the ledger on a particular ledger network (optionally accessed from a particular node)
 */

#ifndef _location_H_
#define _location_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct location_t location_t;




typedef struct location_t {
    char *technology; // string
    char *network; // string

} location_t;

location_t *location_create(
    char *technology,
    char *network
);

void location_free(location_t *location);

location_t *location_parseFromJSON(cJSON *locationJSON);

cJSON *location_convertToJSON(location_t *location);

#endif /* _location_H_ */

