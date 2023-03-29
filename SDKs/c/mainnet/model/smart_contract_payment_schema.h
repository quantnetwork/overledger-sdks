/*
 * smart_contract_payment_schema.h
 *
 * 
 */

#ifndef _smart_contract_payment_schema_H_
#define _smart_contract_payment_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct smart_contract_payment_schema_t smart_contract_payment_schema_t;




typedef struct smart_contract_payment_schema_t {
    char *amount; // string
    char *unit; // string

} smart_contract_payment_schema_t;

smart_contract_payment_schema_t *smart_contract_payment_schema_create(
    char *amount,
    char *unit
);

void smart_contract_payment_schema_free(smart_contract_payment_schema_t *smart_contract_payment_schema);

smart_contract_payment_schema_t *smart_contract_payment_schema_parseFromJSON(cJSON *smart_contract_payment_schemaJSON);

cJSON *smart_contract_payment_schema_convertToJSON(smart_contract_payment_schema_t *smart_contract_payment_schema);

#endif /* _smart_contract_payment_schema_H_ */

