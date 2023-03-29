#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "function.h"



function_t *function_create(
    char *type,
    char *api
    ) {
    function_t *function_local_var = malloc(sizeof(function_t));
    if (!function_local_var) {
        return NULL;
    }
    function_local_var->type = type;
    function_local_var->api = api;

    return function_local_var;
}


void function_free(function_t *function) {
    if(NULL == function){
        return ;
    }
    listEntry_t *listEntry;
    if (function->type) {
        free(function->type);
        function->type = NULL;
    }
    if (function->api) {
        free(function->api);
        function->api = NULL;
    }
    free(function);
}

cJSON *function_convertToJSON(function_t *function) {
    cJSON *item = cJSON_CreateObject();

    // function->type
    if(function->type) { 
    if(cJSON_AddStringToObject(item, "type", function->type) == NULL) {
    goto fail; //String
    }
     } 


    // function->api
    if(function->api) { 
    if(cJSON_AddStringToObject(item, "api", function->api) == NULL) {
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

function_t *function_parseFromJSON(cJSON *functionJSON){

    function_t *function_local_var = NULL;

    // function->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(functionJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // function->api
    cJSON *api = cJSON_GetObjectItemCaseSensitive(functionJSON, "api");
    if (api) { 
    if(!cJSON_IsString(api))
    {
    goto end; //String
    }
    }


    function_local_var = function_create (
        type ? strdup(type->valuestring) : NULL,
        api ? strdup(api->valuestring) : NULL
        );

    return function_local_var;
end:
    return NULL;

}
