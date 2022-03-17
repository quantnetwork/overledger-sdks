#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "execute_search_utxo_response.h"



execute_search_utxo_response_t *execute_search_utxo_response_create(
    char *utxo_id,
    list_t *destination,
    location_t *location,
    char *timestamp,
    status_t *status,
    object_t *native_data
    ) {
    execute_search_utxo_response_t *execute_search_utxo_response_local_var = malloc(sizeof(execute_search_utxo_response_t));
    if (!execute_search_utxo_response_local_var) {
        return NULL;
    }
    execute_search_utxo_response_local_var->utxo_id = utxo_id;
    execute_search_utxo_response_local_var->destination = destination;
    execute_search_utxo_response_local_var->location = location;
    execute_search_utxo_response_local_var->timestamp = timestamp;
    execute_search_utxo_response_local_var->status = status;
    execute_search_utxo_response_local_var->native_data = native_data;

    return execute_search_utxo_response_local_var;
}


void execute_search_utxo_response_free(execute_search_utxo_response_t *execute_search_utxo_response) {
    if(NULL == execute_search_utxo_response){
        return ;
    }
    listEntry_t *listEntry;
    if (execute_search_utxo_response->utxo_id) {
        free(execute_search_utxo_response->utxo_id);
        execute_search_utxo_response->utxo_id = NULL;
    }
    if (execute_search_utxo_response->destination) {
        list_ForEach(listEntry, execute_search_utxo_response->destination) {
            destination_free(listEntry->data);
        }
        list_free(execute_search_utxo_response->destination);
        execute_search_utxo_response->destination = NULL;
    }
    if (execute_search_utxo_response->location) {
        location_free(execute_search_utxo_response->location);
        execute_search_utxo_response->location = NULL;
    }
    if (execute_search_utxo_response->timestamp) {
        free(execute_search_utxo_response->timestamp);
        execute_search_utxo_response->timestamp = NULL;
    }
    if (execute_search_utxo_response->status) {
        status_free(execute_search_utxo_response->status);
        execute_search_utxo_response->status = NULL;
    }
    if (execute_search_utxo_response->native_data) {
        object_free(execute_search_utxo_response->native_data);
        execute_search_utxo_response->native_data = NULL;
    }
    free(execute_search_utxo_response);
}

cJSON *execute_search_utxo_response_convertToJSON(execute_search_utxo_response_t *execute_search_utxo_response) {
    cJSON *item = cJSON_CreateObject();

    // execute_search_utxo_response->utxo_id
    if(execute_search_utxo_response->utxo_id) { 
    if(cJSON_AddStringToObject(item, "utxoId", execute_search_utxo_response->utxo_id) == NULL) {
    goto fail; //String
    }
     } 


    // execute_search_utxo_response->destination
    if(execute_search_utxo_response->destination) { 
    cJSON *destination = cJSON_AddArrayToObject(item, "destination");
    if(destination == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *destinationListEntry;
    if (execute_search_utxo_response->destination) {
    list_ForEach(destinationListEntry, execute_search_utxo_response->destination) {
    cJSON *itemLocal = destination_convertToJSON(destinationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(destination, itemLocal);
    }
    }
     } 


    // execute_search_utxo_response->location
    if(execute_search_utxo_response->location) { 
    cJSON *location_local_JSON = location_convertToJSON(execute_search_utxo_response->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // execute_search_utxo_response->timestamp
    if(execute_search_utxo_response->timestamp) { 
    if(cJSON_AddStringToObject(item, "timestamp", execute_search_utxo_response->timestamp) == NULL) {
    goto fail; //String
    }
     } 


    // execute_search_utxo_response->status
    if(execute_search_utxo_response->status) { 
    cJSON *status_local_JSON = status_convertToJSON(execute_search_utxo_response->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // execute_search_utxo_response->native_data
    if(execute_search_utxo_response->native_data) { 
    cJSON *native_data_object = object_convertToJSON(execute_search_utxo_response->native_data);
    if(native_data_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nativeData", native_data_object);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

execute_search_utxo_response_t *execute_search_utxo_response_parseFromJSON(cJSON *execute_search_utxo_responseJSON){

    execute_search_utxo_response_t *execute_search_utxo_response_local_var = NULL;

    // execute_search_utxo_response->utxo_id
    cJSON *utxo_id = cJSON_GetObjectItemCaseSensitive(execute_search_utxo_responseJSON, "utxoId");
    if (utxo_id) { 
    if(!cJSON_IsString(utxo_id))
    {
    goto end; //String
    }
    }

    // execute_search_utxo_response->destination
    cJSON *destination = cJSON_GetObjectItemCaseSensitive(execute_search_utxo_responseJSON, "destination");
    list_t *destinationList;
    if (destination) { 
    cJSON *destination_local_nonprimitive;
    if(!cJSON_IsArray(destination)){
        goto end; //nonprimitive container
    }

    destinationList = list_create();

    cJSON_ArrayForEach(destination_local_nonprimitive,destination )
    {
        if(!cJSON_IsObject(destination_local_nonprimitive)){
            goto end;
        }
        destination_t *destinationItem = destination_parseFromJSON(destination_local_nonprimitive);

        list_addElement(destinationList, destinationItem);
    }
    }

    // execute_search_utxo_response->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(execute_search_utxo_responseJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // execute_search_utxo_response->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(execute_search_utxo_responseJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp))
    {
    goto end; //String
    }
    }

    // execute_search_utxo_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(execute_search_utxo_responseJSON, "status");
    status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = status_parseFromJSON(status); //nonprimitive
    }

    // execute_search_utxo_response->native_data
    cJSON *native_data = cJSON_GetObjectItemCaseSensitive(execute_search_utxo_responseJSON, "nativeData");
    object_t *native_data_local_object = NULL;
    if (native_data) { 
    native_data_local_object = object_parseFromJSON(native_data); //object
    }


    execute_search_utxo_response_local_var = execute_search_utxo_response_create (
        utxo_id ? strdup(utxo_id->valuestring) : NULL,
        destination ? destinationList : NULL,
        location ? location_local_nonprim : NULL,
        timestamp ? strdup(timestamp->valuestring) : NULL,
        status ? status_local_nonprim : NULL,
        native_data ? native_data_local_object : NULL
        );

    return execute_search_utxo_response_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    if (status_local_nonprim) {
        status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
