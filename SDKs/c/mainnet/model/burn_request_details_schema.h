/*
 * burn_request_details_schema.h
 *
 * 
 */

#ifndef _burn_request_details_schema_H_
#define _burn_request_details_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct burn_request_details_schema_t burn_request_details_schema_t;

#include "owner_burn_schema.h"



typedef struct burn_request_details_schema_t {
    list_t *owner; //nonprimitive container
    char *message; // string
    char *overledger_signing_type; // string

} burn_request_details_schema_t;

burn_request_details_schema_t *burn_request_details_schema_create(
    list_t *owner,
    char *message,
    char *overledger_signing_type
);

void burn_request_details_schema_free(burn_request_details_schema_t *burn_request_details_schema);

burn_request_details_schema_t *burn_request_details_schema_parseFromJSON(cJSON *burn_request_details_schemaJSON);

cJSON *burn_request_details_schema_convertToJSON(burn_request_details_schema_t *burn_request_details_schema);

#endif /* _burn_request_details_schema_H_ */

