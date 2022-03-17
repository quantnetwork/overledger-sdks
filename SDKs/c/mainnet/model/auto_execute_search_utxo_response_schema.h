/*
 * auto_execute_search_utxo_response_schema.h
 *
 * 
 */

#ifndef _auto_execute_search_utxo_response_schema_H_
#define _auto_execute_search_utxo_response_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct auto_execute_search_utxo_response_schema_t auto_execute_search_utxo_response_schema_t;

#include "execute_search_utxo_response.h"
#include "prepare_and_execute_overledger_error_response.h"
#include "prepare_transaction_response.h"



typedef struct auto_execute_search_utxo_response_schema_t {
    struct execute_search_utxo_response_t *execution_utxo_search_response; //model
    struct prepare_and_execute_overledger_error_response_t *prepare_and_execute_overledger_error_response; //model
    struct prepare_transaction_response_t *preparation_utxo_search_response; //model

} auto_execute_search_utxo_response_schema_t;

auto_execute_search_utxo_response_schema_t *auto_execute_search_utxo_response_schema_create(
    execute_search_utxo_response_t *execution_utxo_search_response,
    prepare_and_execute_overledger_error_response_t *prepare_and_execute_overledger_error_response,
    prepare_transaction_response_t *preparation_utxo_search_response
);

void auto_execute_search_utxo_response_schema_free(auto_execute_search_utxo_response_schema_t *auto_execute_search_utxo_response_schema);

auto_execute_search_utxo_response_schema_t *auto_execute_search_utxo_response_schema_parseFromJSON(cJSON *auto_execute_search_utxo_response_schemaJSON);

cJSON *auto_execute_search_utxo_response_schema_convertToJSON(auto_execute_search_utxo_response_schema_t *auto_execute_search_utxo_response_schema);

#endif /* _auto_execute_search_utxo_response_schema_H_ */

