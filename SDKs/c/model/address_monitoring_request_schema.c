#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "address_monitoring_request_schema.h"



address_monitoring_request_schema_t *address_monitoring_request_schema_create(
    char *call_back_url,
    location_t *location,
    char *address_id
    ) {
    address_monitoring_request_schema_t *address_monitoring_request_schema_local_var = malloc(sizeof(address_monitoring_request_schema_t));
    if (!address_monitoring_request_schema_local_var) {
        return NULL;
    }
    address_monitoring_request_schema_local_var->call_back_url = call_back_url;
    address_monitoring_request_schema_local_var->location = location;
    address_monitoring_request_schema_local_var->address_id = address_id;

    return address_monitoring_request_schema_local_var;
}


void address_monitoring_request_schema_free(address_monitoring_request_schema_t *address_monitoring_request_schema) {
    if(NULL == address_monitoring_request_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (address_monitoring_request_schema->call_back_url) {
        free(address_monitoring_request_schema->call_back_url);
        address_monitoring_request_schema->call_back_url = NULL;
    }
    if (address_monitoring_request_schema->location) {
        location_free(address_monitoring_request_schema->location);
        address_monitoring_request_schema->location = NULL;
    }
    if (address_monitoring_request_schema->address_id) {
        free(address_monitoring_request_schema->address_id);
        address_monitoring_request_schema->address_id = NULL;
    }
    free(address_monitoring_request_schema);
}

cJSON *address_monitoring_request_schema_convertToJSON(address_monitoring_request_schema_t *address_monitoring_request_schema) {
    cJSON *item = cJSON_CreateObject();

    // address_monitoring_request_schema->call_back_url
    if(address_monitoring_request_schema->call_back_url) { 
    if(cJSON_AddStringToObject(item, "callBackURL", address_monitoring_request_schema->call_back_url) == NULL) {
    goto fail; //String
    }
     } 


    // address_monitoring_request_schema->location
    if(address_monitoring_request_schema->location) { 
    cJSON *location_local_JSON = location_convertToJSON(address_monitoring_request_schema->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // address_monitoring_request_schema->address_id
    if(address_monitoring_request_schema->address_id) { 
    if(cJSON_AddStringToObject(item, "addressId", address_monitoring_request_schema->address_id) == NULL) {
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

address_monitoring_request_schema_t *address_monitoring_request_schema_parseFromJSON(cJSON *address_monitoring_request_schemaJSON){

    address_monitoring_request_schema_t *address_monitoring_request_schema_local_var = NULL;

    // address_monitoring_request_schema->call_back_url
    cJSON *call_back_url = cJSON_GetObjectItemCaseSensitive(address_monitoring_request_schemaJSON, "callBackURL");
    if (call_back_url) { 
    if(!cJSON_IsString(call_back_url))
    {
    goto end; //String
    }
    }

    // address_monitoring_request_schema->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(address_monitoring_request_schemaJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // address_monitoring_request_schema->address_id
    cJSON *address_id = cJSON_GetObjectItemCaseSensitive(address_monitoring_request_schemaJSON, "addressId");
    if (address_id) { 
    if(!cJSON_IsString(address_id))
    {
    goto end; //String
    }
    }


    address_monitoring_request_schema_local_var = address_monitoring_request_schema_create (
        call_back_url ? strdup(call_back_url->valuestring) : NULL,
        location ? location_local_nonprim : NULL,
        address_id ? strdup(address_id->valuestring) : NULL
        );

    return address_monitoring_request_schema_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
