/*
 * utxo_destination.h
 *
 * 
 */

#ifndef _utxo_destination_H_
#define _utxo_destination_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct utxo_destination_t utxo_destination_t;

#include "payment.h"
#include "utxo_smart_contract.h"



typedef struct utxo_destination_t {
    struct utxo_smart_contract_t *smart_contract; //model
    struct payment_t *payment; //model
    char *destination_id; // string

} utxo_destination_t;

utxo_destination_t *utxo_destination_create(
    utxo_smart_contract_t *smart_contract,
    payment_t *payment,
    char *destination_id
);

void utxo_destination_free(utxo_destination_t *utxo_destination);

utxo_destination_t *utxo_destination_parseFromJSON(cJSON *utxo_destinationJSON);

cJSON *utxo_destination_convertToJSON(utxo_destination_t *utxo_destination);

#endif /* _utxo_destination_H_ */

