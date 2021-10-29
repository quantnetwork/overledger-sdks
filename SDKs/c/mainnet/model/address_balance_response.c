#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "address_balance_response.h"



address_balance_response_t *address_balance_response_create(
    char *unit,
    double value,
    char *address_id
    ) {
    address_balance_response_t *address_balance_response_local_var = malloc(sizeof(address_balance_response_t));
    if (!address_balance_response_local_var) {
        return NULL;
    }
    address_balance_response_local_var->unit = unit;
    address_balance_response_local_var->value = value;
    address_balance_response_local_var->address_id = address_id;

    return address_balance_response_local_var;
}


void address_balance_response_free(address_balance_response_t *address_balance_response) {
    if(NULL == address_balance_response){
        return ;
    }
    listEntry_t *listEntry;
    if (address_balance_response->unit) {
        free(address_balance_response->unit);
        address_balance_response->unit = NULL;
    }
    if (address_balance_response->address_id) {
        free(address_balance_response->address_id);
        address_balance_response->address_id = NULL;
    }
    free(address_balance_response);
}

cJSON *address_balance_response_convertToJSON(address_balance_response_t *address_balance_response) {
    cJSON *item = cJSON_CreateObject();

    // address_balance_response->unit
    if(address_balance_response->unit) { 
    if(cJSON_AddStringToObject(item, "unit", address_balance_response->unit) == NULL) {
    goto fail; //String
    }
     } 


    // address_balance_response->value
    if(address_balance_response->value) { 
    if(cJSON_AddNumberToObject(item, "value", address_balance_response->value) == NULL) {
    goto fail; //Numeric
    }
     } 


    // address_balance_response->address_id
    if(address_balance_response->address_id) { 
    if(cJSON_AddStringToObject(item, "addressId", address_balance_response->address_id) == NULL) {
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

address_balance_response_t *address_balance_response_parseFromJSON(cJSON *address_balance_responseJSON){

    address_balance_response_t *address_balance_response_local_var = NULL;

    // address_balance_response->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(address_balance_responseJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit))
    {
    goto end; //String
    }
    }

    // address_balance_response->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(address_balance_responseJSON, "value");
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // address_balance_response->address_id
    cJSON *address_id = cJSON_GetObjectItemCaseSensitive(address_balance_responseJSON, "addressId");
    if (address_id) { 
    if(!cJSON_IsString(address_id))
    {
    goto end; //String
    }
    }


    address_balance_response_local_var = address_balance_response_create (
        unit ? strdup(unit->valuestring) : NULL,
        value ? value->valuedouble : 0,
        address_id ? strdup(address_id->valuestring) : NULL
        );

    return address_balance_response_local_var;
end:
    return NULL;

}
