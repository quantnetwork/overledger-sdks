/*
 * payment.h
 *
 * 
 */

#ifndef _payment_H_
#define _payment_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_t payment_t;




typedef struct payment_t {
    char *amount; // string
    char *unit; // string
    char *issuer; // string

} payment_t;

payment_t *payment_create(
    char *amount,
    char *unit,
    char *issuer
);

void payment_free(payment_t *payment);

payment_t *payment_parseFromJSON(cJSON *paymentJSON);

cJSON *payment_convertToJSON(payment_t *payment);

#endif /* _payment_H_ */

