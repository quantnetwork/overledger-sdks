#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "delete_resource_monitoring_address_schema.h"



delete_resource_monitoring_address_schema_t *delete_resource_monitoring_address_schema_create(
    resource_monitoring_address_details_t *address_monitoring_details,
    resource_monitoring_details_t *resource_monitoring
    ) {
    delete_resource_monitoring_address_schema_t *delete_resource_monitoring_address_schema_local_var = malloc(sizeof(delete_resource_monitoring_address_schema_t));
    if (!delete_resource_monitoring_address_schema_local_var) {
        return NULL;
    }
    delete_resource_monitoring_address_schema_local_var->address_monitoring_details = address_monitoring_details;
    delete_resource_monitoring_address_schema_local_var->resource_monitoring = resource_monitoring;

    return delete_resource_monitoring_address_schema_local_var;
}


void delete_resource_monitoring_address_schema_free(delete_resource_monitoring_address_schema_t *delete_resource_monitoring_address_schema) {
    if(NULL == delete_resource_monitoring_address_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (delete_resource_monitoring_address_schema->address_monitoring_details) {
        resource_monitoring_address_details_free(delete_resource_monitoring_address_schema->address_monitoring_details);
        delete_resource_monitoring_address_schema->address_monitoring_details = NULL;
    }
    if (delete_resource_monitoring_address_schema->resource_monitoring) {
        resource_monitoring_details_free(delete_resource_monitoring_address_schema->resource_monitoring);
        delete_resource_monitoring_address_schema->resource_monitoring = NULL;
    }
    free(delete_resource_monitoring_address_schema);
}

cJSON *delete_resource_monitoring_address_schema_convertToJSON(delete_resource_monitoring_address_schema_t *delete_resource_monitoring_address_schema) {
    cJSON *item = cJSON_CreateObject();

    // delete_resource_monitoring_address_schema->address_monitoring_details
    if(delete_resource_monitoring_address_schema->address_monitoring_details) { 
    cJSON *address_monitoring_details_local_JSON = resource_monitoring_address_details_convertToJSON(delete_resource_monitoring_address_schema->address_monitoring_details);
    if(address_monitoring_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "addressMonitoringDetails", address_monitoring_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // delete_resource_monitoring_address_schema->resource_monitoring
    if(delete_resource_monitoring_address_schema->resource_monitoring) { 
    cJSON *resource_monitoring_local_JSON = resource_monitoring_details_convertToJSON(delete_resource_monitoring_address_schema->resource_monitoring);
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

delete_resource_monitoring_address_schema_t *delete_resource_monitoring_address_schema_parseFromJSON(cJSON *delete_resource_monitoring_address_schemaJSON){

    delete_resource_monitoring_address_schema_t *delete_resource_monitoring_address_schema_local_var = NULL;

    // delete_resource_monitoring_address_schema->address_monitoring_details
    cJSON *address_monitoring_details = cJSON_GetObjectItemCaseSensitive(delete_resource_monitoring_address_schemaJSON, "addressMonitoringDetails");
    resource_monitoring_address_details_t *address_monitoring_details_local_nonprim = NULL;
    if (address_monitoring_details) { 
    address_monitoring_details_local_nonprim = resource_monitoring_address_details_parseFromJSON(address_monitoring_details); //nonprimitive
    }

    // delete_resource_monitoring_address_schema->resource_monitoring
    cJSON *resource_monitoring = cJSON_GetObjectItemCaseSensitive(delete_resource_monitoring_address_schemaJSON, "resourceMonitoring");
    resource_monitoring_details_t *resource_monitoring_local_nonprim = NULL;
    if (resource_monitoring) { 
    resource_monitoring_local_nonprim = resource_monitoring_details_parseFromJSON(resource_monitoring); //nonprimitive
    }


    delete_resource_monitoring_address_schema_local_var = delete_resource_monitoring_address_schema_create (
        address_monitoring_details ? address_monitoring_details_local_nonprim : NULL,
        resource_monitoring ? resource_monitoring_local_nonprim : NULL
        );

    return delete_resource_monitoring_address_schema_local_var;
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
