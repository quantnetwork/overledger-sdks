/*
 * collector.h
 *
 * Who is the collector of the tokens.
 */

#ifndef _collector_H_
#define _collector_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct collector_t collector_t;

#include "transfer.h"



typedef struct collector_t {
    char *account_id; // string
    struct transfer_t *transfer; //model

} collector_t;

collector_t *collector_create(
    char *account_id,
    transfer_t *transfer
);

void collector_free(collector_t *collector);

collector_t *collector_parseFromJSON(cJSON *collectorJSON);

cJSON *collector_convertToJSON(collector_t *collector);

#endif /* _collector_H_ */

