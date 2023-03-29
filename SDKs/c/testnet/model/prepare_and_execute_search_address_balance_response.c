#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_and_execute_search_address_balance_response.h"



prepare_and_execute_search_address_balance_response_t *prepare_and_execute_search_address_balance_response_create(
    list_t *balances,
    location_t *location,
    char *timestamp,
    char *address_id
    ) {
    prepare_and_execute_search_address_balance_response_t *prepare_and_execute_search_address_balance_response_local_var = malloc(sizeof(prepare_and_execute_search_address_balance_response_t));
    if (!prepare_and_execute_search_address_balance_response_local_var) {
        return NULL;
    }
    prepare_and_execute_search_address_balance_response_local_var->balances = balances;
    prepare_and_execute_search_address_balance_response_local_var->location = location;
    prepare_and_execute_search_address_balance_response_local_var->timestamp = timestamp;
    prepare_and_execute_search_address_balance_response_local_var->address_id = address_id;

    return prepare_and_execute_search_address_balance_response_local_var;
}


void prepare_and_execute_search_address_balance_response_free(prepare_and_execute_search_address_balance_response_t *prepare_and_execute_search_address_balance_response) {
    if(NULL == prepare_and_execute_search_address_balance_response){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_and_execute_search_address_balance_response->balances) {
        list_ForEach(listEntry, prepare_and_execute_search_address_balance_response->balances) {
            prepare_and_execute_balance_details_free(listEntry->data);
        }
        list_free(prepare_and_execute_search_address_balance_response->balances);
        prepare_and_execute_search_address_balance_response->balances = NULL;
    }
    if (prepare_and_execute_search_address_balance_response->location) {
        location_free(prepare_and_execute_search_address_balance_response->location);
        prepare_and_execute_search_address_balance_response->location = NULL;
    }
    if (prepare_and_execute_search_address_balance_response->timestamp) {
        free(prepare_and_execute_search_address_balance_response->timestamp);
        prepare_and_execute_search_address_balance_response->timestamp = NULL;
    }
    if (prepare_and_execute_search_address_balance_response->address_id) {
        free(prepare_and_execute_search_address_balance_response->address_id);
        prepare_and_execute_search_address_balance_response->address_id = NULL;
    }
    free(prepare_and_execute_search_address_balance_response);
}

cJSON *prepare_and_execute_search_address_balance_response_convertToJSON(prepare_and_execute_search_address_balance_response_t *prepare_and_execute_search_address_balance_response) {
    cJSON *item = cJSON_CreateObject();

    // prepare_and_execute_search_address_balance_response->balances
    if(prepare_and_execute_search_address_balance_response->balances) { 
    cJSON *balances = cJSON_AddArrayToObject(item, "balances");
    if(balances == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *balancesListEntry;
    if (prepare_and_execute_search_address_balance_response->balances) {
    list_ForEach(balancesListEntry, prepare_and_execute_search_address_balance_response->balances) {
    cJSON *itemLocal = prepare_and_execute_balance_details_convertToJSON(balancesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(balances, itemLocal);
    }
    }
     } 


    // prepare_and_execute_search_address_balance_response->location
    if(prepare_and_execute_search_address_balance_response->location) { 
    cJSON *location_local_JSON = location_convertToJSON(prepare_and_execute_search_address_balance_response->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_and_execute_search_address_balance_response->timestamp
    if(prepare_and_execute_search_address_balance_response->timestamp) { 
    if(cJSON_AddStringToObject(item, "timestamp", prepare_and_execute_search_address_balance_response->timestamp) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_and_execute_search_address_balance_response->address_id
    if(prepare_and_execute_search_address_balance_response->address_id) { 
    if(cJSON_AddStringToObject(item, "addressId", prepare_and_execute_search_address_balance_response->address_id) == NULL) {
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

prepare_and_execute_search_address_balance_response_t *prepare_and_execute_search_address_balance_response_parseFromJSON(cJSON *prepare_and_execute_search_address_balance_responseJSON){

    prepare_and_execute_search_address_balance_response_t *prepare_and_execute_search_address_balance_response_local_var = NULL;

    // prepare_and_execute_search_address_balance_response->balances
    cJSON *balances = cJSON_GetObjectItemCaseSensitive(prepare_and_execute_search_address_balance_responseJSON, "balances");
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
        prepare_and_execute_balance_details_t *balancesItem = prepare_and_execute_balance_details_parseFromJSON(balances_local_nonprimitive);

        list_addElement(balancesList, balancesItem);
    }
    }

    // prepare_and_execute_search_address_balance_response->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(prepare_and_execute_search_address_balance_responseJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // prepare_and_execute_search_address_balance_response->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(prepare_and_execute_search_address_balance_responseJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp))
    {
    goto end; //String
    }
    }

    // prepare_and_execute_search_address_balance_response->address_id
    cJSON *address_id = cJSON_GetObjectItemCaseSensitive(prepare_and_execute_search_address_balance_responseJSON, "addressId");
    if (address_id) { 
    if(!cJSON_IsString(address_id))
    {
    goto end; //String
    }
    }


    prepare_and_execute_search_address_balance_response_local_var = prepare_and_execute_search_address_balance_response_create (
        balances ? balancesList : NULL,
        location ? location_local_nonprim : NULL,
        timestamp ? strdup(timestamp->valuestring) : NULL,
        address_id ? strdup(address_id->valuestring) : NULL
        );

    return prepare_and_execute_search_address_balance_response_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
