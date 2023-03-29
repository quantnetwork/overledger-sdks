#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "smart_contract.h"



smart_contract_t *smart_contract_create(
    char *detail,
    char *type,
    char *smart_contract_id,
    function_t *function,
    object_t *extra_fields
    ) {
    smart_contract_t *smart_contract_local_var = malloc(sizeof(smart_contract_t));
    if (!smart_contract_local_var) {
        return NULL;
    }
    smart_contract_local_var->detail = detail;
    smart_contract_local_var->type = type;
    smart_contract_local_var->smart_contract_id = smart_contract_id;
    smart_contract_local_var->function = function;
    smart_contract_local_var->extra_fields = extra_fields;

    return smart_contract_local_var;
}


void smart_contract_free(smart_contract_t *smart_contract) {
    if(NULL == smart_contract){
        return ;
    }
    listEntry_t *listEntry;
    if (smart_contract->detail) {
        free(smart_contract->detail);
        smart_contract->detail = NULL;
    }
    if (smart_contract->type) {
        free(smart_contract->type);
        smart_contract->type = NULL;
    }
    if (smart_contract->smart_contract_id) {
        free(smart_contract->smart_contract_id);
        smart_contract->smart_contract_id = NULL;
    }
    if (smart_contract->function) {
        function_free(smart_contract->function);
        smart_contract->function = NULL;
    }
    if (smart_contract->extra_fields) {
        object_free(smart_contract->extra_fields);
        smart_contract->extra_fields = NULL;
    }
    free(smart_contract);
}

cJSON *smart_contract_convertToJSON(smart_contract_t *smart_contract) {
    cJSON *item = cJSON_CreateObject();

    // smart_contract->detail
    if(smart_contract->detail) { 
    if(cJSON_AddStringToObject(item, "detail", smart_contract->detail) == NULL) {
    goto fail; //String
    }
     } 


    // smart_contract->type
    if(smart_contract->type) { 
    if(cJSON_AddStringToObject(item, "type", smart_contract->type) == NULL) {
    goto fail; //String
    }
     } 


    // smart_contract->smart_contract_id
    if(smart_contract->smart_contract_id) { 
    if(cJSON_AddStringToObject(item, "smartContractId", smart_contract->smart_contract_id) == NULL) {
    goto fail; //String
    }
     } 


    // smart_contract->function
    if(smart_contract->function) { 
    cJSON *function_local_JSON = function_convertToJSON(smart_contract->function);
    if(function_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "function", function_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // smart_contract->extra_fields
    if(smart_contract->extra_fields) { 
    cJSON *extra_fields_object = object_convertToJSON(smart_contract->extra_fields);
    if(extra_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "extraFields", extra_fields_object);
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

smart_contract_t *smart_contract_parseFromJSON(cJSON *smart_contractJSON){

    smart_contract_t *smart_contract_local_var = NULL;

    // smart_contract->detail
    cJSON *detail = cJSON_GetObjectItemCaseSensitive(smart_contractJSON, "detail");
    if (detail) { 
    if(!cJSON_IsString(detail))
    {
    goto end; //String
    }
    }

    // smart_contract->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(smart_contractJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // smart_contract->smart_contract_id
    cJSON *smart_contract_id = cJSON_GetObjectItemCaseSensitive(smart_contractJSON, "smartContractId");
    if (smart_contract_id) { 
    if(!cJSON_IsString(smart_contract_id))
    {
    goto end; //String
    }
    }

    // smart_contract->function
    cJSON *function = cJSON_GetObjectItemCaseSensitive(smart_contractJSON, "function");
    function_t *function_local_nonprim = NULL;
    if (function) { 
    function_local_nonprim = function_parseFromJSON(function); //nonprimitive
    }

    // smart_contract->extra_fields
    cJSON *extra_fields = cJSON_GetObjectItemCaseSensitive(smart_contractJSON, "extraFields");
    object_t *extra_fields_local_object = NULL;
    if (extra_fields) { 
    extra_fields_local_object = object_parseFromJSON(extra_fields); //object
    }


    smart_contract_local_var = smart_contract_create (
        detail ? strdup(detail->valuestring) : NULL,
        type ? strdup(type->valuestring) : NULL,
        smart_contract_id ? strdup(smart_contract_id->valuestring) : NULL,
        function ? function_local_nonprim : NULL,
        extra_fields ? extra_fields_local_object : NULL
        );

    return smart_contract_local_var;
end:
    if (function_local_nonprim) {
        function_free(function_local_nonprim);
        function_local_nonprim = NULL;
    }
    return NULL;

}
