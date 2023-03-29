#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "non_fungible_token_response.h"



non_fungible_token_response_t *non_fungible_token_response_create(
    char *token_name,
    char *documentation_url,
    location_t *location,
    list_t *functions,
    char *contract_type,
    char *smart_contract_id
    ) {
    non_fungible_token_response_t *non_fungible_token_response_local_var = malloc(sizeof(non_fungible_token_response_t));
    if (!non_fungible_token_response_local_var) {
        return NULL;
    }
    non_fungible_token_response_local_var->token_name = token_name;
    non_fungible_token_response_local_var->documentation_url = documentation_url;
    non_fungible_token_response_local_var->location = location;
    non_fungible_token_response_local_var->functions = functions;
    non_fungible_token_response_local_var->contract_type = contract_type;
    non_fungible_token_response_local_var->smart_contract_id = smart_contract_id;

    return non_fungible_token_response_local_var;
}


void non_fungible_token_response_free(non_fungible_token_response_t *non_fungible_token_response) {
    if(NULL == non_fungible_token_response){
        return ;
    }
    listEntry_t *listEntry;
    if (non_fungible_token_response->token_name) {
        free(non_fungible_token_response->token_name);
        non_fungible_token_response->token_name = NULL;
    }
    if (non_fungible_token_response->documentation_url) {
        free(non_fungible_token_response->documentation_url);
        non_fungible_token_response->documentation_url = NULL;
    }
    if (non_fungible_token_response->location) {
        location_free(non_fungible_token_response->location);
        non_fungible_token_response->location = NULL;
    }
    if (non_fungible_token_response->functions) {
        list_ForEach(listEntry, non_fungible_token_response->functions) {
            function_free(listEntry->data);
        }
        list_free(non_fungible_token_response->functions);
        non_fungible_token_response->functions = NULL;
    }
    if (non_fungible_token_response->contract_type) {
        free(non_fungible_token_response->contract_type);
        non_fungible_token_response->contract_type = NULL;
    }
    if (non_fungible_token_response->smart_contract_id) {
        free(non_fungible_token_response->smart_contract_id);
        non_fungible_token_response->smart_contract_id = NULL;
    }
    free(non_fungible_token_response);
}

cJSON *non_fungible_token_response_convertToJSON(non_fungible_token_response_t *non_fungible_token_response) {
    cJSON *item = cJSON_CreateObject();

    // non_fungible_token_response->token_name
    if(non_fungible_token_response->token_name) { 
    if(cJSON_AddStringToObject(item, "tokenName", non_fungible_token_response->token_name) == NULL) {
    goto fail; //String
    }
     } 


    // non_fungible_token_response->documentation_url
    if(non_fungible_token_response->documentation_url) { 
    if(cJSON_AddStringToObject(item, "documentationUrl", non_fungible_token_response->documentation_url) == NULL) {
    goto fail; //String
    }
     } 


    // non_fungible_token_response->location
    if(non_fungible_token_response->location) { 
    cJSON *location_local_JSON = location_convertToJSON(non_fungible_token_response->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // non_fungible_token_response->functions
    if(non_fungible_token_response->functions) { 
    cJSON *functions = cJSON_AddArrayToObject(item, "functions");
    if(functions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *functionsListEntry;
    if (non_fungible_token_response->functions) {
    list_ForEach(functionsListEntry, non_fungible_token_response->functions) {
    cJSON *itemLocal = function_convertToJSON(functionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(functions, itemLocal);
    }
    }
     } 


    // non_fungible_token_response->contract_type
    if(non_fungible_token_response->contract_type) { 
    if(cJSON_AddStringToObject(item, "contractType", non_fungible_token_response->contract_type) == NULL) {
    goto fail; //String
    }
     } 


    // non_fungible_token_response->smart_contract_id
    if(non_fungible_token_response->smart_contract_id) { 
    if(cJSON_AddStringToObject(item, "smartContractId", non_fungible_token_response->smart_contract_id) == NULL) {
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

non_fungible_token_response_t *non_fungible_token_response_parseFromJSON(cJSON *non_fungible_token_responseJSON){

    non_fungible_token_response_t *non_fungible_token_response_local_var = NULL;

    // non_fungible_token_response->token_name
    cJSON *token_name = cJSON_GetObjectItemCaseSensitive(non_fungible_token_responseJSON, "tokenName");
    if (token_name) { 
    if(!cJSON_IsString(token_name))
    {
    goto end; //String
    }
    }

    // non_fungible_token_response->documentation_url
    cJSON *documentation_url = cJSON_GetObjectItemCaseSensitive(non_fungible_token_responseJSON, "documentationUrl");
    if (documentation_url) { 
    if(!cJSON_IsString(documentation_url))
    {
    goto end; //String
    }
    }

    // non_fungible_token_response->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(non_fungible_token_responseJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // non_fungible_token_response->functions
    cJSON *functions = cJSON_GetObjectItemCaseSensitive(non_fungible_token_responseJSON, "functions");
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
        function_t *functionsItem = function_parseFromJSON(functions_local_nonprimitive);

        list_addElement(functionsList, functionsItem);
    }
    }

    // non_fungible_token_response->contract_type
    cJSON *contract_type = cJSON_GetObjectItemCaseSensitive(non_fungible_token_responseJSON, "contractType");
    if (contract_type) { 
    if(!cJSON_IsString(contract_type))
    {
    goto end; //String
    }
    }

    // non_fungible_token_response->smart_contract_id
    cJSON *smart_contract_id = cJSON_GetObjectItemCaseSensitive(non_fungible_token_responseJSON, "smartContractId");
    if (smart_contract_id) { 
    if(!cJSON_IsString(smart_contract_id))
    {
    goto end; //String
    }
    }


    non_fungible_token_response_local_var = non_fungible_token_response_create (
        token_name ? strdup(token_name->valuestring) : NULL,
        documentation_url ? strdup(documentation_url->valuestring) : NULL,
        location ? location_local_nonprim : NULL,
        functions ? functionsList : NULL,
        contract_type ? strdup(contract_type->valuestring) : NULL,
        smart_contract_id ? strdup(smart_contract_id->valuestring) : NULL
        );

    return non_fungible_token_response_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
