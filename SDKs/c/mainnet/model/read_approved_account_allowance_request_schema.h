/*
 * read_approved_account_allowance_request_schema.h
 *
 * 
 */

#ifndef _read_approved_account_allowance_request_schema_H_
#define _read_approved_account_allowance_request_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct read_approved_account_allowance_request_schema_t read_approved_account_allowance_request_schema_t;

#include "location.h"
#include "object.h"



typedef struct read_approved_account_allowance_request_schema_t {
    object_t *request_details; //object
    struct location_t *location; //model

} read_approved_account_allowance_request_schema_t;

read_approved_account_allowance_request_schema_t *read_approved_account_allowance_request_schema_create(
    object_t *request_details,
    location_t *location
);

void read_approved_account_allowance_request_schema_free(read_approved_account_allowance_request_schema_t *read_approved_account_allowance_request_schema);

read_approved_account_allowance_request_schema_t *read_approved_account_allowance_request_schema_parseFromJSON(cJSON *read_approved_account_allowance_request_schemaJSON);

cJSON *read_approved_account_allowance_request_schema_convertToJSON(read_approved_account_allowance_request_schema_t *read_approved_account_allowance_request_schema);

#endif /* _read_approved_account_allowance_request_schema_H_ */

