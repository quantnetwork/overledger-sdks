/*
 * block_size.h
 *
 * 
 */

#ifndef _block_size_H_
#define _block_size_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct block_size_t block_size_t;




typedef struct block_size_t {
    char *type; // string
    char *value; // string
    char *key; // string

} block_size_t;

block_size_t *block_size_create(
    char *type,
    char *value,
    char *key
);

void block_size_free(block_size_t *block_size);

block_size_t *block_size_parseFromJSON(cJSON *block_sizeJSON);

cJSON *block_size_convertToJSON(block_size_t *block_size);

#endif /* _block_size_H_ */

