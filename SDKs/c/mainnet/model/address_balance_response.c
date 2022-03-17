#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "address_balance_response.h"



address_balance_response_t *address_balance_response_create(
    char *unit,
    char *amount
    ) {
    address_balance_response_t *address_balance_response_local_var = malloc(sizeof(address_balance_response_t));
    if (!address_balance_response_local_var) {
        return NULL;
    }
    address_balance_response_local_var->unit = unit;
    address_balance_response_local_var->amount = amount;

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
    if (address_balance_response->amount) {
        free(address_balance_response->amount);
        address_balance_response->amount = NULL;
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


    // address_balance_response->amount
    if(address_balance_response->amount) { 
    if(cJSON_AddStringToObject(item, "amount", address_balance_response->amount) == NULL) {
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

    // address_balance_response->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(address_balance_responseJSON, "amount");
    if (amount) { 
    if(!cJSON_IsString(amount))
    {
    goto end; //String
    }
    }


    address_balance_response_local_var = address_balance_response_create (
        unit ? strdup(unit->valuestring) : NULL,
        amount ? strdup(amount->valuestring) : NULL
        );

    return address_balance_response_local_var;
end:
    return NULL;

}
