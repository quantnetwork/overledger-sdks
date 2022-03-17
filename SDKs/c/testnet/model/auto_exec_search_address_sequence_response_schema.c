#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "auto_exec_search_address_sequence_response_schema.h"



auto_exec_search_address_sequence_response_schema_t *auto_exec_search_address_sequence_response_schema_create(
    prepare_search_response_schema_t *preparation_address_sequence_search_response,
    prepare_and_execute_overledger_error_response_t *prepare_and_execute_overledger_error_response,
    execute_search_sequence_response_t *execution_address_sequence_search_response
    ) {
    auto_exec_search_address_sequence_response_schema_t *auto_exec_search_address_sequence_response_schema_local_var = malloc(sizeof(auto_exec_search_address_sequence_response_schema_t));
    if (!auto_exec_search_address_sequence_response_schema_local_var) {
        return NULL;
    }
    auto_exec_search_address_sequence_response_schema_local_var->preparation_address_sequence_search_response = preparation_address_sequence_search_response;
    auto_exec_search_address_sequence_response_schema_local_var->prepare_and_execute_overledger_error_response = prepare_and_execute_overledger_error_response;
    auto_exec_search_address_sequence_response_schema_local_var->execution_address_sequence_search_response = execution_address_sequence_search_response;

    return auto_exec_search_address_sequence_response_schema_local_var;
}


void auto_exec_search_address_sequence_response_schema_free(auto_exec_search_address_sequence_response_schema_t *auto_exec_search_address_sequence_response_schema) {
    if(NULL == auto_exec_search_address_sequence_response_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (auto_exec_search_address_sequence_response_schema->preparation_address_sequence_search_response) {
        prepare_search_response_schema_free(auto_exec_search_address_sequence_response_schema->preparation_address_sequence_search_response);
        auto_exec_search_address_sequence_response_schema->preparation_address_sequence_search_response = NULL;
    }
    if (auto_exec_search_address_sequence_response_schema->prepare_and_execute_overledger_error_response) {
        prepare_and_execute_overledger_error_response_free(auto_exec_search_address_sequence_response_schema->prepare_and_execute_overledger_error_response);
        auto_exec_search_address_sequence_response_schema->prepare_and_execute_overledger_error_response = NULL;
    }
    if (auto_exec_search_address_sequence_response_schema->execution_address_sequence_search_response) {
        execute_search_sequence_response_free(auto_exec_search_address_sequence_response_schema->execution_address_sequence_search_response);
        auto_exec_search_address_sequence_response_schema->execution_address_sequence_search_response = NULL;
    }
    free(auto_exec_search_address_sequence_response_schema);
}

cJSON *auto_exec_search_address_sequence_response_schema_convertToJSON(auto_exec_search_address_sequence_response_schema_t *auto_exec_search_address_sequence_response_schema) {
    cJSON *item = cJSON_CreateObject();

    // auto_exec_search_address_sequence_response_schema->preparation_address_sequence_search_response
    if(auto_exec_search_address_sequence_response_schema->preparation_address_sequence_search_response) { 
    cJSON *preparation_address_sequence_search_response_local_JSON = prepare_search_response_schema_convertToJSON(auto_exec_search_address_sequence_response_schema->preparation_address_sequence_search_response);
    if(preparation_address_sequence_search_response_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "preparationAddressSequenceSearchResponse", preparation_address_sequence_search_response_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // auto_exec_search_address_sequence_response_schema->prepare_and_execute_overledger_error_response
    if(auto_exec_search_address_sequence_response_schema->prepare_and_execute_overledger_error_response) { 
    cJSON *prepare_and_execute_overledger_error_response_local_JSON = prepare_and_execute_overledger_error_response_convertToJSON(auto_exec_search_address_sequence_response_schema->prepare_and_execute_overledger_error_response);
    if(prepare_and_execute_overledger_error_response_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "prepareAndExecuteOverledgerErrorResponse", prepare_and_execute_overledger_error_response_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // auto_exec_search_address_sequence_response_schema->execution_address_sequence_search_response
    if(auto_exec_search_address_sequence_response_schema->execution_address_sequence_search_response) { 
    cJSON *execution_address_sequence_search_response_local_JSON = execute_search_sequence_response_convertToJSON(auto_exec_search_address_sequence_response_schema->execution_address_sequence_search_response);
    if(execution_address_sequence_search_response_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "executionAddressSequenceSearchResponse", execution_address_sequence_search_response_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

auto_exec_search_address_sequence_response_schema_t *auto_exec_search_address_sequence_response_schema_parseFromJSON(cJSON *auto_exec_search_address_sequence_response_schemaJSON){

    auto_exec_search_address_sequence_response_schema_t *auto_exec_search_address_sequence_response_schema_local_var = NULL;

    // auto_exec_search_address_sequence_response_schema->preparation_address_sequence_search_response
    cJSON *preparation_address_sequence_search_response = cJSON_GetObjectItemCaseSensitive(auto_exec_search_address_sequence_response_schemaJSON, "preparationAddressSequenceSearchResponse");
    prepare_search_response_schema_t *preparation_address_sequence_search_response_local_nonprim = NULL;
    if (preparation_address_sequence_search_response) { 
    preparation_address_sequence_search_response_local_nonprim = prepare_search_response_schema_parseFromJSON(preparation_address_sequence_search_response); //nonprimitive
    }

    // auto_exec_search_address_sequence_response_schema->prepare_and_execute_overledger_error_response
    cJSON *prepare_and_execute_overledger_error_response = cJSON_GetObjectItemCaseSensitive(auto_exec_search_address_sequence_response_schemaJSON, "prepareAndExecuteOverledgerErrorResponse");
    prepare_and_execute_overledger_error_response_t *prepare_and_execute_overledger_error_response_local_nonprim = NULL;
    if (prepare_and_execute_overledger_error_response) { 
    prepare_and_execute_overledger_error_response_local_nonprim = prepare_and_execute_overledger_error_response_parseFromJSON(prepare_and_execute_overledger_error_response); //nonprimitive
    }

    // auto_exec_search_address_sequence_response_schema->execution_address_sequence_search_response
    cJSON *execution_address_sequence_search_response = cJSON_GetObjectItemCaseSensitive(auto_exec_search_address_sequence_response_schemaJSON, "executionAddressSequenceSearchResponse");
    execute_search_sequence_response_t *execution_address_sequence_search_response_local_nonprim = NULL;
    if (execution_address_sequence_search_response) { 
    execution_address_sequence_search_response_local_nonprim = execute_search_sequence_response_parseFromJSON(execution_address_sequence_search_response); //nonprimitive
    }


    auto_exec_search_address_sequence_response_schema_local_var = auto_exec_search_address_sequence_response_schema_create (
        preparation_address_sequence_search_response ? preparation_address_sequence_search_response_local_nonprim : NULL,
        prepare_and_execute_overledger_error_response ? prepare_and_execute_overledger_error_response_local_nonprim : NULL,
        execution_address_sequence_search_response ? execution_address_sequence_search_response_local_nonprim : NULL
        );

    return auto_exec_search_address_sequence_response_schema_local_var;
end:
    if (preparation_address_sequence_search_response_local_nonprim) {
        prepare_search_response_schema_free(preparation_address_sequence_search_response_local_nonprim);
        preparation_address_sequence_search_response_local_nonprim = NULL;
    }
    if (prepare_and_execute_overledger_error_response_local_nonprim) {
        prepare_and_execute_overledger_error_response_free(prepare_and_execute_overledger_error_response_local_nonprim);
        prepare_and_execute_overledger_error_response_local_nonprim = NULL;
    }
    if (execution_address_sequence_search_response_local_nonprim) {
        execute_search_sequence_response_free(execution_address_sequence_search_response_local_nonprim);
        execution_address_sequence_search_response_local_nonprim = NULL;
    }
    return NULL;

}
