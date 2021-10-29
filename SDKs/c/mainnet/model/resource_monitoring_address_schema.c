#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "resource_monitoring_address_schema.h"



resource_monitoring_address_schema_t *resource_monitoring_address_schema_create(
    resource_monitoring_address_details_t *address_monitoring_details,
    resource_monitoring_details_t *resource_monitoring
    ) {
    resource_monitoring_address_schema_t *resource_monitoring_address_schema_local_var = malloc(sizeof(resource_monitoring_address_schema_t));
    if (!resource_monitoring_address_schema_local_var) {
        return NULL;
    }
    resource_monitoring_address_schema_local_var->address_monitoring_details = address_monitoring_details;
    resource_monitoring_address_schema_local_var->resource_monitoring = resource_monitoring;

    return resource_monitoring_address_schema_local_var;
}


void resource_monitoring_address_schema_free(resource_monitoring_address_schema_t *resource_monitoring_address_schema) {
    if(NULL == resource_monitoring_address_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (resource_monitoring_address_schema->address_monitoring_details) {
        resource_monitoring_address_details_free(resource_monitoring_address_schema->address_monitoring_details);
        resource_monitoring_address_schema->address_monitoring_details = NULL;
    }
    if (resource_monitoring_address_schema->resource_monitoring) {
        resource_monitoring_details_free(resource_monitoring_address_schema->resource_monitoring);
        resource_monitoring_address_schema->resource_monitoring = NULL;
    }
    free(resource_monitoring_address_schema);
}

cJSON *resource_monitoring_address_schema_convertToJSON(resource_monitoring_address_schema_t *resource_monitoring_address_schema) {
    cJSON *item = cJSON_CreateObject();

    // resource_monitoring_address_schema->address_monitoring_details
    if(resource_monitoring_address_schema->address_monitoring_details) { 
    cJSON *address_monitoring_details_local_JSON = resource_monitoring_address_details_convertToJSON(resource_monitoring_address_schema->address_monitoring_details);
    if(address_monitoring_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "addressMonitoringDetails", address_monitoring_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // resource_monitoring_address_schema->resource_monitoring
    if(resource_monitoring_address_schema->resource_monitoring) { 
    cJSON *resource_monitoring_local_JSON = resource_monitoring_details_convertToJSON(resource_monitoring_address_schema->resource_monitoring);
    if(resource_monitoring_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resourceMonitoring", resource_monitoring_local_JSON);
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

resource_monitoring_address_schema_t *resource_monitoring_address_schema_parseFromJSON(cJSON *resource_monitoring_address_schemaJSON){

    resource_monitoring_address_schema_t *resource_monitoring_address_schema_local_var = NULL;

    // resource_monitoring_address_schema->address_monitoring_details
    cJSON *address_monitoring_details = cJSON_GetObjectItemCaseSensitive(resource_monitoring_address_schemaJSON, "addressMonitoringDetails");
    resource_monitoring_address_details_t *address_monitoring_details_local_nonprim = NULL;
    if (address_monitoring_details) { 
    address_monitoring_details_local_nonprim = resource_monitoring_address_details_parseFromJSON(address_monitoring_details); //nonprimitive
    }

    // resource_monitoring_address_schema->resource_monitoring
    cJSON *resource_monitoring = cJSON_GetObjectItemCaseSensitive(resource_monitoring_address_schemaJSON, "resourceMonitoring");
    resource_monitoring_details_t *resource_monitoring_local_nonprim = NULL;
    if (resource_monitoring) { 
    resource_monitoring_local_nonprim = resource_monitoring_details_parseFromJSON(resource_monitoring); //nonprimitive
    }


    resource_monitoring_address_schema_local_var = resource_monitoring_address_schema_create (
        address_monitoring_details ? address_monitoring_details_local_nonprim : NULL,
        resource_monitoring ? resource_monitoring_local_nonprim : NULL
        );

    return resource_monitoring_address_schema_local_var;
end:
    if (address_monitoring_details_local_nonprim) {
        resource_monitoring_address_details_free(address_monitoring_details_local_nonprim);
        address_monitoring_details_local_nonprim = NULL;
    }
    if (resource_monitoring_local_nonprim) {
        resource_monitoring_details_free(resource_monitoring_local_nonprim);
        resource_monitoring_local_nonprim = NULL;
    }
    return NULL;

}
