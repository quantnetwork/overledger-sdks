/*
 * burn.h
 *
 * 
 */

#ifndef _burn_H_
#define _burn_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct burn_t burn_t;




typedef struct burn_t {
    char *token_name; // string
    char *amount; // string
    char *unit; // string
    char *metadata; // string
    char *token_id; // string

} burn_t;

burn_t *burn_create(
    char *token_name,
    char *amount,
    char *unit,
    char *metadata,
    char *token_id
);

void burn_free(burn_t *burn);

burn_t *burn_parseFromJSON(cJSON *burnJSON);

cJSON *burn_convertToJSON(burn_t *burn);

#endif /* _burn_H_ */

