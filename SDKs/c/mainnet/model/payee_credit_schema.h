/*
 * payee_credit_schema.h
 *
 * Who are the payees of this transaction
 */

#ifndef _payee_credit_schema_H_
#define _payee_credit_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payee_credit_schema_t payee_credit_schema_t;

#include "payment_schema.h"



typedef struct payee_credit_schema_t {
    struct payment_schema_t *payment; //model
    char *payee_id; // string

} payee_credit_schema_t;

payee_credit_schema_t *payee_credit_schema_create(
    payment_schema_t *payment,
    char *payee_id
);

void payee_credit_schema_free(payee_credit_schema_t *payee_credit_schema);

payee_credit_schema_t *payee_credit_schema_parseFromJSON(cJSON *payee_credit_schemaJSON);

cJSON *payee_credit_schema_convertToJSON(payee_credit_schema_t *payee_credit_schema);

#endif /* _payee_credit_schema_H_ */

