/*
 * receiver.h
 *
 * The Destination of this transaction.
 */

#ifndef _receiver_H_
#define _receiver_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct receiver_t receiver_t;

#include "transfer.h"



typedef struct receiver_t {
    char *account_id; // string
    struct transfer_t *transfer; //model

} receiver_t;

receiver_t *receiver_create(
    char *account_id,
    transfer_t *transfer
);

void receiver_free(receiver_t *receiver);

receiver_t *receiver_parseFromJSON(cJSON *receiverJSON);

cJSON *receiver_convertToJSON(receiver_t *receiver);

#endif /* _receiver_H_ */

