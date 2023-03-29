/*
 * beneficiary_mint_schema_qrc721.h
 *
 * Who is the beneficiary of this transaction
 */

#ifndef _beneficiary_mint_schema_qrc721_H_
#define _beneficiary_mint_schema_qrc721_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct beneficiary_mint_schema_qrc721_t beneficiary_mint_schema_qrc721_t;

#include "mint_schema_qrc721.h"



typedef struct beneficiary_mint_schema_qrc721_t {
    char *account_id; // string
    struct mint_schema_qrc721_t *mint; //model

} beneficiary_mint_schema_qrc721_t;

beneficiary_mint_schema_qrc721_t *beneficiary_mint_schema_qrc721_create(
    char *account_id,
    mint_schema_qrc721_t *mint
);

void beneficiary_mint_schema_qrc721_free(beneficiary_mint_schema_qrc721_t *beneficiary_mint_schema_qrc721);

beneficiary_mint_schema_qrc721_t *beneficiary_mint_schema_qrc721_parseFromJSON(cJSON *beneficiary_mint_schema_qrc721JSON);

cJSON *beneficiary_mint_schema_qrc721_convertToJSON(beneficiary_mint_schema_qrc721_t *beneficiary_mint_schema_qrc721);

#endif /* _beneficiary_mint_schema_qrc721_H_ */

