/*
 * transfer_request_details_schema.h
 *
 * 
 */

#ifndef _transfer_request_details_schema_H_
#define _transfer_request_details_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transfer_request_details_schema_t transfer_request_details_schema_t;

#include "destination_transfer_schema.h"
#include "origin_transfer_schema.h"



typedef struct transfer_request_details_schema_t {
    list_t *destination; //nonprimitive container
    char *message; // string
    char *overledger_signing_type; // string
    list_t *origin; //nonprimitive container

} transfer_request_details_schema_t;

transfer_request_details_schema_t *transfer_request_details_schema_create(
    list_t *destination,
    char *message,
    char *overledger_signing_type,
    list_t *origin
);

void transfer_request_details_schema_free(transfer_request_details_schema_t *transfer_request_details_schema);

transfer_request_details_schema_t *transfer_request_details_schema_parseFromJSON(cJSON *transfer_request_details_schemaJSON);

cJSON *transfer_request_details_schema_convertToJSON(transfer_request_details_schema_t *transfer_request_details_schema);

#endif /* _transfer_request_details_schema_H_ */

