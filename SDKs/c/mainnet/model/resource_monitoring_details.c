#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "resource_monitoring_details.h"



resource_monitoring_details_t *resource_monitoring_details_create(
    char *resource_monitoring_id,
    location_t *location,
    char *type,
    char *timestamp,
    status_t *status
    ) {
    resource_monitoring_details_t *resource_monitoring_details_local_var = malloc(sizeof(resource_monitoring_details_t));
    if (!resource_monitoring_details_local_var) {
        return NULL;
    }
    resource_monitoring_details_local_var->resource_monitoring_id = resource_monitoring_id;
    resource_monitoring_details_local_var->location = location;
    resource_monitoring_details_local_var->type = type;
    resource_monitoring_details_local_var->timestamp = timestamp;
    resource_monitoring_details_local_var->status = status;

    return resource_monitoring_details_local_var;
}


void resource_monitoring_details_free(resource_monitoring_details_t *resource_monitoring_details) {
    if(NULL == resource_monitoring_details){
        return ;
    }
    listEntry_t *listEntry;
    if (resource_monitoring_details->resource_monitoring_id) {
        free(resource_monitoring_details->resource_monitoring_id);
        resource_monitoring_details->resource_monitoring_id = NULL;
    }
    if (resource_monitoring_details->location) {
        location_free(resource_monitoring_details->location);
        resource_monitoring_details->location = NULL;
    }
    if (resource_monitoring_details->type) {
        free(resource_monitoring_details->type);
        resource_monitoring_details->type = NULL;
    }
    if (resource_monitoring_details->timestamp) {
        free(resource_monitoring_details->timestamp);
        resource_monitoring_details->timestamp = NULL;
    }
    if (resource_monitoring_details->status) {
        status_free(resource_monitoring_details->status);
        resource_monitoring_details->status = NULL;
    }
    free(resource_monitoring_details);
}

cJSON *resource_monitoring_details_convertToJSON(resource_monitoring_details_t *resource_monitoring_details) {
    cJSON *item = cJSON_CreateObject();

    // resource_monitoring_details->resource_monitoring_id
    if(resource_monitoring_details->resource_monitoring_id) { 
    if(cJSON_AddStringToObject(item, "resourceMonitoringId", resource_monitoring_details->resource_monitoring_id) == NULL) {
    goto fail; //String
    }
     } 


    // resource_monitoring_details->location
    if(resource_monitoring_details->location) { 
    cJSON *location_local_JSON = location_convertToJSON(resource_monitoring_details->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // resource_monitoring_details->type
    if(resource_monitoring_details->type) { 
    if(cJSON_AddStringToObject(item, "type", resource_monitoring_details->type) == NULL) {
    goto fail; //String
    }
     } 


    // resource_monitoring_details->timestamp
    if(resource_monitoring_details->timestamp) { 
    if(cJSON_AddStringToObject(item, "timestamp", resource_monitoring_details->timestamp) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // resource_monitoring_details->status
    if(resource_monitoring_details->status) { 
    cJSON *status_local_JSON = status_convertToJSON(resource_monitoring_details->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
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

resource_monitoring_details_t *resource_monitoring_details_parseFromJSON(cJSON *resource_monitoring_detailsJSON){

    resource_monitoring_details_t *resource_monitoring_details_local_var = NULL;

    // resource_monitoring_details->resource_monitoring_id
    cJSON *resource_monitoring_id = cJSON_GetObjectItemCaseSensitive(resource_monitoring_detailsJSON, "resourceMonitoringId");
    if (resource_monitoring_id) { 
    if(!cJSON_IsString(resource_monitoring_id))
    {
    goto end; //String
    }
    }

    // resource_monitoring_details->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(resource_monitoring_detailsJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // resource_monitoring_details->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(resource_monitoring_detailsJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // resource_monitoring_details->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(resource_monitoring_detailsJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp))
    {
    goto end; //DateTime
    }
    }

    // resource_monitoring_details->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(resource_monitoring_detailsJSON, "status");
    status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = status_parseFromJSON(status); //nonprimitive
    }


    resource_monitoring_details_local_var = resource_monitoring_details_create (
        resource_monitoring_id ? strdup(resource_monitoring_id->valuestring) : NULL,
        location ? location_local_nonprim : NULL,
        type ? strdup(type->valuestring) : NULL,
        timestamp ? strdup(timestamp->valuestring) : NULL,
        status ? status_local_nonprim : NULL
        );

    return resource_monitoring_details_local_var;
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
