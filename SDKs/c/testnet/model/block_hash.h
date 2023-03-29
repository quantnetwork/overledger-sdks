/*
 * block_hash.h
 *
 * 
 */

#ifndef _block_hash_H_
#define _block_hash_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct block_hash_t block_hash_t;




typedef struct block_hash_t {
    char *type; // string
    char *value; // string

} block_hash_t;

block_hash_t *block_hash_create(
    char *type,
    char *value
);

void block_hash_free(block_hash_t *block_hash);

block_hash_t *block_hash_parseFromJSON(cJSON *block_hashJSON);

cJSON *block_hash_convertToJSON(block_hash_t *block_hash);

#endif /* _block_hash_H_ */

