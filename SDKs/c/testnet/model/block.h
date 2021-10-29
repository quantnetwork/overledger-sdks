/*
 * block.h
 *
 * 
 */

#ifndef _block_H_
#define _block_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct block_t block_t;

#include "block_hash.h"
#include "block_size.h"
#include "linked_blocks.h"
#include "object.h"



typedef struct block_t {
    char *block_id; // string
    int number; //numeric
    list_t *transaction_ids; //primitive container
    list_t *size; //nonprimitive container
    list_t *hashes; //nonprimitive container
    struct linked_blocks_t *linked_blocks; //model
    int number_of_transactions; //numeric
    char *message; // string
    int timestamp; //numeric
    object_t *native_data; //object

} block_t;

block_t *block_create(
    char *block_id,
    int number,
    list_t *transaction_ids,
    list_t *size,
    list_t *hashes,
    linked_blocks_t *linked_blocks,
    int number_of_transactions,
    char *message,
    int timestamp,
    object_t *native_data
);

void block_free(block_t *block);

block_t *block_parseFromJSON(cJSON *blockJSON);

cJSON *block_convertToJSON(block_t *block);

#endif /* _block_H_ */

