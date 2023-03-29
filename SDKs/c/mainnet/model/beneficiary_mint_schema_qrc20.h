/*
 * beneficiary_mint_schema_qrc20.h
 *
 * Who is the beneficiary of this transaction
 */

#ifndef _beneficiary_mint_schema_qrc20_H_
#define _beneficiary_mint_schema_qrc20_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct beneficiary_mint_schema_qrc20_t beneficiary_mint_schema_qrc20_t;

#include "mint_schema_qrc20.h"



typedef struct beneficiary_mint_schema_qrc20_t {
    char *account_id; // string
    struct mint_schema_qrc20_t *mint; //model

} beneficiary_mint_schema_qrc20_t;

beneficiary_mint_schema_qrc20_t *beneficiary_mint_schema_qrc20_create(
    char *account_id,
    mint_schema_qrc20_t *mint
);

void beneficiary_mint_schema_qrc20_free(beneficiary_mint_schema_qrc20_t *beneficiary_mint_schema_qrc20);

beneficiary_mint_schema_qrc20_t *beneficiary_mint_schema_qrc20_parseFromJSON(cJSON *beneficiary_mint_schema_qrc20JSON);

cJSON *beneficiary_mint_schema_qrc20_convertToJSON(beneficiary_mint_schema_qrc20_t *beneficiary_mint_schema_qrc20);

#endif /* _beneficiary_mint_schema_qrc20_H_ */

