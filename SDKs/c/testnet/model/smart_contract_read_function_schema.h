/*
 * smart_contract_read_function_schema.h
 *
 * 
 */

#ifndef _smart_contract_read_function_schema_H_
#define _smart_contract_read_function_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct smart_contract_read_function_schema_t smart_contract_read_function_schema_t;

#include "smart_contract_input_parameter_schema.h"



typedef struct smart_contract_read_function_schema_t {
    char *name; // string
    char *function_id; // string
    list_t *input_parameters; //nonprimitive container
    list_t *output_parameters; //nonprimitive container

} smart_contract_read_function_schema_t;

smart_contract_read_function_schema_t *smart_contract_read_function_schema_create(
    char *name,
    char *function_id,
    list_t *input_parameters,
    list_t *output_parameters
);

void smart_contract_read_function_schema_free(smart_contract_read_function_schema_t *smart_contract_read_function_schema);

smart_contract_read_function_schema_t *smart_contract_read_function_schema_parseFromJSON(cJSON *smart_contract_read_function_schemaJSON);

cJSON *smart_contract_read_function_schema_convertToJSON(smart_contract_read_function_schema_t *smart_contract_read_function_schema);

#endif /* _smart_contract_read_function_schema_H_ */

