/*
 * burn_request_details_schema_qrc721.h
 *
 * 
 */

#ifndef _burn_request_details_schema_qrc721_H_
#define _burn_request_details_schema_qrc721_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct burn_request_details_schema_qrc721_t burn_request_details_schema_qrc721_t;

#include "owner_burn_schema.h"



typedef struct burn_request_details_schema_qrc721_t {
    struct owner_burn_schema_t *owner; //model
    char *overledger_signing_type; // string

} burn_request_details_schema_qrc721_t;

burn_request_details_schema_qrc721_t *burn_request_details_schema_qrc721_create(
    owner_burn_schema_t *owner,
    char *overledger_signing_type
);

void burn_request_details_schema_qrc721_free(burn_request_details_schema_qrc721_t *burn_request_details_schema_qrc721);

burn_request_details_schema_qrc721_t *burn_request_details_schema_qrc721_parseFromJSON(cJSON *burn_request_details_schema_qrc721JSON);

cJSON *burn_request_details_schema_qrc721_convertToJSON(burn_request_details_schema_qrc721_t *burn_request_details_schema_qrc721);

#endif /* _burn_request_details_schema_qrc721_H_ */

