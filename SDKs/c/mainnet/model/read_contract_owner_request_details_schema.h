/*
 * read_contract_owner_request_details_schema.h
 *
 * 
 */

#ifndef _read_contract_owner_request_details_schema_H_
#define _read_contract_owner_request_details_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct read_contract_owner_request_details_schema_t read_contract_owner_request_details_schema_t;




typedef struct read_contract_owner_request_details_schema_t {
    char *token_name; // string

} read_contract_owner_request_details_schema_t;

read_contract_owner_request_details_schema_t *read_contract_owner_request_details_schema_create(
    char *token_name
);

void read_contract_owner_request_details_schema_free(read_contract_owner_request_details_schema_t *read_contract_owner_request_details_schema);

read_contract_owner_request_details_schema_t *read_contract_owner_request_details_schema_parseFromJSON(cJSON *read_contract_owner_request_details_schemaJSON);

cJSON *read_contract_owner_request_details_schema_convertToJSON(read_contract_owner_request_details_schema_t *read_contract_owner_request_details_schema);

#endif /* _read_contract_owner_request_details_schema_H_ */

