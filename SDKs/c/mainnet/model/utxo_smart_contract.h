/*
 * utxo_smart_contract.h
 *
 * 
 */

#ifndef _utxo_smart_contract_H_
#define _utxo_smart_contract_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct utxo_smart_contract_t utxo_smart_contract_t;

#include "extra_fields.h"



typedef struct utxo_smart_contract_t {
    char *type; // string
    char *detail; // string
    struct extra_fields_t *extra_fields; //model

} utxo_smart_contract_t;

utxo_smart_contract_t *utxo_smart_contract_create(
    char *type,
    char *detail,
    extra_fields_t *extra_fields
);

void utxo_smart_contract_free(utxo_smart_contract_t *utxo_smart_contract);

utxo_smart_contract_t *utxo_smart_contract_parseFromJSON(cJSON *utxo_smart_contractJSON);

cJSON *utxo_smart_contract_convertToJSON(utxo_smart_contract_t *utxo_smart_contract);

#endif /* _utxo_smart_contract_H_ */

