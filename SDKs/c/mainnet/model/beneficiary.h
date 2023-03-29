/*
 * beneficiary.h
 *
 * The Destination of this transaction
 */

#ifndef _beneficiary_H_
#define _beneficiary_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct beneficiary_t beneficiary_t;

#include "mint.h"



typedef struct beneficiary_t {
    char *account_id; // string
    struct mint_t *mint; //model

} beneficiary_t;

beneficiary_t *beneficiary_create(
    char *account_id,
    mint_t *mint
);

void beneficiary_free(beneficiary_t *beneficiary);

beneficiary_t *beneficiary_parseFromJSON(cJSON *beneficiaryJSON);

cJSON *beneficiary_convertToJSON(beneficiary_t *beneficiary);

#endif /* _beneficiary_H_ */

