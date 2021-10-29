/*
 * execute_smart_contract_read_response_schema.h
 *
 * 
 */

#ifndef _execute_smart_contract_read_response_schema_H_
#define _execute_smart_contract_read_response_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct execute_smart_contract_read_response_schema_t execute_smart_contract_read_response_schema_t;

#include "location.h"
#include "smart_contract_read_schema.h"



typedef struct execute_smart_contract_read_response_schema_t {
    struct smart_contract_read_schema_t *smart_contract; //model
    struct location_t *location; //model

} execute_smart_contract_read_response_schema_t;

execute_smart_contract_read_response_schema_t *execute_smart_contract_read_response_schema_create(
    smart_contract_read_schema_t *smart_contract,
    location_t *location
);

void execute_smart_contract_read_response_schema_free(execute_smart_contract_read_response_schema_t *execute_smart_contract_read_response_schema);

execute_smart_contract_read_response_schema_t *execute_smart_contract_read_response_schema_parseFromJSON(cJSON *execute_smart_contract_read_response_schemaJSON);

cJSON *execute_smart_contract_read_response_schema_convertToJSON(execute_smart_contract_read_response_schema_t *execute_smart_contract_read_response_schema);

#endif /* _execute_smart_contract_read_response_schema_H_ */

