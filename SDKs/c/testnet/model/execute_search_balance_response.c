#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "execute_search_balance_response.h"



execute_search_balance_response_t *execute_search_balance_response_create(
    list_t *balances,
    location_t *location,
    char *timestamp,
    char *address_id
    ) {
    execute_search_balance_response_t *execute_search_balance_response_local_var = malloc(sizeof(execute_search_balance_response_t));
    if (!execute_search_balance_response_local_var) {
        return NULL;
    }
    execute_search_balance_response_local_var->balances = balances;
    execute_search_balance_response_local_var->location = location;
    execute_search_balance_response_local_var->timestamp = timestamp;
    execute_search_balance_response_local_var->address_id = address_id;

    return execute_search_balance_response_local_var;
}


void execute_search_balance_response_free(execute_search_balance_response_t *execute_search_balance_response) {
    if(NULL == execute_search_balance_response){
        return ;
    }
    listEntry_t *listEntry;
    if (execute_search_balance_response->balances) {
        list_ForEach(listEntry, execute_search_balance_response->balances) {
            address_balance_response_free(listEntry->data);
        }
        list_free(execute_search_balance_response->balances);
        execute_search_balance_response->balances = NULL;
    }
    if (execute_search_balance_response->location) {
        location_free(execute_search_balance_response->location);
        execute_search_balance_response->location = NULL;
    }
    if (execute_search_balance_response->timestamp) {
        free(execute_search_balance_response->timestamp);
        execute_search_balance_response->timestamp = NULL;
    }
    if (execute_search_balance_response->address_id) {
        free(execute_search_balance_response->address_id);
        execute_search_balance_response->address_id = NULL;
    }
    free(execute_search_balance_response);
}

cJSON *execute_search_balance_response_convertToJSON(execute_search_balance_response_t *execute_search_balance_response) {
    cJSON *item = cJSON_CreateObject();

    // execute_search_balance_response->balances
    if(execute_search_balance_response->balances) { 
    cJSON *balances = cJSON_AddArrayToObject(item, "balances");
    if(balances == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *balancesListEntry;
    if (execute_search_balance_response->balances) {
    list_ForEach(balancesListEntry, execute_search_balance_response->balances) {
    cJSON *itemLocal = address_balance_response_convertToJSON(balancesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(balances, itemLocal);
    }
    }
     } 


    // execute_search_balance_response->location
    if(execute_search_balance_response->location) { 
    cJSON *location_local_JSON = location_convertToJSON(execute_search_balance_response->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // execute_search_balance_response->timestamp
    if(execute_search_balance_response->timestamp) { 
    if(cJSON_AddStringToObject(item, "timestamp", execute_search_balance_response->timestamp) == NULL) {
    goto fail; //String
    }
     } 


    // execute_search_balance_response->address_id
    if(execute_search_balance_response->address_id) { 
    if(cJSON_AddStringToObject(item, "addressId", execute_search_balance_response->address_id) == NULL) {
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

execute_search_balance_response_t *execute_search_balance_response_parseFromJSON(cJSON *execute_search_balance_responseJSON){

    execute_search_balance_response_t *execute_search_balance_response_local_var = NULL;

    // execute_search_balance_response->balances
    cJSON *balances = cJSON_GetObjectItemCaseSensitive(execute_search_balance_responseJSON, "balances");
    list_t *balancesList;
    if (balances) { 
    cJSON *balances_local_nonprimitive;
    if(!cJSON_IsArray(balances)){
        goto end; //nonprimitive container
    }

    balancesList = list_create();

    cJSON_ArrayForEach(balances_local_nonprimitive,balances )
    {
        if(!cJSON_IsObject(balances_local_nonprimitive)){
            goto end;
        }
        address_balance_response_t *balancesItem = address_balance_response_parseFromJSON(balances_local_nonprimitive);

        list_addElement(balancesList, balancesItem);
    }
    }

    // execute_search_balance_response->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(execute_search_balance_responseJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // execute_search_balance_response->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(execute_search_balance_responseJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp))
    {
    goto end; //String
    }
    }

    // execute_search_balance_response->address_id
    cJSON *address_id = cJSON_GetObjectItemCaseSensitive(execute_search_balance_responseJSON, "addressId");
    if (address_id) { 
    if(!cJSON_IsString(address_id))
    {
    goto end; //String
    }
    }


    execute_search_balance_response_local_var = execute_search_balance_response_create (
        balances ? balancesList : NULL,
        location ? location_local_nonprim : NULL,
        timestamp ? strdup(timestamp->valuestring) : NULL,
        address_id ? strdup(address_id->valuestring) : NULL
        );

    return execute_search_balance_response_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
