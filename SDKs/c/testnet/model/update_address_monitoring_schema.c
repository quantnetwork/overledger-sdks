#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "update_address_monitoring_schema.h"



update_address_monitoring_schema_t *update_address_monitoring_schema_create(
    resource_monitoring_address_details_t *address_monitoring_details,
    resource_monitoring_details_t *resource_monitoring
    ) {
    update_address_monitoring_schema_t *update_address_monitoring_schema_local_var = malloc(sizeof(update_address_monitoring_schema_t));
    if (!update_address_monitoring_schema_local_var) {
        return NULL;
    }
    update_address_monitoring_schema_local_var->address_monitoring_details = address_monitoring_details;
    update_address_monitoring_schema_local_var->resource_monitoring = resource_monitoring;

    return update_address_monitoring_schema_local_var;
}


void update_address_monitoring_schema_free(update_address_monitoring_schema_t *update_address_monitoring_schema) {
    if(NULL == update_address_monitoring_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (update_address_monitoring_schema->address_monitoring_details) {
        resource_monitoring_address_details_free(update_address_monitoring_schema->address_monitoring_details);
        update_address_monitoring_schema->address_monitoring_details = NULL;
    }
    if (update_address_monitoring_schema->resource_monitoring) {
        resource_monitoring_details_free(update_address_monitoring_schema->resource_monitoring);
        update_address_monitoring_schema->resource_monitoring = NULL;
    }
    free(update_address_monitoring_schema);
}

cJSON *update_address_monitoring_schema_convertToJSON(update_address_monitoring_schema_t *update_address_monitoring_schema) {
    cJSON *item = cJSON_CreateObject();

    // update_address_monitoring_schema->address_monitoring_details
    if(update_address_monitoring_schema->address_monitoring_details) { 
    cJSON *address_monitoring_details_local_JSON = resource_monitoring_address_details_convertToJSON(update_address_monitoring_schema->address_monitoring_details);
    if(address_monitoring_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "addressMonitoringDetails", address_monitoring_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // update_address_monitoring_schema->resource_monitoring
    if(update_address_monitoring_schema->resource_monitoring) { 
    cJSON *resource_monitoring_local_JSON = resource_monitoring_details_convertToJSON(update_address_monitoring_schema->resource_monitoring);
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

update_address_monitoring_schema_t *update_address_monitoring_schema_parseFromJSON(cJSON *update_address_monitoring_schemaJSON){

    update_address_monitoring_schema_t *update_address_monitoring_schema_local_var = NULL;

    // update_address_monitoring_schema->address_monitoring_details
    cJSON *address_monitoring_details = cJSON_GetObjectItemCaseSensitive(update_address_monitoring_schemaJSON, "addressMonitoringDetails");
    resource_monitoring_address_details_t *address_monitoring_details_local_nonprim = NULL;
    if (address_monitoring_details) { 
    address_monitoring_details_local_nonprim = resource_monitoring_address_details_parseFromJSON(address_monitoring_details); //nonprimitive
    }

    // update_address_monitoring_schema->resource_monitoring
    cJSON *resource_monitoring = cJSON_GetObjectItemCaseSensitive(update_address_monitoring_schemaJSON, "resourceMonitoring");
    resource_monitoring_details_t *resource_monitoring_local_nonprim = NULL;
    if (resource_monitoring) { 
    resource_monitoring_local_nonprim = resource_monitoring_details_parseFromJSON(resource_monitoring); //nonprimitive
    }


    update_address_monitoring_schema_local_var = update_address_monitoring_schema_create (
        address_monitoring_details ? address_monitoring_details_local_nonprim : NULL,
        resource_monitoring ? resource_monitoring_local_nonprim : NULL
        );

    return update_address_monitoring_schema_local_var;
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
