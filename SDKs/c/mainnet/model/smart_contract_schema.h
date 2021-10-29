/*
 * smart_contract_schema.h
 *
 * 
 */

#ifndef _smart_contract_schema_H_
#define _smart_contract_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct smart_contract_schema_t smart_contract_schema_t;

#include "smart_contract_function_schema.h"



typedef struct smart_contract_schema_t {
    struct smart_contract_function_schema_t *function; //model

} smart_contract_schema_t;

smart_contract_schema_t *smart_contract_schema_create(
    smart_contract_function_schema_t *function
);

void smart_contract_schema_free(smart_contract_schema_t *smart_contract_schema);

smart_contract_schema_t *smart_contract_schema_parseFromJSON(cJSON *smart_contract_schemaJSON);

cJSON *smart_contract_schema_convertToJSON(smart_contract_schema_t *smart_contract_schema);

#endif /* _smart_contract_schema_H_ */

