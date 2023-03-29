/*
 * sender.h
 *
 * Where is this transaction coming from.
 */

#ifndef _sender_H_
#define _sender_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sender_t sender_t;




typedef struct sender_t {
    char *account_id; // string

} sender_t;

sender_t *sender_create(
    char *account_id
);

void sender_free(sender_t *sender);

sender_t *sender_parseFromJSON(cJSON *senderJSON);

cJSON *sender_convertToJSON(sender_t *sender);

#endif /* _sender_H_ */

