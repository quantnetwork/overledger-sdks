#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "smart_contract_read_schema.h"



smart_contract_read_schema_t *smart_contract_read_schema_create(
    char *smart_contract_id,
    smart_contract_read_function_schema_t *function
    ) {
    smart_contract_read_schema_t *smart_contract_read_schema_local_var = malloc(sizeof(smart_contract_read_schema_t));
    if (!smart_contract_read_schema_local_var) {
        return NULL;
    }
    smart_contract_read_schema_local_var->smart_contract_id = smart_contract_id;
    smart_contract_read_schema_local_var->function = function;

    return smart_contract_read_schema_local_var;
}


void smart_contract_read_schema_free(smart_contract_read_schema_t *smart_contract_read_schema) {
    if(NULL == smart_contract_read_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (smart_contract_read_schema->smart_contract_id) {
        free(smart_contract_read_schema->smart_contract_id);
        smart_contract_read_schema->smart_contract_id = NULL;
    }
    if (smart_contract_read_schema->function) {
        smart_contract_read_function_schema_free(smart_contract_read_schema->function);
        smart_contract_read_schema->function = NULL;
    }
    free(smart_contract_read_schema);
}

cJSON *smart_contract_read_schema_convertToJSON(smart_contract_read_schema_t *smart_contract_read_schema) {
    cJSON *item = cJSON_CreateObject();

    // smart_contract_read_schema->smart_contract_id
    if(smart_contract_read_schema->smart_contract_id) { 
    if(cJSON_AddStringToObject(item, "smartContractId", smart_contract_read_schema->smart_contract_id) == NULL) {
    goto fail; //String
    }
     } 


    // smart_contract_read_schema->function
    if(smart_contract_read_schema->function) { 
    cJSON *function_local_JSON = smart_contract_read_function_schema_convertToJSON(smart_contract_read_schema->function);
    if(function_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "function", function_local_JSON);
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

smart_contract_read_schema_t *smart_contract_read_schema_parseFromJSON(cJSON *smart_contract_read_schemaJSON){

    smart_contract_read_schema_t *smart_contract_read_schema_local_var = NULL;

    // smart_contract_read_schema->smart_contract_id
    cJSON *smart_contract_id = cJSON_GetObjectItemCaseSensitive(smart_contract_read_schemaJSON, "smartContractId");
    if (smart_contract_id) { 
    if(!cJSON_IsString(smart_contract_id))
    {
    goto end; //String
    }
    }

    // smart_contract_read_schema->function
    cJSON *function = cJSON_GetObjectItemCaseSensitive(smart_contract_read_schemaJSON, "function");
    smart_contract_read_function_schema_t *function_local_nonprim = NULL;
    if (function) { 
    function_local_nonprim = smart_contract_read_function_schema_parseFromJSON(function); //nonprimitive
    }


    smart_contract_read_schema_local_var = smart_contract_read_schema_create (
        smart_contract_id ? strdup(smart_contract_id->valuestring) : NULL,
        function ? function_local_nonprim : NULL
        );

    return smart_contract_read_schema_local_var;
end:
    if (function_local_nonprim) {
        smart_contract_read_function_schema_free(function_local_nonprim);
        function_local_nonprim = NULL;
    }
    return NULL;

}
