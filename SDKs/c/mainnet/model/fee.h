/*
 * fee.h
 *
 * 
 */

#ifndef _fee_H_
#define _fee_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fee_t fee_t;




typedef struct fee_t {
    char *amount; // string
    char *unit; // string

} fee_t;

fee_t *fee_create(
    char *amount,
    char *unit
);

void fee_free(fee_t *fee);

fee_t *fee_parseFromJSON(cJSON *feeJSON);

cJSON *fee_convertToJSON(fee_t *fee);

#endif /* _fee_H_ */

