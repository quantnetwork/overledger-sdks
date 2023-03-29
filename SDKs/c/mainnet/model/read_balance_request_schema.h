/*
 * read_balance_request_schema.h
 *
 * 
 */

#ifndef _read_balance_request_schema_H_
#define _read_balance_request_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct read_balance_request_schema_t read_balance_request_schema_t;

#include "location.h"
#include "read_balance_request_details_schema.h"



typedef struct read_balance_request_schema_t {
    struct read_balance_request_details_schema_t *request_details; //model
    struct location_t *location; //model

} read_balance_request_schema_t;

read_balance_request_schema_t *read_balance_request_schema_create(
    read_balance_request_details_schema_t *request_details,
    location_t *location
);

void read_balance_request_schema_free(read_balance_request_schema_t *read_balance_request_schema);

read_balance_request_schema_t *read_balance_request_schema_parseFromJSON(cJSON *read_balance_request_schemaJSON);

cJSON *read_balance_request_schema_convertToJSON(read_balance_request_schema_t *read_balance_request_schema);

#endif /* _read_balance_request_schema_H_ */

