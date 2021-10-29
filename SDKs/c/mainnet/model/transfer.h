/*
 * transfer.h
 *
 * 
 */

#ifndef _transfer_H_
#define _transfer_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transfer_t transfer_t;




typedef struct transfer_t {
    char *token_id; // string
    char *token_name; // string

} transfer_t;

transfer_t *transfer_create(
    char *token_id,
    char *token_name
);

void transfer_free(transfer_t *transfer);

transfer_t *transfer_parseFromJSON(cJSON *transferJSON);

cJSON *transfer_convertToJSON(transfer_t *transfer);

#endif /* _transfer_H_ */

