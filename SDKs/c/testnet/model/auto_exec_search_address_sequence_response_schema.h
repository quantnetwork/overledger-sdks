/*
 * auto_exec_search_address_sequence_response_schema.h
 *
 * 
 */

#ifndef _auto_exec_search_address_sequence_response_schema_H_
#define _auto_exec_search_address_sequence_response_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct auto_exec_search_address_sequence_response_schema_t auto_exec_search_address_sequence_response_schema_t;

#include "execute_search_sequence_response.h"
#include "prepare_and_execute_overledger_error_response.h"
#include "prepare_search_response_schema.h"



typedef struct auto_exec_search_address_sequence_response_schema_t {
    struct prepare_search_response_schema_t *preparation_address_sequence_search_response; //model
    struct prepare_and_execute_overledger_error_response_t *prepare_and_execute_overledger_error_response; //model
    struct execute_search_sequence_response_t *execution_address_sequence_search_response; //model

} auto_exec_search_address_sequence_response_schema_t;

auto_exec_search_address_sequence_response_schema_t *auto_exec_search_address_sequence_response_schema_create(
    prepare_search_response_schema_t *preparation_address_sequence_search_response,
    prepare_and_execute_overledger_error_response_t *prepare_and_execute_overledger_error_response,
    execute_search_sequence_response_t *execution_address_sequence_search_response
);

void auto_exec_search_address_sequence_response_schema_free(auto_exec_search_address_sequence_response_schema_t *auto_exec_search_address_sequence_response_schema);

auto_exec_search_address_sequence_response_schema_t *auto_exec_search_address_sequence_response_schema_parseFromJSON(cJSON *auto_exec_search_address_sequence_response_schemaJSON);

cJSON *auto_exec_search_address_sequence_response_schema_convertToJSON(auto_exec_search_address_sequence_response_schema_t *auto_exec_search_address_sequence_response_schema);

#endif /* _auto_exec_search_address_sequence_response_schema_H_ */

