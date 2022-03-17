#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "execute_search_utxo_response_schema.h"



execute_search_utxo_response_schema_t *execute_search_utxo_response_schema_create(
    char *utxo_id,
    list_t *destination,
    location_t *location,
    utxo_timestamp_schema_t *timestamp,
    status_t *status,
    utxo_native_data_t *native_data
    ) {
    execute_search_utxo_response_schema_t *execute_search_utxo_response_schema_local_var = malloc(sizeof(execute_search_utxo_response_schema_t));
    if (!execute_search_utxo_response_schema_local_var) {
        return NULL;
    }
    execute_search_utxo_response_schema_local_var->utxo_id = utxo_id;
    execute_search_utxo_response_schema_local_var->destination = destination;
    execute_search_utxo_response_schema_local_var->location = location;
    execute_search_utxo_response_schema_local_var->timestamp = timestamp;
    execute_search_utxo_response_schema_local_var->status = status;
    execute_search_utxo_response_schema_local_var->native_data = native_data;

    return execute_search_utxo_response_schema_local_var;
}


void execute_search_utxo_response_schema_free(execute_search_utxo_response_schema_t *execute_search_utxo_response_schema) {
    if(NULL == execute_search_utxo_response_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (execute_search_utxo_response_schema->utxo_id) {
        free(execute_search_utxo_response_schema->utxo_id);
        execute_search_utxo_response_schema->utxo_id = NULL;
    }
    if (execute_search_utxo_response_schema->destination) {
        list_ForEach(listEntry, execute_search_utxo_response_schema->destination) {
            utxo_destination_free(listEntry->data);
        }
        list_free(execute_search_utxo_response_schema->destination);
        execute_search_utxo_response_schema->destination = NULL;
    }
    if (execute_search_utxo_response_schema->location) {
        location_free(execute_search_utxo_response_schema->location);
        execute_search_utxo_response_schema->location = NULL;
    }
    if (execute_search_utxo_response_schema->timestamp) {
        utxo_timestamp_schema_free(execute_search_utxo_response_schema->timestamp);
        execute_search_utxo_response_schema->timestamp = NULL;
    }
    if (execute_search_utxo_response_schema->status) {
        status_free(execute_search_utxo_response_schema->status);
        execute_search_utxo_response_schema->status = NULL;
    }
    if (execute_search_utxo_response_schema->native_data) {
        utxo_native_data_free(execute_search_utxo_response_schema->native_data);
        execute_search_utxo_response_schema->native_data = NULL;
    }
    free(execute_search_utxo_response_schema);
}

cJSON *execute_search_utxo_response_schema_convertToJSON(execute_search_utxo_response_schema_t *execute_search_utxo_response_schema) {
    cJSON *item = cJSON_CreateObject();

    // execute_search_utxo_response_schema->utxo_id
    if(execute_search_utxo_response_schema->utxo_id) { 
    if(cJSON_AddStringToObject(item, "utxoId", execute_search_utxo_response_schema->utxo_id) == NULL) {
    goto fail; //String
    }
     } 


    // execute_search_utxo_response_schema->destination
    if(execute_search_utxo_response_schema->destination) { 
    cJSON *destination = cJSON_AddArrayToObject(item, "destination");
    if(destination == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *destinationListEntry;
    if (execute_search_utxo_response_schema->destination) {
    list_ForEach(destinationListEntry, execute_search_utxo_response_schema->destination) {
    cJSON *itemLocal = utxo_destination_convertToJSON(destinationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(destination, itemLocal);
    }
    }
     } 


    // execute_search_utxo_response_schema->location
    if(execute_search_utxo_response_schema->location) { 
    cJSON *location_local_JSON = location_convertToJSON(execute_search_utxo_response_schema->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // execute_search_utxo_response_schema->timestamp
    if(execute_search_utxo_response_schema->timestamp) { 
    cJSON *timestamp_local_JSON = utxo_timestamp_schema_convertToJSON(execute_search_utxo_response_schema->timestamp);
    if(timestamp_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "timestamp", timestamp_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // execute_search_utxo_response_schema->status
    if(execute_search_utxo_response_schema->status) { 
    cJSON *status_local_JSON = status_convertToJSON(execute_search_utxo_response_schema->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // execute_search_utxo_response_schema->native_data
    if(execute_search_utxo_response_schema->native_data) { 
    cJSON *native_data_local_JSON = utxo_native_data_convertToJSON(execute_search_utxo_response_schema->native_data);
    if(native_data_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nativeData", native_data_local_JSON);
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

execute_search_utxo_response_schema_t *execute_search_utxo_response_schema_parseFromJSON(cJSON *execute_search_utxo_response_schemaJSON){

    execute_search_utxo_response_schema_t *execute_search_utxo_response_schema_local_var = NULL;

    // execute_search_utxo_response_schema->utxo_id
    cJSON *utxo_id = cJSON_GetObjectItemCaseSensitive(execute_search_utxo_response_schemaJSON, "utxoId");
    if (utxo_id) { 
    if(!cJSON_IsString(utxo_id))
    {
    goto end; //String
    }
    }

    // execute_search_utxo_response_schema->destination
    cJSON *destination = cJSON_GetObjectItemCaseSensitive(execute_search_utxo_response_schemaJSON, "destination");
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
        utxo_destination_t *destinationItem = utxo_destination_parseFromJSON(destination_local_nonprimitive);

        list_addElement(destinationList, destinationItem);
    }
    }

    // execute_search_utxo_response_schema->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(execute_search_utxo_response_schemaJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // execute_search_utxo_response_schema->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(execute_search_utxo_response_schemaJSON, "timestamp");
    utxo_timestamp_schema_t *timestamp_local_nonprim = NULL;
    if (timestamp) { 
    timestamp_local_nonprim = utxo_timestamp_schema_parseFromJSON(timestamp); //nonprimitive
    }

    // execute_search_utxo_response_schema->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(execute_search_utxo_response_schemaJSON, "status");
    status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = status_parseFromJSON(status); //nonprimitive
    }

    // execute_search_utxo_response_schema->native_data
    cJSON *native_data = cJSON_GetObjectItemCaseSensitive(execute_search_utxo_response_schemaJSON, "nativeData");
    utxo_native_data_t *native_data_local_nonprim = NULL;
    if (native_data) { 
    native_data_local_nonprim = utxo_native_data_parseFromJSON(native_data); //nonprimitive
    }


    execute_search_utxo_response_schema_local_var = execute_search_utxo_response_schema_create (
        utxo_id ? strdup(utxo_id->valuestring) : NULL,
        destination ? destinationList : NULL,
        location ? location_local_nonprim : NULL,
        timestamp ? timestamp_local_nonprim : NULL,
        status ? status_local_nonprim : NULL,
        native_data ? native_data_local_nonprim : NULL
        );

    return execute_search_utxo_response_schema_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    if (timestamp_local_nonprim) {
        utxo_timestamp_schema_free(timestamp_local_nonprim);
        timestamp_local_nonprim = NULL;
    }
    if (status_local_nonprim) {
        status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    if (native_data_local_nonprim) {
        utxo_native_data_free(native_data_local_nonprim);
        native_data_local_nonprim = NULL;
    }
    return NULL;

}
