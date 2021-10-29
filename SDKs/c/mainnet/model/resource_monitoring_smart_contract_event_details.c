#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "resource_monitoring_smart_contract_event_details.h"



resource_monitoring_smart_contract_event_details_t *resource_monitoring_smart_contract_event_details_create(
    char *event_name,
    char *event_parameters,
    char *smart_contract_id
    ) {
    resource_monitoring_smart_contract_event_details_t *resource_monitoring_smart_contract_event_details_local_var = malloc(sizeof(resource_monitoring_smart_contract_event_details_t));
    if (!resource_monitoring_smart_contract_event_details_local_var) {
        return NULL;
    }
    resource_monitoring_smart_contract_event_details_local_var->event_name = event_name;
    resource_monitoring_smart_contract_event_details_local_var->event_parameters = event_parameters;
    resource_monitoring_smart_contract_event_details_local_var->smart_contract_id = smart_contract_id;

    return resource_monitoring_smart_contract_event_details_local_var;
}


void resource_monitoring_smart_contract_event_details_free(resource_monitoring_smart_contract_event_details_t *resource_monitoring_smart_contract_event_details) {
    if(NULL == resource_monitoring_smart_contract_event_details){
        return ;
    }
    listEntry_t *listEntry;
    if (resource_monitoring_smart_contract_event_details->event_name) {
        free(resource_monitoring_smart_contract_event_details->event_name);
        resource_monitoring_smart_contract_event_details->event_name = NULL;
    }
    if (resource_monitoring_smart_contract_event_details->event_parameters) {
        free(resource_monitoring_smart_contract_event_details->event_parameters);
        resource_monitoring_smart_contract_event_details->event_parameters = NULL;
    }
    if (resource_monitoring_smart_contract_event_details->smart_contract_id) {
        free(resource_monitoring_smart_contract_event_details->smart_contract_id);
        resource_monitoring_smart_contract_event_details->smart_contract_id = NULL;
    }
    free(resource_monitoring_smart_contract_event_details);
}

cJSON *resource_monitoring_smart_contract_event_details_convertToJSON(resource_monitoring_smart_contract_event_details_t *resource_monitoring_smart_contract_event_details) {
    cJSON *item = cJSON_CreateObject();

    // resource_monitoring_smart_contract_event_details->event_name
    if(resource_monitoring_smart_contract_event_details->event_name) { 
    if(cJSON_AddStringToObject(item, "eventName", resource_monitoring_smart_contract_event_details->event_name) == NULL) {
    goto fail; //String
    }
     } 


    // resource_monitoring_smart_contract_event_details->event_parameters
    if(resource_monitoring_smart_contract_event_details->event_parameters) { 
    if(cJSON_AddStringToObject(item, "eventParameters", resource_monitoring_smart_contract_event_details->event_parameters) == NULL) {
    goto fail; //String
    }
     } 


    // resource_monitoring_smart_contract_event_details->smart_contract_id
    if(resource_monitoring_smart_contract_event_details->smart_contract_id) { 
    if(cJSON_AddStringToObject(item, "smartContractId", resource_monitoring_smart_contract_event_details->smart_contract_id) == NULL) {
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

resource_monitoring_smart_contract_event_details_t *resource_monitoring_smart_contract_event_details_parseFromJSON(cJSON *resource_monitoring_smart_contract_event_detailsJSON){

    resource_monitoring_smart_contract_event_details_t *resource_monitoring_smart_contract_event_details_local_var = NULL;

    // resource_monitoring_smart_contract_event_details->event_name
    cJSON *event_name = cJSON_GetObjectItemCaseSensitive(resource_monitoring_smart_contract_event_detailsJSON, "eventName");
    if (event_name) { 
    if(!cJSON_IsString(event_name))
    {
    goto end; //String
    }
    }

    // resource_monitoring_smart_contract_event_details->event_parameters
    cJSON *event_parameters = cJSON_GetObjectItemCaseSensitive(resource_monitoring_smart_contract_event_detailsJSON, "eventParameters");
    if (event_parameters) { 
    if(!cJSON_IsString(event_parameters))
    {
    goto end; //String
    }
    }

    // resource_monitoring_smart_contract_event_details->smart_contract_id
    cJSON *smart_contract_id = cJSON_GetObjectItemCaseSensitive(resource_monitoring_smart_contract_event_detailsJSON, "smartContractId");
    if (smart_contract_id) { 
    if(!cJSON_IsString(smart_contract_id))
    {
    goto end; //String
    }
    }


    resource_monitoring_smart_contract_event_details_local_var = resource_monitoring_smart_contract_event_details_create (
        event_name ? strdup(event_name->valuestring) : NULL,
        event_parameters ? strdup(event_parameters->valuestring) : NULL,
        smart_contract_id ? strdup(smart_contract_id->valuestring) : NULL
        );

    return resource_monitoring_smart_contract_event_details_local_var;
end:
    return NULL;

}
