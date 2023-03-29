#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tier_function_dto.h"



tier_function_dto_t *tier_function_dto_create(
    char *function_name,
    char *api
    ) {
    tier_function_dto_t *tier_function_dto_local_var = malloc(sizeof(tier_function_dto_t));
    if (!tier_function_dto_local_var) {
        return NULL;
    }
    tier_function_dto_local_var->function_name = function_name;
    tier_function_dto_local_var->api = api;

    return tier_function_dto_local_var;
}


void tier_function_dto_free(tier_function_dto_t *tier_function_dto) {
    if(NULL == tier_function_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tier_function_dto->function_name) {
        free(tier_function_dto->function_name);
        tier_function_dto->function_name = NULL;
    }
    if (tier_function_dto->api) {
        free(tier_function_dto->api);
        tier_function_dto->api = NULL;
    }
    free(tier_function_dto);
}

cJSON *tier_function_dto_convertToJSON(tier_function_dto_t *tier_function_dto) {
    cJSON *item = cJSON_CreateObject();

    // tier_function_dto->function_name
    if(tier_function_dto->function_name) { 
    if(cJSON_AddStringToObject(item, "functionName", tier_function_dto->function_name) == NULL) {
    goto fail; //String
    }
     } 


    // tier_function_dto->api
    if(tier_function_dto->api) { 
    if(cJSON_AddStringToObject(item, "api", tier_function_dto->api) == NULL) {
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

tier_function_dto_t *tier_function_dto_parseFromJSON(cJSON *tier_function_dtoJSON){

    tier_function_dto_t *tier_function_dto_local_var = NULL;

    // tier_function_dto->function_name
    cJSON *function_name = cJSON_GetObjectItemCaseSensitive(tier_function_dtoJSON, "functionName");
    if (function_name) { 
    if(!cJSON_IsString(function_name))
    {
    goto end; //String
    }
    }

    // tier_function_dto->api
    cJSON *api = cJSON_GetObjectItemCaseSensitive(tier_function_dtoJSON, "api");
    if (api) { 
    if(!cJSON_IsString(api))
    {
    goto end; //String
    }
    }


    tier_function_dto_local_var = tier_function_dto_create (
        function_name ? strdup(function_name->valuestring) : NULL,
        api ? strdup(api->valuestring) : NULL
        );

    return tier_function_dto_local_var;
end:
    return NULL;

}
