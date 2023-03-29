/*
 * read_balance_request_details_schema.h
 *
 * 
 */

#ifndef _read_balance_request_details_schema_H_
#define _read_balance_request_details_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct read_balance_request_details_schema_t read_balance_request_details_schema_t;




typedef struct read_balance_request_details_schema_t {
    char *token_name; // string
    char *account_id; // string

} read_balance_request_details_schema_t;

read_balance_request_details_schema_t *read_balance_request_details_schema_create(
    char *token_name,
    char *account_id
);

void read_balance_request_details_schema_free(read_balance_request_details_schema_t *read_balance_request_details_schema);

read_balance_request_details_schema_t *read_balance_request_details_schema_parseFromJSON(cJSON *read_balance_request_details_schemaJSON);

cJSON *read_balance_request_details_schema_convertToJSON(read_balance_request_details_schema_t *read_balance_request_details_schema);

#endif /* _read_balance_request_details_schema_H_ */

