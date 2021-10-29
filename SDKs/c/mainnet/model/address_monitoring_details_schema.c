#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "address_monitoring_details_schema.h"



address_monitoring_details_schema_t *address_monitoring_details_schema_create(
    location_t *location,
    resource_monitored_address_details_t *address_details,
    char *type,
    char *timestamp
    ) {
    address_monitoring_details_schema_t *address_monitoring_details_schema_local_var = malloc(sizeof(address_monitoring_details_schema_t));
    if (!address_monitoring_details_schema_local_var) {
        return NULL;
    }
    address_monitoring_details_schema_local_var->location = location;
    address_monitoring_details_schema_local_var->address_details = address_details;
    address_monitoring_details_schema_local_var->type = type;
    address_monitoring_details_schema_local_var->timestamp = timestamp;

    return address_monitoring_details_schema_local_var;
}


void address_monitoring_details_schema_free(address_monitoring_details_schema_t *address_monitoring_details_schema) {
    if(NULL == address_monitoring_details_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (address_monitoring_details_schema->location) {
        location_free(address_monitoring_details_schema->location);
        address_monitoring_details_schema->location = NULL;
    }
    if (address_monitoring_details_schema->address_details) {
        resource_monitored_address_details_free(address_monitoring_details_schema->address_details);
        address_monitoring_details_schema->address_details = NULL;
    }
    if (address_monitoring_details_schema->type) {
        free(address_monitoring_details_schema->type);
        address_monitoring_details_schema->type = NULL;
    }
    if (address_monitoring_details_schema->timestamp) {
        free(address_monitoring_details_schema->timestamp);
        address_monitoring_details_schema->timestamp = NULL;
    }
    free(address_monitoring_details_schema);
}

cJSON *address_monitoring_details_schema_convertToJSON(address_monitoring_details_schema_t *address_monitoring_details_schema) {
    cJSON *item = cJSON_CreateObject();

    // address_monitoring_details_schema->location
    if(address_monitoring_details_schema->location) { 
    cJSON *location_local_JSON = location_convertToJSON(address_monitoring_details_schema->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // address_monitoring_details_schema->address_details
    if(address_monitoring_details_schema->address_details) { 
    cJSON *address_details_local_JSON = resource_monitored_address_details_convertToJSON(address_monitoring_details_schema->address_details);
    if(address_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "addressDetails", address_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // address_monitoring_details_schema->type
    if(address_monitoring_details_schema->type) { 
    if(cJSON_AddStringToObject(item, "type", address_monitoring_details_schema->type) == NULL) {
    goto fail; //String
    }
     } 


    // address_monitoring_details_schema->timestamp
    if(address_monitoring_details_schema->timestamp) { 
    if(cJSON_AddStringToObject(item, "timestamp", address_monitoring_details_schema->timestamp) == NULL) {
    goto fail; //Date-Time
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

address_monitoring_details_schema_t *address_monitoring_details_schema_parseFromJSON(cJSON *address_monitoring_details_schemaJSON){

    address_monitoring_details_schema_t *address_monitoring_details_schema_local_var = NULL;

    // address_monitoring_details_schema->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(address_monitoring_details_schemaJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // address_monitoring_details_schema->address_details
    cJSON *address_details = cJSON_GetObjectItemCaseSensitive(address_monitoring_details_schemaJSON, "addressDetails");
    resource_monitored_address_details_t *address_details_local_nonprim = NULL;
    if (address_details) { 
    address_details_local_nonprim = resource_monitored_address_details_parseFromJSON(address_details); //nonprimitive
    }

    // address_monitoring_details_schema->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(address_monitoring_details_schemaJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // address_monitoring_details_schema->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(address_monitoring_details_schemaJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp))
    {
    goto end; //DateTime
    }
    }


    address_monitoring_details_schema_local_var = address_monitoring_details_schema_create (
        location ? location_local_nonprim : NULL,
        address_details ? address_details_local_nonprim : NULL,
        type ? strdup(type->valuestring) : NULL,
        timestamp ? strdup(timestamp->valuestring) : NULL
        );

    return address_monitoring_details_schema_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    if (address_details_local_nonprim) {
        resource_monitored_address_details_free(address_details_local_nonprim);
        address_details_local_nonprim = NULL;
    }
    return NULL;

}
