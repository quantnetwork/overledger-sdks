/*
 * destination.h
 *
 * The Destination of this transaction
 */

#ifndef _destination_H_
#define _destination_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct destination_t destination_t;

#include "payment.h"
#include "smart_contract.h"
#include "transfer.h"



typedef struct destination_t {
    struct transfer_t *transfer; //model
    struct smart_contract_t *smart_contract; //model
    struct payment_t *payment; //model
    char *destination_id; // string

} destination_t;

destination_t *destination_create(
    transfer_t *transfer,
    smart_contract_t *smart_contract,
    payment_t *payment,
    char *destination_id
);

void destination_free(destination_t *destination);

destination_t *destination_parseFromJSON(cJSON *destinationJSON);

cJSON *destination_convertToJSON(destination_t *destination);

#endif /* _destination_H_ */

