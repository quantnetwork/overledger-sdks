#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fungible_token_response_dto.h"


char* contract_typefungible_token_response_dto_ToString(quant_overledger_api_fungible_token_response_dto_CONTRACTTYPE_e contract_type) {
    char* contract_typeArray[] =  { "NULL", "ERC20", "QRC20" };
	return contract_typeArray[contract_type];
}

quant_overledger_api_fungible_token_response_dto_CONTRACTTYPE_e contract_typefungible_token_response_dto_FromString(char* contract_type){
    int stringToReturn = 0;
    char *contract_typeArray[] =  { "NULL", "ERC20", "QRC20" };
    size_t sizeofArray = sizeof(contract_typeArray) / sizeof(contract_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(contract_type, contract_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

fungible_token_response_dto_t *fungible_token_response_dto_create(
    char *documentation_url,
    char *unit,
    int decimal_places,
    list_t *functions,
    quant_overledger_api_fungible_token_response_dto_CONTRACTTYPE_e contract_type,
    location_dto_t *location,
    char *smart_contract_id
    ) {
    fungible_token_response_dto_t *fungible_token_response_dto_local_var = malloc(sizeof(fungible_token_response_dto_t));
    if (!fungible_token_response_dto_local_var) {
        return NULL;
    }
    fungible_token_response_dto_local_var->documentation_url = documentation_url;
    fungible_token_response_dto_local_var->unit = unit;
    fungible_token_response_dto_local_var->decimal_places = decimal_places;
    fungible_token_response_dto_local_var->functions = functions;
    fungible_token_response_dto_local_var->contract_type = contract_type;
    fungible_token_response_dto_local_var->location = location;
    fungible_token_response_dto_local_var->smart_contract_id = smart_contract_id;

    return fungible_token_response_dto_local_var;
}


void fungible_token_response_dto_free(fungible_token_response_dto_t *fungible_token_response_dto) {
    if(NULL == fungible_token_response_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (fungible_token_response_dto->documentation_url) {
        free(fungible_token_response_dto->documentation_url);
        fungible_token_response_dto->documentation_url = NULL;
    }
    if (fungible_token_response_dto->unit) {
        free(fungible_token_response_dto->unit);
        fungible_token_response_dto->unit = NULL;
    }
    if (fungible_token_response_dto->functions) {
        list_ForEach(listEntry, fungible_token_response_dto->functions) {
            function_dto_free(listEntry->data);
        }
        list_free(fungible_token_response_dto->functions);
        fungible_token_response_dto->functions = NULL;
    }
    if (fungible_token_response_dto->location) {
        location_dto_free(fungible_token_response_dto->location);
        fungible_token_response_dto->location = NULL;
    }
    if (fungible_token_response_dto->smart_contract_id) {
        free(fungible_token_response_dto->smart_contract_id);
        fungible_token_response_dto->smart_contract_id = NULL;
    }
    free(fungible_token_response_dto);
}

cJSON *fungible_token_response_dto_convertToJSON(fungible_token_response_dto_t *fungible_token_response_dto) {
    cJSON *item = cJSON_CreateObject();

    // fungible_token_response_dto->documentation_url
    if(fungible_token_response_dto->documentation_url) { 
    if(cJSON_AddStringToObject(item, "documentationUrl", fungible_token_response_dto->documentation_url) == NULL) {
    goto fail; //String
    }
     } 


    // fungible_token_response_dto->unit
    if(fungible_token_response_dto->unit) { 
    if(cJSON_AddStringToObject(item, "unit", fungible_token_response_dto->unit) == NULL) {
    goto fail; //String
    }
     } 


    // fungible_token_response_dto->decimal_places
    if(fungible_token_response_dto->decimal_places) { 
    if(cJSON_AddNumberToObject(item, "decimalPlaces", fungible_token_response_dto->decimal_places) == NULL) {
    goto fail; //Numeric
    }
     } 


    // fungible_token_response_dto->functions
    if(fungible_token_response_dto->functions) { 
    cJSON *functions = cJSON_AddArrayToObject(item, "functions");
    if(functions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *functionsListEntry;
    if (fungible_token_response_dto->functions) {
    list_ForEach(functionsListEntry, fungible_token_response_dto->functions) {
    cJSON *itemLocal = function_dto_convertToJSON(functionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(functions, itemLocal);
    }
    }
     } 


    // fungible_token_response_dto->contract_type
    
    if(cJSON_AddStringToObject(item, "contractType", contract_typefungible_token_response_dto_ToString(fungible_token_response_dto->contract_type)) == NULL)
    {
    goto fail; //Enum
    }
    


    // fungible_token_response_dto->location
    if(fungible_token_response_dto->location) { 
    cJSON *location_local_JSON = location_dto_convertToJSON(fungible_token_response_dto->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // fungible_token_response_dto->smart_contract_id
    if(fungible_token_response_dto->smart_contract_id) { 
    if(cJSON_AddStringToObject(item, "smartContractId", fungible_token_response_dto->smart_contract_id) == NULL) {
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

fungible_token_response_dto_t *fungible_token_response_dto_parseFromJSON(cJSON *fungible_token_response_dtoJSON){

    fungible_token_response_dto_t *fungible_token_response_dto_local_var = NULL;

    // fungible_token_response_dto->documentation_url
    cJSON *documentation_url = cJSON_GetObjectItemCaseSensitive(fungible_token_response_dtoJSON, "documentationUrl");
    if (documentation_url) { 
    if(!cJSON_IsString(documentation_url))
    {
    goto end; //String
    }
    }

    // fungible_token_response_dto->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(fungible_token_response_dtoJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit))
    {
    goto end; //String
    }
    }

    // fungible_token_response_dto->decimal_places
    cJSON *decimal_places = cJSON_GetObjectItemCaseSensitive(fungible_token_response_dtoJSON, "decimalPlaces");
    if (decimal_places) { 
    if(!cJSON_IsNumber(decimal_places))
    {
    goto end; //Numeric
    }
    }

    // fungible_token_response_dto->functions
    cJSON *functions = cJSON_GetObjectItemCaseSensitive(fungible_token_response_dtoJSON, "functions");
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
        function_dto_t *functionsItem = function_dto_parseFromJSON(functions_local_nonprimitive);

        list_addElement(functionsList, functionsItem);
    }
    }

    // fungible_token_response_dto->contract_type
    cJSON *contract_type = cJSON_GetObjectItemCaseSensitive(fungible_token_response_dtoJSON, "contractType");
    quant_overledger_api_fungible_token_response_dto_CONTRACTTYPE_e contract_typeVariable;
    if (contract_type) { 
    if(!cJSON_IsString(contract_type))
    {
    goto end; //Enum
    }
    contract_typeVariable = contract_typefungible_token_response_dto_FromString(contract_type->valuestring);
    }

    // fungible_token_response_dto->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(fungible_token_response_dtoJSON, "location");
    location_dto_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_dto_parseFromJSON(location); //nonprimitive
    }

    // fungible_token_response_dto->smart_contract_id
    cJSON *smart_contract_id = cJSON_GetObjectItemCaseSensitive(fungible_token_response_dtoJSON, "smartContractId");
    if (smart_contract_id) { 
    if(!cJSON_IsString(smart_contract_id))
    {
    goto end; //String
    }
    }


    fungible_token_response_dto_local_var = fungible_token_response_dto_create (
        documentation_url ? strdup(documentation_url->valuestring) : NULL,
        unit ? strdup(unit->valuestring) : NULL,
        decimal_places ? decimal_places->valuedouble : 0,
        functions ? functionsList : NULL,
        contract_type ? contract_typeVariable : -1,
        location ? location_local_nonprim : NULL,
        smart_contract_id ? strdup(smart_contract_id->valuestring) : NULL
        );

    return fungible_token_response_dto_local_var;
end:
    if (location_local_nonprim) {
        location_dto_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
