/*
 * smart_contract_input_parameter_schema.h
 *
 * 
 */

#ifndef _smart_contract_input_parameter_schema_H_
#define _smart_contract_input_parameter_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct smart_contract_input_parameter_schema_t smart_contract_input_parameter_schema_t;




typedef struct smart_contract_input_parameter_schema_t {
    char *type; // string
    char *value; // string

} smart_contract_input_parameter_schema_t;

smart_contract_input_parameter_schema_t *smart_contract_input_parameter_schema_create(
    char *type,
    char *value
);

void smart_contract_input_parameter_schema_free(smart_contract_input_parameter_schema_t *smart_contract_input_parameter_schema);

smart_contract_input_parameter_schema_t *smart_contract_input_parameter_schema_parseFromJSON(cJSON *smart_contract_input_parameter_schemaJSON);

cJSON *smart_contract_input_parameter_schema_convertToJSON(smart_contract_input_parameter_schema_t *smart_contract_input_parameter_schema);

#endif /* _smart_contract_input_parameter_schema_H_ */

