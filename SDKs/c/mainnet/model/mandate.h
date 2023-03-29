/*
 * mandate.h
 *
 * The Destination of this transaction
 */

#ifndef _mandate_H_
#define _mandate_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mandate_t mandate_t;

#include "payment.h"



typedef struct mandate_t {
    struct payment_t *payment; //model
    char *payee_id; // string

} mandate_t;

mandate_t *mandate_create(
    payment_t *payment,
    char *payee_id
);

void mandate_free(mandate_t *mandate);

mandate_t *mandate_parseFromJSON(cJSON *mandateJSON);

cJSON *mandate_convertToJSON(mandate_t *mandate);

#endif /* _mandate_H_ */

