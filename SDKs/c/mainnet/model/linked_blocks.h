/*
 * linked_blocks.h
 *
 * 
 */

#ifndef _linked_blocks_H_
#define _linked_blocks_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct linked_blocks_t linked_blocks_t;




typedef struct linked_blocks_t {
    char *parent; // string
    char *child; // string

} linked_blocks_t;

linked_blocks_t *linked_blocks_create(
    char *parent,
    char *child
);

void linked_blocks_free(linked_blocks_t *linked_blocks);

linked_blocks_t *linked_blocks_parseFromJSON(cJSON *linked_blocksJSON);

cJSON *linked_blocks_convertToJSON(linked_blocks_t *linked_blocks);

#endif /* _linked_blocks_H_ */

