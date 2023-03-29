/*
 * read_token_owner_request_schema.h
 *
 * 
 */

#ifndef _read_token_owner_request_schema_H_
#define _read_token_owner_request_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct read_token_owner_request_schema_t read_token_owner_request_schema_t;

#include "location.h"
#include "read_token_owner_request_details_schema.h"



typedef struct read_token_owner_request_schema_t {
    struct read_token_owner_request_details_schema_t *request_details; //model
    struct location_t *location; //model

} read_token_owner_request_schema_t;

read_token_owner_request_schema_t *read_token_owner_request_schema_create(
    read_token_owner_request_details_schema_t *request_details,
    location_t *location
);

void read_token_owner_request_schema_free(read_token_owner_request_schema_t *read_token_owner_request_schema);

read_token_owner_request_schema_t *read_token_owner_request_schema_parseFromJSON(cJSON *read_token_owner_request_schemaJSON);

cJSON *read_token_owner_request_schema_convertToJSON(read_token_owner_request_schema_t *read_token_owner_request_schema);

#endif /* _read_token_owner_request_schema_H_ */

