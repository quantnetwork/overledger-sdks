#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "smart_contract_monitoring_details_schema.h"



smart_contract_monitoring_details_schema_t *smart_contract_monitoring_details_schema_create(
    resource_monitoring_smart_contract_event_details_t *smart_contract_event_details,
    location_t *location,
    list_t *smart_contract_event_history,
    char *type,
    status_t *status,
    char *timestamp
    ) {
    smart_contract_monitoring_details_schema_t *smart_contract_monitoring_details_schema_local_var = malloc(sizeof(smart_contract_monitoring_details_schema_t));
    if (!smart_contract_monitoring_details_schema_local_var) {
        return NULL;
    }
    smart_contract_monitoring_details_schema_local_var->smart_contract_event_details = smart_contract_event_details;
    smart_contract_monitoring_details_schema_local_var->location = location;
    smart_contract_monitoring_details_schema_local_var->smart_contract_event_history = smart_contract_event_history;
    smart_contract_monitoring_details_schema_local_var->type = type;
    smart_contract_monitoring_details_schema_local_var->status = status;
    smart_contract_monitoring_details_schema_local_var->timestamp = timestamp;

    return smart_contract_monitoring_details_schema_local_var;
}


void smart_contract_monitoring_details_schema_free(smart_contract_monitoring_details_schema_t *smart_contract_monitoring_details_schema) {
    if(NULL == smart_contract_monitoring_details_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (smart_contract_monitoring_details_schema->smart_contract_event_details) {
        resource_monitoring_smart_contract_event_details_free(smart_contract_monitoring_details_schema->smart_contract_event_details);
        smart_contract_monitoring_details_schema->smart_contract_event_details = NULL;
    }
    if (smart_contract_monitoring_details_schema->location) {
        location_free(smart_contract_monitoring_details_schema->location);
        smart_contract_monitoring_details_schema->location = NULL;
    }
    if (smart_contract_monitoring_details_schema->smart_contract_event_history) {
        list_ForEach(listEntry, smart_contract_monitoring_details_schema->smart_contract_event_history) {
            smart_contract_event_history_free(listEntry->data);
        }
        list_free(smart_contract_monitoring_details_schema->smart_contract_event_history);
        smart_contract_monitoring_details_schema->smart_contract_event_history = NULL;
    }
    if (smart_contract_monitoring_details_schema->type) {
        free(smart_contract_monitoring_details_schema->type);
        smart_contract_monitoring_details_schema->type = NULL;
    }
    if (smart_contract_monitoring_details_schema->status) {
        status_free(smart_contract_monitoring_details_schema->status);
        smart_contract_monitoring_details_schema->status = NULL;
    }
    if (smart_contract_monitoring_details_schema->timestamp) {
        free(smart_contract_monitoring_details_schema->timestamp);
        smart_contract_monitoring_details_schema->timestamp = NULL;
    }
    free(smart_contract_monitoring_details_schema);
}

cJSON *smart_contract_monitoring_details_schema_convertToJSON(smart_contract_monitoring_details_schema_t *smart_contract_monitoring_details_schema) {
    cJSON *item = cJSON_CreateObject();

    // smart_contract_monitoring_details_schema->smart_contract_event_details
    if(smart_contract_monitoring_details_schema->smart_contract_event_details) { 
    cJSON *smart_contract_event_details_local_JSON = resource_monitoring_smart_contract_event_details_convertToJSON(smart_contract_monitoring_details_schema->smart_contract_event_details);
    if(smart_contract_event_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "smartContractEventDetails", smart_contract_event_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // smart_contract_monitoring_details_schema->location
    if(smart_contract_monitoring_details_schema->location) { 
    cJSON *location_local_JSON = location_convertToJSON(smart_contract_monitoring_details_schema->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // smart_contract_monitoring_details_schema->smart_contract_event_history
    if(smart_contract_monitoring_details_schema->smart_contract_event_history) { 
    cJSON *smart_contract_event_history = cJSON_AddArrayToObject(item, "smartContractEventHistory");
    if(smart_contract_event_history == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *smart_contract_event_historyListEntry;
    if (smart_contract_monitoring_details_schema->smart_contract_event_history) {
    list_ForEach(smart_contract_event_historyListEntry, smart_contract_monitoring_details_schema->smart_contract_event_history) {
    cJSON *itemLocal = smart_contract_event_history_convertToJSON(smart_contract_event_historyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(smart_contract_event_history, itemLocal);
    }
    }
     } 


    // smart_contract_monitoring_details_schema->type
    if(smart_contract_monitoring_details_schema->type) { 
    if(cJSON_AddStringToObject(item, "type", smart_contract_monitoring_details_schema->type) == NULL) {
    goto fail; //String
    }
     } 


    // smart_contract_monitoring_details_schema->status
    if(smart_contract_monitoring_details_schema->status) { 
    cJSON *status_local_JSON = status_convertToJSON(smart_contract_monitoring_details_schema->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // smart_contract_monitoring_details_schema->timestamp
    if(smart_contract_monitoring_details_schema->timestamp) { 
    if(cJSON_AddStringToObject(item, "timestamp", smart_contract_monitoring_details_schema->timestamp) == NULL) {
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

smart_contract_monitoring_details_schema_t *smart_contract_monitoring_details_schema_parseFromJSON(cJSON *smart_contract_monitoring_details_schemaJSON){

    smart_contract_monitoring_details_schema_t *smart_contract_monitoring_details_schema_local_var = NULL;

    // smart_contract_monitoring_details_schema->smart_contract_event_details
    cJSON *smart_contract_event_details = cJSON_GetObjectItemCaseSensitive(smart_contract_monitoring_details_schemaJSON, "smartContractEventDetails");
    resource_monitoring_smart_contract_event_details_t *smart_contract_event_details_local_nonprim = NULL;
    if (smart_contract_event_details) { 
    smart_contract_event_details_local_nonprim = resource_monitoring_smart_contract_event_details_parseFromJSON(smart_contract_event_details); //nonprimitive
    }

    // smart_contract_monitoring_details_schema->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(smart_contract_monitoring_details_schemaJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // smart_contract_monitoring_details_schema->smart_contract_event_history
    cJSON *smart_contract_event_history = cJSON_GetObjectItemCaseSensitive(smart_contract_monitoring_details_schemaJSON, "smartContractEventHistory");
    list_t *smart_contract_event_historyList;
    if (smart_contract_event_history) { 
    cJSON *smart_contract_event_history_local_nonprimitive;
    if(!cJSON_IsArray(smart_contract_event_history)){
        goto end; //nonprimitive container
    }

    smart_contract_event_historyList = list_create();

    cJSON_ArrayForEach(smart_contract_event_history_local_nonprimitive,smart_contract_event_history )
    {
        if(!cJSON_IsObject(smart_contract_event_history_local_nonprimitive)){
            goto end;
        }
        smart_contract_event_history_t *smart_contract_event_historyItem = smart_contract_event_history_parseFromJSON(smart_contract_event_history_local_nonprimitive);

        list_addElement(smart_contract_event_historyList, smart_contract_event_historyItem);
    }
    }

    // smart_contract_monitoring_details_schema->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(smart_contract_monitoring_details_schemaJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // smart_contract_monitoring_details_schema->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(smart_contract_monitoring_details_schemaJSON, "status");
    status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = status_parseFromJSON(status); //nonprimitive
    }

    // smart_contract_monitoring_details_schema->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(smart_contract_monitoring_details_schemaJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp))
    {
    goto end; //String
    }
    }


    smart_contract_monitoring_details_schema_local_var = smart_contract_monitoring_details_schema_create (
        smart_contract_event_details ? smart_contract_event_details_local_nonprim : NULL,
        location ? location_local_nonprim : NULL,
        smart_contract_event_history ? smart_contract_event_historyList : NULL,
        type ? strdup(type->valuestring) : NULL,
        status ? status_local_nonprim : NULL,
        timestamp ? strdup(timestamp->valuestring) : NULL
        );

    return smart_contract_monitoring_details_schema_local_var;
end:
    if (smart_contract_event_details_local_nonprim) {
        resource_monitoring_smart_contract_event_details_free(smart_contract_event_details_local_nonprim);
        smart_contract_event_details_local_nonprim = NULL;
    }
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
