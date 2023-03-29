#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "non_fungible_token_dto.h"



non_fungible_token_dto_t *non_fungible_token_dto_create(
    list_t *functions,
    char *token_name,
    char *smart_contract_address,
    location_dto_t *location,
    char *id,
    char *token_type,
    char *url
    ) {
    non_fungible_token_dto_t *non_fungible_token_dto_local_var = malloc(sizeof(non_fungible_token_dto_t));
    if (!non_fungible_token_dto_local_var) {
        return NULL;
    }
    non_fungible_token_dto_local_var->functions = functions;
    non_fungible_token_dto_local_var->token_name = token_name;
    non_fungible_token_dto_local_var->smart_contract_address = smart_contract_address;
    non_fungible_token_dto_local_var->location = location;
    non_fungible_token_dto_local_var->id = id;
    non_fungible_token_dto_local_var->token_type = token_type;
    non_fungible_token_dto_local_var->url = url;

    return non_fungible_token_dto_local_var;
}


void non_fungible_token_dto_free(non_fungible_token_dto_t *non_fungible_token_dto) {
    if(NULL == non_fungible_token_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (non_fungible_token_dto->functions) {
        list_ForEach(listEntry, non_fungible_token_dto->functions) {
            tier_function_dto_free(listEntry->data);
        }
        list_free(non_fungible_token_dto->functions);
        non_fungible_token_dto->functions = NULL;
    }
    if (non_fungible_token_dto->token_name) {
        free(non_fungible_token_dto->token_name);
        non_fungible_token_dto->token_name = NULL;
    }
    if (non_fungible_token_dto->smart_contract_address) {
        free(non_fungible_token_dto->smart_contract_address);
        non_fungible_token_dto->smart_contract_address = NULL;
    }
    if (non_fungible_token_dto->location) {
        location_dto_free(non_fungible_token_dto->location);
        non_fungible_token_dto->location = NULL;
    }
    if (non_fungible_token_dto->id) {
        free(non_fungible_token_dto->id);
        non_fungible_token_dto->id = NULL;
    }
    if (non_fungible_token_dto->token_type) {
        free(non_fungible_token_dto->token_type);
        non_fungible_token_dto->token_type = NULL;
    }
    if (non_fungible_token_dto->url) {
        free(non_fungible_token_dto->url);
        non_fungible_token_dto->url = NULL;
    }
    free(non_fungible_token_dto);
}

cJSON *non_fungible_token_dto_convertToJSON(non_fungible_token_dto_t *non_fungible_token_dto) {
    cJSON *item = cJSON_CreateObject();

    // non_fungible_token_dto->functions
    if(non_fungible_token_dto->functions) { 
    cJSON *functions = cJSON_AddArrayToObject(item, "functions");
    if(functions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *functionsListEntry;
    if (non_fungible_token_dto->functions) {
    list_ForEach(functionsListEntry, non_fungible_token_dto->functions) {
    cJSON *itemLocal = tier_function_dto_convertToJSON(functionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(functions, itemLocal);
    }
    }
     } 


    // non_fungible_token_dto->token_name
    if(non_fungible_token_dto->token_name) { 
    if(cJSON_AddStringToObject(item, "tokenName", non_fungible_token_dto->token_name) == NULL) {
    goto fail; //String
    }
     } 


    // non_fungible_token_dto->smart_contract_address
    if(non_fungible_token_dto->smart_contract_address) { 
    if(cJSON_AddStringToObject(item, "smartContractAddress", non_fungible_token_dto->smart_contract_address) == NULL) {
    goto fail; //String
    }
     } 


    // non_fungible_token_dto->location
    if(non_fungible_token_dto->location) { 
    cJSON *location_local_JSON = location_dto_convertToJSON(non_fungible_token_dto->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // non_fungible_token_dto->id
    if(non_fungible_token_dto->id) { 
    if(cJSON_AddStringToObject(item, "id", non_fungible_token_dto->id) == NULL) {
    goto fail; //String
    }
     } 


    // non_fungible_token_dto->token_type
    if(non_fungible_token_dto->token_type) { 
    if(cJSON_AddStringToObject(item, "tokenType", non_fungible_token_dto->token_type) == NULL) {
    goto fail; //String
    }
     } 


    // non_fungible_token_dto->url
    if(non_fungible_token_dto->url) { 
    if(cJSON_AddStringToObject(item, "url", non_fungible_token_dto->url) == NULL) {
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

non_fungible_token_dto_t *non_fungible_token_dto_parseFromJSON(cJSON *non_fungible_token_dtoJSON){

    non_fungible_token_dto_t *non_fungible_token_dto_local_var = NULL;

    // non_fungible_token_dto->functions
    cJSON *functions = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "functions");
    list_t *functionsList;
    if (functions) { 
    cJSON *functions_local_nonprimitive;
    if(!cJSON_IsArray(functions)){
        goto end; //nonprimitive container
    }

    functionsList = list_create();

    cJSON_ArrayForEach(functions_local_nonprimitive,functions )
    {
        if(!cJSON_IsObject(functions_local_nonprimitive)){
            goto end;
        }
        tier_function_dto_t *functionsItem = tier_function_dto_parseFromJSON(functions_local_nonprimitive);

        list_addElement(functionsList, functionsItem);
    }
    }

    // non_fungible_token_dto->token_name
    cJSON *token_name = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "tokenName");
    if (token_name) { 
    if(!cJSON_IsString(token_name))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto->smart_contract_address
    cJSON *smart_contract_address = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "smartContractAddress");
    if (smart_contract_address) { 
    if(!cJSON_IsString(smart_contract_address))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "location");
    location_dto_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_dto_parseFromJSON(location); //nonprimitive
    }

    // non_fungible_token_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto->token_type
    cJSON *token_type = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "tokenType");
    if (token_type) { 
    if(!cJSON_IsString(token_type))
    {
    goto end; //String
    }
    }

    // non_fungible_token_dto->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dtoJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }
    }


    non_fungible_token_dto_local_var = non_fungible_token_dto_create (
        functions ? functionsList : NULL,
        token_name ? strdup(token_name->valuestring) : NULL,
        smart_contract_address ? strdup(smart_contract_address->valuestring) : NULL,
        location ? location_local_nonprim : NULL,
        id ? strdup(id->valuestring) : NULL,
        token_type ? strdup(token_type->valuestring) : NULL,
        url ? strdup(url->valuestring) : NULL
        );

    return non_fungible_token_dto_local_var;
end:
    if (location_local_nonprim) {
        location_dto_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
