/*
 * execute_search_utxo_response_schema.h
 *
 * 
 */

#ifndef _execute_search_utxo_response_schema_H_
#define _execute_search_utxo_response_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct execute_search_utxo_response_schema_t execute_search_utxo_response_schema_t;

#include "location.h"
#include "status.h"
#include "utxo_destination.h"
#include "utxo_native_data.h"



typedef struct execute_search_utxo_response_schema_t {
    char *utxo_id; // string
    list_t *destination; //nonprimitive container
    struct location_t *location; //model
    char *timestamp; // string
    struct status_t *status; //model
    struct utxo_native_data_t *native_data; //model

} execute_search_utxo_response_schema_t;

execute_search_utxo_response_schema_t *execute_search_utxo_response_schema_create(
    char *utxo_id,
    list_t *destination,
    location_t *location,
    char *timestamp,
    status_t *status,
    utxo_native_data_t *native_data
);

void execute_search_utxo_response_schema_free(execute_search_utxo_response_schema_t *execute_search_utxo_response_schema);

execute_search_utxo_response_schema_t *execute_search_utxo_response_schema_parseFromJSON(cJSON *execute_search_utxo_response_schemaJSON);

cJSON *execute_search_utxo_response_schema_convertToJSON(execute_search_utxo_response_schema_t *execute_search_utxo_response_schema);

#endif /* _execute_search_utxo_response_schema_H_ */

