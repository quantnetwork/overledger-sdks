#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "smart_contract_schema.h"



smart_contract_schema_t *smart_contract_schema_create(
    smart_contract_function_schema_t *function
    ) {
    smart_contract_schema_t *smart_contract_schema_local_var = malloc(sizeof(smart_contract_schema_t));
    if (!smart_contract_schema_local_var) {
        return NULL;
    }
    smart_contract_schema_local_var->function = function;

    return smart_contract_schema_local_var;
}


void smart_contract_schema_free(smart_contract_schema_t *smart_contract_schema) {
    if(NULL == smart_contract_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (smart_contract_schema->function) {
        smart_contract_function_schema_free(smart_contract_schema->function);
        smart_contract_schema->function = NULL;
    }
    free(smart_contract_schema);
}

cJSON *smart_contract_schema_convertToJSON(smart_contract_schema_t *smart_contract_schema) {
    cJSON *item = cJSON_CreateObject();

    // smart_contract_schema->function
    if(smart_contract_schema->function) { 
    cJSON *function_local_JSON = smart_contract_function_schema_convertToJSON(smart_contract_schema->function);
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

smart_contract_schema_t *smart_contract_schema_parseFromJSON(cJSON *smart_contract_schemaJSON){

    smart_contract_schema_t *smart_contract_schema_local_var = NULL;

    // smart_contract_schema->function
    cJSON *function = cJSON_GetObjectItemCaseSensitive(smart_contract_schemaJSON, "function");
    smart_contract_function_schema_t *function_local_nonprim = NULL;
    if (function) { 
    function_local_nonprim = smart_contract_function_schema_parseFromJSON(function); //nonprimitive
    }


    smart_contract_schema_local_var = smart_contract_schema_create (
        function ? function_local_nonprim : NULL
        );

    return smart_contract_schema_local_var;
end:
    if (function_local_nonprim) {
        smart_contract_function_schema_free(function_local_nonprim);
        function_local_nonprim = NULL;
    }
    return NULL;

}
