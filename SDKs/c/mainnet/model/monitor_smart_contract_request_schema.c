#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monitor_smart_contract_request_schema.h"



monitor_smart_contract_request_schema_t *monitor_smart_contract_request_schema_create(
    list_t *event_params,
    char *event_name,
    location_t *location,
    char *call_back_url,
    char *smart_contract_id
    ) {
    monitor_smart_contract_request_schema_t *monitor_smart_contract_request_schema_local_var = malloc(sizeof(monitor_smart_contract_request_schema_t));
    if (!monitor_smart_contract_request_schema_local_var) {
        return NULL;
    }
    monitor_smart_contract_request_schema_local_var->event_params = event_params;
    monitor_smart_contract_request_schema_local_var->event_name = event_name;
    monitor_smart_contract_request_schema_local_var->location = location;
    monitor_smart_contract_request_schema_local_var->call_back_url = call_back_url;
    monitor_smart_contract_request_schema_local_var->smart_contract_id = smart_contract_id;

    return monitor_smart_contract_request_schema_local_var;
}


void monitor_smart_contract_request_schema_free(monitor_smart_contract_request_schema_t *monitor_smart_contract_request_schema) {
    if(NULL == monitor_smart_contract_request_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (monitor_smart_contract_request_schema->event_params) {
        list_ForEach(listEntry, monitor_smart_contract_request_schema->event_params) {
            monitor_smart_contract_event_param_free(listEntry->data);
        }
        list_free(monitor_smart_contract_request_schema->event_params);
        monitor_smart_contract_request_schema->event_params = NULL;
    }
    if (monitor_smart_contract_request_schema->event_name) {
        free(monitor_smart_contract_request_schema->event_name);
        monitor_smart_contract_request_schema->event_name = NULL;
    }
    if (monitor_smart_contract_request_schema->location) {
        location_free(monitor_smart_contract_request_schema->location);
        monitor_smart_contract_request_schema->location = NULL;
    }
    if (monitor_smart_contract_request_schema->call_back_url) {
        free(monitor_smart_contract_request_schema->call_back_url);
        monitor_smart_contract_request_schema->call_back_url = NULL;
    }
    if (monitor_smart_contract_request_schema->smart_contract_id) {
        free(monitor_smart_contract_request_schema->smart_contract_id);
        monitor_smart_contract_request_schema->smart_contract_id = NULL;
    }
    free(monitor_smart_contract_request_schema);
}

cJSON *monitor_smart_contract_request_schema_convertToJSON(monitor_smart_contract_request_schema_t *monitor_smart_contract_request_schema) {
    cJSON *item = cJSON_CreateObject();

    // monitor_smart_contract_request_schema->event_params
    if(monitor_smart_contract_request_schema->event_params) { 
    cJSON *event_params = cJSON_AddArrayToObject(item, "eventParams");
    if(event_params == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *event_paramsListEntry;
    if (monitor_smart_contract_request_schema->event_params) {
    list_ForEach(event_paramsListEntry, monitor_smart_contract_request_schema->event_params) {
    cJSON *itemLocal = monitor_smart_contract_event_param_convertToJSON(event_paramsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(event_params, itemLocal);
    }
    }
     } 


    // monitor_smart_contract_request_schema->event_name
    if(monitor_smart_contract_request_schema->event_name) { 
    if(cJSON_AddStringToObject(item, "eventName", monitor_smart_contract_request_schema->event_name) == NULL) {
    goto fail; //String
    }
     } 


    // monitor_smart_contract_request_schema->location
    if(monitor_smart_contract_request_schema->location) { 
    cJSON *location_local_JSON = location_convertToJSON(monitor_smart_contract_request_schema->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // monitor_smart_contract_request_schema->call_back_url
    if(monitor_smart_contract_request_schema->call_back_url) { 
    if(cJSON_AddStringToObject(item, "callBackURL", monitor_smart_contract_request_schema->call_back_url) == NULL) {
    goto fail; //String
    }
     } 


    // monitor_smart_contract_request_schema->smart_contract_id
    if(monitor_smart_contract_request_schema->smart_contract_id) { 
    if(cJSON_AddStringToObject(item, "smartContractId", monitor_smart_contract_request_schema->smart_contract_id) == NULL) {
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

monitor_smart_contract_request_schema_t *monitor_smart_contract_request_schema_parseFromJSON(cJSON *monitor_smart_contract_request_schemaJSON){

    monitor_smart_contract_request_schema_t *monitor_smart_contract_request_schema_local_var = NULL;

    // monitor_smart_contract_request_schema->event_params
    cJSON *event_params = cJSON_GetObjectItemCaseSensitive(monitor_smart_contract_request_schemaJSON, "eventParams");
    list_t *event_paramsList;
    if (event_params) { 
    cJSON *event_params_local_nonprimitive;
    if(!cJSON_IsArray(event_params)){
        goto end; //nonprimitive container
    }

    event_paramsList = list_create();

    cJSON_ArrayForEach(event_params_local_nonprimitive,event_params )
    {
        if(!cJSON_IsObject(event_params_local_nonprimitive)){
            goto end;
        }
        monitor_smart_contract_event_param_t *event_paramsItem = monitor_smart_contract_event_param_parseFromJSON(event_params_local_nonprimitive);

        list_addElement(event_paramsList, event_paramsItem);
    }
    }

    // monitor_smart_contract_request_schema->event_name
    cJSON *event_name = cJSON_GetObjectItemCaseSensitive(monitor_smart_contract_request_schemaJSON, "eventName");
    if (event_name) { 
    if(!cJSON_IsString(event_name))
    {
    goto end; //String
    }
    }

    // monitor_smart_contract_request_schema->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(monitor_smart_contract_request_schemaJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // monitor_smart_contract_request_schema->call_back_url
    cJSON *call_back_url = cJSON_GetObjectItemCaseSensitive(monitor_smart_contract_request_schemaJSON, "callBackURL");
    if (call_back_url) { 
    if(!cJSON_IsString(call_back_url))
    {
    goto end; //String
    }
    }

    // monitor_smart_contract_request_schema->smart_contract_id
    cJSON *smart_contract_id = cJSON_GetObjectItemCaseSensitive(monitor_smart_contract_request_schemaJSON, "smartContractId");
    if (smart_contract_id) { 
    if(!cJSON_IsString(smart_contract_id))
    {
    goto end; //String
    }
    }


    monitor_smart_contract_request_schema_local_var = monitor_smart_contract_request_schema_create (
        event_params ? event_paramsList : NULL,
        event_name ? strdup(event_name->valuestring) : NULL,
        location ? location_local_nonprim : NULL,
        call_back_url ? strdup(call_back_url->valuestring) : NULL,
        smart_contract_id ? strdup(smart_contract_id->valuestring) : NULL
        );

    return monitor_smart_contract_request_schema_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
