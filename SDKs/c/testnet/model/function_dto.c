#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "function_dto.h"



function_dto_t *function_dto_create(
    char *type,
    char *api
    ) {
    function_dto_t *function_dto_local_var = malloc(sizeof(function_dto_t));
    if (!function_dto_local_var) {
        return NULL;
    }
    function_dto_local_var->type = type;
    function_dto_local_var->api = api;

    return function_dto_local_var;
}


void function_dto_free(function_dto_t *function_dto) {
    if(NULL == function_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (function_dto->type) {
        free(function_dto->type);
        function_dto->type = NULL;
    }
    if (function_dto->api) {
        free(function_dto->api);
        function_dto->api = NULL;
    }
    free(function_dto);
}

cJSON *function_dto_convertToJSON(function_dto_t *function_dto) {
    cJSON *item = cJSON_CreateObject();

    // function_dto->type
    if(function_dto->type) { 
    if(cJSON_AddStringToObject(item, "type", function_dto->type) == NULL) {
    goto fail; //String
    }
     } 


    // function_dto->api
    if(function_dto->api) { 
    if(cJSON_AddStringToObject(item, "api", function_dto->api) == NULL) {
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

function_dto_t *function_dto_parseFromJSON(cJSON *function_dtoJSON){

    function_dto_t *function_dto_local_var = NULL;

    // function_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(function_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // function_dto->api
    cJSON *api = cJSON_GetObjectItemCaseSensitive(function_dtoJSON, "api");
    if (api) { 
    if(!cJSON_IsString(api))
    {
    goto end; //String
    }
    }


    function_dto_local_var = function_dto_create (
        type ? strdup(type->valuestring) : NULL,
        api ? strdup(api->valuestring) : NULL
        );

    return function_dto_local_var;
end:
    return NULL;

}
