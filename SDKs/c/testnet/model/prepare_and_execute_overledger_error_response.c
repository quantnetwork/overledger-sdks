#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_and_execute_overledger_error_response.h"



prepare_and_execute_overledger_error_response_t *prepare_and_execute_overledger_error_response_create(
    char *code,
    char *description,
    char *category
    ) {
    prepare_and_execute_overledger_error_response_t *prepare_and_execute_overledger_error_response_local_var = malloc(sizeof(prepare_and_execute_overledger_error_response_t));
    if (!prepare_and_execute_overledger_error_response_local_var) {
        return NULL;
    }
    prepare_and_execute_overledger_error_response_local_var->code = code;
    prepare_and_execute_overledger_error_response_local_var->description = description;
    prepare_and_execute_overledger_error_response_local_var->category = category;

    return prepare_and_execute_overledger_error_response_local_var;
}


void prepare_and_execute_overledger_error_response_free(prepare_and_execute_overledger_error_response_t *prepare_and_execute_overledger_error_response) {
    if(NULL == prepare_and_execute_overledger_error_response){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_and_execute_overledger_error_response->code) {
        free(prepare_and_execute_overledger_error_response->code);
        prepare_and_execute_overledger_error_response->code = NULL;
    }
    if (prepare_and_execute_overledger_error_response->description) {
        free(prepare_and_execute_overledger_error_response->description);
        prepare_and_execute_overledger_error_response->description = NULL;
    }
    if (prepare_and_execute_overledger_error_response->category) {
        free(prepare_and_execute_overledger_error_response->category);
        prepare_and_execute_overledger_error_response->category = NULL;
    }
    free(prepare_and_execute_overledger_error_response);
}

cJSON *prepare_and_execute_overledger_error_response_convertToJSON(prepare_and_execute_overledger_error_response_t *prepare_and_execute_overledger_error_response) {
    cJSON *item = cJSON_CreateObject();

    // prepare_and_execute_overledger_error_response->code
    if(prepare_and_execute_overledger_error_response->code) { 
    if(cJSON_AddStringToObject(item, "code", prepare_and_execute_overledger_error_response->code) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_and_execute_overledger_error_response->description
    if(prepare_and_execute_overledger_error_response->description) { 
    if(cJSON_AddStringToObject(item, "description", prepare_and_execute_overledger_error_response->description) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_and_execute_overledger_error_response->category
    if(prepare_and_execute_overledger_error_response->category) { 
    if(cJSON_AddStringToObject(item, "category", prepare_and_execute_overledger_error_response->category) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

prepare_and_execute_overledger_error_response_t *prepare_and_execute_overledger_error_response_parseFromJSON(cJSON *prepare_and_execute_overledger_error_responseJSON){

    prepare_and_execute_overledger_error_response_t *prepare_and_execute_overledger_error_response_local_var = NULL;

    // prepare_and_execute_overledger_error_response->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(prepare_and_execute_overledger_error_responseJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code))
    {
    goto end; //String
    }
    }

    // prepare_and_execute_overledger_error_response->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(prepare_and_execute_overledger_error_responseJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }
    }

    // prepare_and_execute_overledger_error_response->category
    cJSON *category = cJSON_GetObjectItemCaseSensitive(prepare_and_execute_overledger_error_responseJSON, "category");
    if (category) { 
    if(!cJSON_IsString(category))
    {
    goto end; //String
    }
    }


    prepare_and_execute_overledger_error_response_local_var = prepare_and_execute_overledger_error_response_create (
        code ? strdup(code->valuestring) : NULL,
        description ? strdup(description->valuestring) : NULL,
        category ? strdup(category->valuestring) : NULL
        );

    return prepare_and_execute_overledger_error_response_local_var;
end:
    return NULL;

}
