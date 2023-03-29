#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_and_execute_transaction_response.h"



prepare_and_execute_transaction_response_t *prepare_and_execute_transaction_response_create(
    prepare_transaction_response_t *preparation_transaction_search_response,
    execute_search_transaction_response_t *execution_transaction_search_response,
    prepare_and_execute_overledger_error_response_t *execution_transaction_search_overledger_error_response
    ) {
    prepare_and_execute_transaction_response_t *prepare_and_execute_transaction_response_local_var = malloc(sizeof(prepare_and_execute_transaction_response_t));
    if (!prepare_and_execute_transaction_response_local_var) {
        return NULL;
    }
    prepare_and_execute_transaction_response_local_var->preparation_transaction_search_response = preparation_transaction_search_response;
    prepare_and_execute_transaction_response_local_var->execution_transaction_search_response = execution_transaction_search_response;
    prepare_and_execute_transaction_response_local_var->execution_transaction_search_overledger_error_response = execution_transaction_search_overledger_error_response;

    return prepare_and_execute_transaction_response_local_var;
}


void prepare_and_execute_transaction_response_free(prepare_and_execute_transaction_response_t *prepare_and_execute_transaction_response) {
    if(NULL == prepare_and_execute_transaction_response){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_and_execute_transaction_response->preparation_transaction_search_response) {
        prepare_transaction_response_free(prepare_and_execute_transaction_response->preparation_transaction_search_response);
        prepare_and_execute_transaction_response->preparation_transaction_search_response = NULL;
    }
    if (prepare_and_execute_transaction_response->execution_transaction_search_response) {
        execute_search_transaction_response_free(prepare_and_execute_transaction_response->execution_transaction_search_response);
        prepare_and_execute_transaction_response->execution_transaction_search_response = NULL;
    }
    if (prepare_and_execute_transaction_response->execution_transaction_search_overledger_error_response) {
        prepare_and_execute_overledger_error_response_free(prepare_and_execute_transaction_response->execution_transaction_search_overledger_error_response);
        prepare_and_execute_transaction_response->execution_transaction_search_overledger_error_response = NULL;
    }
    free(prepare_and_execute_transaction_response);
}

cJSON *prepare_and_execute_transaction_response_convertToJSON(prepare_and_execute_transaction_response_t *prepare_and_execute_transaction_response) {
    cJSON *item = cJSON_CreateObject();

    // prepare_and_execute_transaction_response->preparation_transaction_search_response
    if(prepare_and_execute_transaction_response->preparation_transaction_search_response) { 
    cJSON *preparation_transaction_search_response_local_JSON = prepare_transaction_response_convertToJSON(prepare_and_execute_transaction_response->preparation_transaction_search_response);
    if(preparation_transaction_search_response_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "preparationTransactionSearchResponse", preparation_transaction_search_response_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_and_execute_transaction_response->execution_transaction_search_response
    if(prepare_and_execute_transaction_response->execution_transaction_search_response) { 
    cJSON *execution_transaction_search_response_local_JSON = execute_search_transaction_response_convertToJSON(prepare_and_execute_transaction_response->execution_transaction_search_response);
    if(execution_transaction_search_response_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "executionTransactionSearchResponse", execution_transaction_search_response_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_and_execute_transaction_response->execution_transaction_search_overledger_error_response
    if(prepare_and_execute_transaction_response->execution_transaction_search_overledger_error_response) { 
    cJSON *execution_transaction_search_overledger_error_response_local_JSON = prepare_and_execute_overledger_error_response_convertToJSON(prepare_and_execute_transaction_response->execution_transaction_search_overledger_error_response);
    if(execution_transaction_search_overledger_error_response_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "executionTransactionSearchOverledgerErrorResponse", execution_transaction_search_overledger_error_response_local_JSON);
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

prepare_and_execute_transaction_response_t *prepare_and_execute_transaction_response_parseFromJSON(cJSON *prepare_and_execute_transaction_responseJSON){

    prepare_and_execute_transaction_response_t *prepare_and_execute_transaction_response_local_var = NULL;

    // prepare_and_execute_transaction_response->preparation_transaction_search_response
    cJSON *preparation_transaction_search_response = cJSON_GetObjectItemCaseSensitive(prepare_and_execute_transaction_responseJSON, "preparationTransactionSearchResponse");
    prepare_transaction_response_t *preparation_transaction_search_response_local_nonprim = NULL;
    if (preparation_transaction_search_response) { 
    preparation_transaction_search_response_local_nonprim = prepare_transaction_response_parseFromJSON(preparation_transaction_search_response); //nonprimitive
    }

    // prepare_and_execute_transaction_response->execution_transaction_search_response
    cJSON *execution_transaction_search_response = cJSON_GetObjectItemCaseSensitive(prepare_and_execute_transaction_responseJSON, "executionTransactionSearchResponse");
    execute_search_transaction_response_t *execution_transaction_search_response_local_nonprim = NULL;
    if (execution_transaction_search_response) { 
    execution_transaction_search_response_local_nonprim = execute_search_transaction_response_parseFromJSON(execution_transaction_search_response); //nonprimitive
    }

    // prepare_and_execute_transaction_response->execution_transaction_search_overledger_error_response
    cJSON *execution_transaction_search_overledger_error_response = cJSON_GetObjectItemCaseSensitive(prepare_and_execute_transaction_responseJSON, "executionTransactionSearchOverledgerErrorResponse");
    prepare_and_execute_overledger_error_response_t *execution_transaction_search_overledger_error_response_local_nonprim = NULL;
    if (execution_transaction_search_overledger_error_response) { 
    execution_transaction_search_overledger_error_response_local_nonprim = prepare_and_execute_overledger_error_response_parseFromJSON(execution_transaction_search_overledger_error_response); //nonprimitive
    }


    prepare_and_execute_transaction_response_local_var = prepare_and_execute_transaction_response_create (
        preparation_transaction_search_response ? preparation_transaction_search_response_local_nonprim : NULL,
        execution_transaction_search_response ? execution_transaction_search_response_local_nonprim : NULL,
        execution_transaction_search_overledger_error_response ? execution_transaction_search_overledger_error_response_local_nonprim : NULL
        );

    return prepare_and_execute_transaction_response_local_var;
end:
    if (preparation_transaction_search_response_local_nonprim) {
        prepare_transaction_response_free(preparation_transaction_search_response_local_nonprim);
        preparation_transaction_search_response_local_nonprim = NULL;
    }
    if (execution_transaction_search_response_local_nonprim) {
        execute_search_transaction_response_free(execution_transaction_search_response_local_nonprim);
        execution_transaction_search_response_local_nonprim = NULL;
    }
    if (execution_transaction_search_overledger_error_response_local_nonprim) {
        prepare_and_execute_overledger_error_response_free(execution_transaction_search_overledger_error_response_local_nonprim);
        execution_transaction_search_overledger_error_response_local_nonprim = NULL;
    }
    return NULL;

}
