/*
 * transaction.h
 *
 * Smallest unit of a work process related to interactions with distributed ledgers
 */

#ifndef _transaction_H_
#define _transaction_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transaction_t transaction_t;

#include "destination.h"
#include "fee.h"
#include "object.h"
#include "origin.h"
#include "payment.h"



typedef struct transaction_t {
    list_t *signature; //primitive container
    list_t *origin; //nonprimitive container
    struct fee_t *fee; //model
    list_t *destination; //nonprimitive container
    char *_signed; // string
    list_t *total_payment_amount; //nonprimitive container
    char *message; // string
    char *transaction_id; // string
    list_t *encoded; //primitive container
    object_t *native_data; //object
    object_t *extra_fields; //object

} transaction_t;

transaction_t *transaction_create(
    list_t *signature,
    list_t *origin,
    fee_t *fee,
    list_t *destination,
    char *_signed,
    list_t *total_payment_amount,
    char *message,
    char *transaction_id,
    list_t *encoded,
    object_t *native_data,
    object_t *extra_fields
);

void transaction_free(transaction_t *transaction);

transaction_t *transaction_parseFromJSON(cJSON *transactionJSON);

cJSON *transaction_convertToJSON(transaction_t *transaction);

#endif /* _transaction_H_ */

