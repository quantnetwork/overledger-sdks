#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "erc20_dto.h"



erc20_dto_t *erc20_dto_create(
    int is_qrc20,
    char *token_unit,
    int decimal_places,
    list_t *functions,
    char *token_name,
    char *smart_contract_address,
    location_dto_t *location,
    char *version,
    char *url,
    char *audit_date
    ) {
    erc20_dto_t *erc20_dto_local_var = malloc(sizeof(erc20_dto_t));
    if (!erc20_dto_local_var) {
        return NULL;
    }
    erc20_dto_local_var->is_qrc20 = is_qrc20;
    erc20_dto_local_var->token_unit = token_unit;
    erc20_dto_local_var->decimal_places = decimal_places;
    erc20_dto_local_var->functions = functions;
    erc20_dto_local_var->token_name = token_name;
    erc20_dto_local_var->smart_contract_address = smart_contract_address;
    erc20_dto_local_var->location = location;
    erc20_dto_local_var->version = version;
    erc20_dto_local_var->url = url;
    erc20_dto_local_var->audit_date = audit_date;

    return erc20_dto_local_var;
}


void erc20_dto_free(erc20_dto_t *erc20_dto) {
    if(NULL == erc20_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (erc20_dto->token_unit) {
        free(erc20_dto->token_unit);
        erc20_dto->token_unit = NULL;
    }
    if (erc20_dto->functions) {
        list_ForEach(listEntry, erc20_dto->functions) {
            tier_function_dto_free(listEntry->data);
        }
        list_free(erc20_dto->functions);
        erc20_dto->functions = NULL;
    }
    if (erc20_dto->token_name) {
        free(erc20_dto->token_name);
        erc20_dto->token_name = NULL;
    }
    if (erc20_dto->smart_contract_address) {
        free(erc20_dto->smart_contract_address);
        erc20_dto->smart_contract_address = NULL;
    }
    if (erc20_dto->location) {
        location_dto_free(erc20_dto->location);
        erc20_dto->location = NULL;
    }
    if (erc20_dto->version) {
        free(erc20_dto->version);
        erc20_dto->version = NULL;
    }
    if (erc20_dto->url) {
        free(erc20_dto->url);
        erc20_dto->url = NULL;
    }
    if (erc20_dto->audit_date) {
        free(erc20_dto->audit_date);
        erc20_dto->audit_date = NULL;
    }
    free(erc20_dto);
}

cJSON *erc20_dto_convertToJSON(erc20_dto_t *erc20_dto) {
    cJSON *item = cJSON_CreateObject();

    // erc20_dto->is_qrc20
    if(erc20_dto->is_qrc20) { 
    if(cJSON_AddBoolToObject(item, "isQrc20", erc20_dto->is_qrc20) == NULL) {
    goto fail; //Bool
    }
     } 


    // erc20_dto->token_unit
    if(erc20_dto->token_unit) { 
    if(cJSON_AddStringToObject(item, "tokenUnit", erc20_dto->token_unit) == NULL) {
    goto fail; //String
    }
     } 


    // erc20_dto->decimal_places
    if(erc20_dto->decimal_places) { 
    if(cJSON_AddNumberToObject(item, "decimalPlaces", erc20_dto->decimal_places) == NULL) {
    goto fail; //Numeric
    }
     } 


    // erc20_dto->functions
    if(erc20_dto->functions) { 
    cJSON *functions = cJSON_AddArrayToObject(item, "functions");
    if(functions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *functionsListEntry;
    if (erc20_dto->functions) {
    list_ForEach(functionsListEntry, erc20_dto->functions) {
    cJSON *itemLocal = tier_function_dto_convertToJSON(functionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(functions, itemLocal);
    }
    }
     } 


    // erc20_dto->token_name
    if(erc20_dto->token_name) { 
    if(cJSON_AddStringToObject(item, "tokenName", erc20_dto->token_name) == NULL) {
    goto fail; //String
    }
     } 


    // erc20_dto->smart_contract_address
    if(erc20_dto->smart_contract_address) { 
    if(cJSON_AddStringToObject(item, "smartContractAddress", erc20_dto->smart_contract_address) == NULL) {
    goto fail; //String
    }
     } 


    // erc20_dto->location
    if(erc20_dto->location) { 
    cJSON *location_local_JSON = location_dto_convertToJSON(erc20_dto->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // erc20_dto->version
    if(erc20_dto->version) { 
    if(cJSON_AddStringToObject(item, "version", erc20_dto->version) == NULL) {
    goto fail; //String
    }
     } 


    // erc20_dto->url
    if(erc20_dto->url) { 
    if(cJSON_AddStringToObject(item, "url", erc20_dto->url) == NULL) {
    goto fail; //String
    }
     } 


    // erc20_dto->audit_date
    if(erc20_dto->audit_date) { 
    if(cJSON_AddStringToObject(item, "auditDate", erc20_dto->audit_date) == NULL) {
    goto fail; //Date
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

erc20_dto_t *erc20_dto_parseFromJSON(cJSON *erc20_dtoJSON){

    erc20_dto_t *erc20_dto_local_var = NULL;

    // erc20_dto->is_qrc20
    cJSON *is_qrc20 = cJSON_GetObjectItemCaseSensitive(erc20_dtoJSON, "isQrc20");
    if (is_qrc20) { 
    if(!cJSON_IsBool(is_qrc20))
    {
    goto end; //Bool
    }
    }

    // erc20_dto->token_unit
    cJSON *token_unit = cJSON_GetObjectItemCaseSensitive(erc20_dtoJSON, "tokenUnit");
    if (token_unit) { 
    if(!cJSON_IsString(token_unit))
    {
    goto end; //String
    }
    }

    // erc20_dto->decimal_places
    cJSON *decimal_places = cJSON_GetObjectItemCaseSensitive(erc20_dtoJSON, "decimalPlaces");
    if (decimal_places) { 
    if(!cJSON_IsNumber(decimal_places))
    {
    goto end; //Numeric
    }
    }

    // erc20_dto->functions
    cJSON *functions = cJSON_GetObjectItemCaseSensitive(erc20_dtoJSON, "functions");
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

    // erc20_dto->token_name
    cJSON *token_name = cJSON_GetObjectItemCaseSensitive(erc20_dtoJSON, "tokenName");
    if (token_name) { 
    if(!cJSON_IsString(token_name))
    {
    goto end; //String
    }
    }

    // erc20_dto->smart_contract_address
    cJSON *smart_contract_address = cJSON_GetObjectItemCaseSensitive(erc20_dtoJSON, "smartContractAddress");
    if (smart_contract_address) { 
    if(!cJSON_IsString(smart_contract_address))
    {
    goto end; //String
    }
    }

    // erc20_dto->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(erc20_dtoJSON, "location");
    location_dto_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_dto_parseFromJSON(location); //nonprimitive
    }

    // erc20_dto->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(erc20_dtoJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version))
    {
    goto end; //String
    }
    }

    // erc20_dto->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(erc20_dtoJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }
    }

    // erc20_dto->audit_date
    cJSON *audit_date = cJSON_GetObjectItemCaseSensitive(erc20_dtoJSON, "auditDate");
    if (audit_date) { 
    if(!cJSON_IsString(audit_date))
    {
    goto end; //Date
    }
    }


    erc20_dto_local_var = erc20_dto_create (
        is_qrc20 ? is_qrc20->valueint : 0,
        token_unit ? strdup(token_unit->valuestring) : NULL,
        decimal_places ? decimal_places->valuedouble : 0,
        functions ? functionsList : NULL,
        token_name ? strdup(token_name->valuestring) : NULL,
        smart_contract_address ? strdup(smart_contract_address->valuestring) : NULL,
        location ? location_local_nonprim : NULL,
        version ? strdup(version->valuestring) : NULL,
        url ? strdup(url->valuestring) : NULL,
        audit_date ? strdup(audit_date->valuestring) : NULL
        );

    return erc20_dto_local_var;
end:
    if (location_local_nonprim) {
        location_dto_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
