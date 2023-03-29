/*
 * mint_request_details_schema_qrc721.h
 *
 * 
 */

#ifndef _mint_request_details_schema_qrc721_H_
#define _mint_request_details_schema_qrc721_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mint_request_details_schema_qrc721_t mint_request_details_schema_qrc721_t;

#include "beneficiary_mint_schema_qrc721.h"
#include "creator_mint_schema.h"



typedef struct mint_request_details_schema_qrc721_t {
    struct beneficiary_mint_schema_qrc721_t *beneficiary; //model
    struct creator_mint_schema_t *creator; //model
    char *overledger_signing_type; // string

} mint_request_details_schema_qrc721_t;

mint_request_details_schema_qrc721_t *mint_request_details_schema_qrc721_create(
    beneficiary_mint_schema_qrc721_t *beneficiary,
    creator_mint_schema_t *creator,
    char *overledger_signing_type
);

void mint_request_details_schema_qrc721_free(mint_request_details_schema_qrc721_t *mint_request_details_schema_qrc721);

mint_request_details_schema_qrc721_t *mint_request_details_schema_qrc721_parseFromJSON(cJSON *mint_request_details_schema_qrc721JSON);

cJSON *mint_request_details_schema_qrc721_convertToJSON(mint_request_details_schema_qrc721_t *mint_request_details_schema_qrc721);

#endif /* _mint_request_details_schema_qrc721_H_ */

