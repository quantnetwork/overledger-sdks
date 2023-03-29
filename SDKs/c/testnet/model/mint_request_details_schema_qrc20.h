/*
 * mint_request_details_schema_qrc20.h
 *
 * 
 */

#ifndef _mint_request_details_schema_qrc20_H_
#define _mint_request_details_schema_qrc20_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mint_request_details_schema_qrc20_t mint_request_details_schema_qrc20_t;

#include "beneficiary_mint_schema_qrc20.h"
#include "creator_mint_schema.h"



typedef struct mint_request_details_schema_qrc20_t {
    struct creator_mint_schema_t *creator; //model
    struct beneficiary_mint_schema_qrc20_t *beneficiary; //model
    char *message; // string
    char *overledger_signing_type; // string

} mint_request_details_schema_qrc20_t;

mint_request_details_schema_qrc20_t *mint_request_details_schema_qrc20_create(
    creator_mint_schema_t *creator,
    beneficiary_mint_schema_qrc20_t *beneficiary,
    char *message,
    char *overledger_signing_type
);

void mint_request_details_schema_qrc20_free(mint_request_details_schema_qrc20_t *mint_request_details_schema_qrc20);

mint_request_details_schema_qrc20_t *mint_request_details_schema_qrc20_parseFromJSON(cJSON *mint_request_details_schema_qrc20JSON);

cJSON *mint_request_details_schema_qrc20_convertToJSON(mint_request_details_schema_qrc20_t *mint_request_details_schema_qrc20);

#endif /* _mint_request_details_schema_qrc20_H_ */

