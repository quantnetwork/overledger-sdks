/*
 * read_token_owner_request_details_schema.h
 *
 * 
 */

#ifndef _read_token_owner_request_details_schema_H_
#define _read_token_owner_request_details_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct read_token_owner_request_details_schema_t read_token_owner_request_details_schema_t;




typedef struct read_token_owner_request_details_schema_t {
    char *token_id; // string
    char *token_name; // string

} read_token_owner_request_details_schema_t;

read_token_owner_request_details_schema_t *read_token_owner_request_details_schema_create(
    char *token_id,
    char *token_name
);

void read_token_owner_request_details_schema_free(read_token_owner_request_details_schema_t *read_token_owner_request_details_schema);

read_token_owner_request_details_schema_t *read_token_owner_request_details_schema_parseFromJSON(cJSON *read_token_owner_request_details_schemaJSON);

cJSON *read_token_owner_request_details_schema_convertToJSON(read_token_owner_request_details_schema_t *read_token_owner_request_details_schema);

#endif /* _read_token_owner_request_details_schema_H_ */

