/*
 * smart_contract_search_schema.h
 *
 * 
 */

#ifndef _smart_contract_search_schema_H_
#define _smart_contract_search_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct smart_contract_search_schema_t smart_contract_search_schema_t;

#include "smart_contract_search_function_schema.h"



typedef struct smart_contract_search_schema_t {
    struct smart_contract_search_function_schema_t *function; //model
    char *smart_contract_id; // string

} smart_contract_search_schema_t;

smart_contract_search_schema_t *smart_contract_search_schema_create(
    smart_contract_search_function_schema_t *function,
    char *smart_contract_id
);

void smart_contract_search_schema_free(smart_contract_search_schema_t *smart_contract_search_schema);

smart_contract_search_schema_t *smart_contract_search_schema_parseFromJSON(cJSON *smart_contract_search_schemaJSON);

cJSON *smart_contract_search_schema_convertToJSON(smart_contract_search_schema_t *smart_contract_search_schema);

#endif /* _smart_contract_search_schema_H_ */

