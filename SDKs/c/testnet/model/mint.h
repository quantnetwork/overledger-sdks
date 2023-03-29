/*
 * mint.h
 *
 * 
 */

#ifndef _mint_H_
#define _mint_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mint_t mint_t;




typedef struct mint_t {
    char *token_name; // string
    char *amount; // string
    char *unit; // string
    char *metadata; // string
    char *token_id; // string

} mint_t;

mint_t *mint_create(
    char *token_name,
    char *amount,
    char *unit,
    char *metadata,
    char *token_id
);

void mint_free(mint_t *mint);

mint_t *mint_parseFromJSON(cJSON *mintJSON);

cJSON *mint_convertToJSON(mint_t *mint);

#endif /* _mint_H_ */

