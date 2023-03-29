/*
 * destination_payment_schema.h
 *
 * List of the recipients of this transaction.  **Warning:** Bitcoin transaction fees will be deducted from the last destination provided in the transaction payment request. If the last destination payment value is not enough to cover the fees, your Bitcoin payment transaction will fail
 */

#ifndef _destination_payment_schema_H_
#define _destination_payment_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct destination_payment_schema_t destination_payment_schema_t;

#include "payment_schema.h"



typedef struct destination_payment_schema_t {
    char *destination_id; // string
    struct payment_schema_t *payment; //model

} destination_payment_schema_t;

destination_payment_schema_t *destination_payment_schema_create(
    char *destination_id,
    payment_schema_t *payment
);

void destination_payment_schema_free(destination_payment_schema_t *destination_payment_schema);

destination_payment_schema_t *destination_payment_schema_parseFromJSON(cJSON *destination_payment_schemaJSON);

cJSON *destination_payment_schema_convertToJSON(destination_payment_schema_t *destination_payment_schema);

#endif /* _destination_payment_schema_H_ */

