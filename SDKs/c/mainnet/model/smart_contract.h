/*
 * smart_contract.h
 *
 * Computer program storage in a DLT system where the outcome is recorded on the distributed ledger
 */

#ifndef _smart_contract_H_
#define _smart_contract_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct smart_contract_t smart_contract_t;

#include "function.h"
#include "object.h"



typedef struct smart_contract_t {
    char *detail; // string
    char *type; // string
    char *smart_contract_id; // string
    struct function_t *function; //model
    object_t *extra_fields; //object

} smart_contract_t;

smart_contract_t *smart_contract_create(
    char *detail,
    char *type,
    char *smart_contract_id,
    function_t *function,
    object_t *extra_fields
);

void smart_contract_free(smart_contract_t *smart_contract);

smart_contract_t *smart_contract_parseFromJSON(cJSON *smart_contractJSON);

cJSON *smart_contract_convertToJSON(smart_contract_t *smart_contract);

#endif /* _smart_contract_H_ */

