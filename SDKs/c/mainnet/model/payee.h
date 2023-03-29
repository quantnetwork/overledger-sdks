/*
 * payee.h
 *
 * The Destination of this transaction
 */

#ifndef _payee_H_
#define _payee_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payee_t payee_t;

#include "payment.h"



typedef struct payee_t {
    struct payment_t *payment; //model
    char *payee_id; // string

} payee_t;

payee_t *payee_create(
    payment_t *payment,
    char *payee_id
);

void payee_free(payee_t *payee);

payee_t *payee_parseFromJSON(cJSON *payeeJSON);

cJSON *payee_convertToJSON(payee_t *payee);

#endif /* _payee_H_ */

