/*
 * read_contract_owner_request_schema.h
 *
 * 
 */

#ifndef _read_contract_owner_request_schema_H_
#define _read_contract_owner_request_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct read_contract_owner_request_schema_t read_contract_owner_request_schema_t;

#include "location.h"
#include "read_contract_owner_request_details_schema.h"



typedef struct read_contract_owner_request_schema_t {
    struct read_contract_owner_request_details_schema_t *request_details; //model
    struct location_t *location; //model

} read_contract_owner_request_schema_t;

read_contract_owner_request_schema_t *read_contract_owner_request_schema_create(
    read_contract_owner_request_details_schema_t *request_details,
    location_t *location
);

void read_contract_owner_request_schema_free(read_contract_owner_request_schema_t *read_contract_owner_request_schema);

read_contract_owner_request_schema_t *read_contract_owner_request_schema_parseFromJSON(cJSON *read_contract_owner_request_schemaJSON);

cJSON *read_contract_owner_request_schema_convertToJSON(read_contract_owner_request_schema_t *read_contract_owner_request_schema);

#endif /* _read_contract_owner_request_schema_H_ */

