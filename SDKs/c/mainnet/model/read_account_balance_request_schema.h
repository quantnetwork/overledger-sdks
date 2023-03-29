/*
 * read_account_balance_request_schema.h
 *
 * 
 */

#ifndef _read_account_balance_request_schema_H_
#define _read_account_balance_request_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct read_account_balance_request_schema_t read_account_balance_request_schema_t;

#include "location.h"
#include "object.h"



typedef struct read_account_balance_request_schema_t {
    object_t *request_details; //object
    struct location_t *location; //model

} read_account_balance_request_schema_t;

read_account_balance_request_schema_t *read_account_balance_request_schema_create(
    object_t *request_details,
    location_t *location
);

void read_account_balance_request_schema_free(read_account_balance_request_schema_t *read_account_balance_request_schema);

read_account_balance_request_schema_t *read_account_balance_request_schema_parseFromJSON(cJSON *read_account_balance_request_schemaJSON);

cJSON *read_account_balance_request_schema_convertToJSON(read_account_balance_request_schema_t *read_account_balance_request_schema);

#endif /* _read_account_balance_request_schema_H_ */

