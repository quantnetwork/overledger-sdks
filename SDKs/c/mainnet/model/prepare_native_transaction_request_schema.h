/*
 * prepare_native_transaction_request_schema.h
 *
 * 
 */

#ifndef _prepare_native_transaction_request_schema_H_
#define _prepare_native_transaction_request_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct prepare_native_transaction_request_schema_t prepare_native_transaction_request_schema_t;

#include "location.h"



typedef struct prepare_native_transaction_request_schema_t {
    struct location_t *location; //model
    char *type; // string

} prepare_native_transaction_request_schema_t;

prepare_native_transaction_request_schema_t *prepare_native_transaction_request_schema_create(
    location_t *location,
    char *type
);

void prepare_native_transaction_request_schema_free(prepare_native_transaction_request_schema_t *prepare_native_transaction_request_schema);

prepare_native_transaction_request_schema_t *prepare_native_transaction_request_schema_parseFromJSON(cJSON *prepare_native_transaction_request_schemaJSON);

cJSON *prepare_native_transaction_request_schema_convertToJSON(prepare_native_transaction_request_schema_t *prepare_native_transaction_request_schema);

#endif /* _prepare_native_transaction_request_schema_H_ */

