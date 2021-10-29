#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "smart_contract_monitoring_schema.h"



smart_contract_monitoring_schema_t *smart_contract_monitoring_schema_create(
    resource_monitoring_smart_contract_event_details_t *smart_contract_event_monitoring_details,
    resource_monitoring_details_t *resource_monitoring
    ) {
    smart_contract_monitoring_schema_t *smart_contract_monitoring_schema_local_var = malloc(sizeof(smart_contract_monitoring_schema_t));
    if (!smart_contract_monitoring_schema_local_var) {
        return NULL;
    }
    smart_contract_monitoring_schema_local_var->smart_contract_event_monitoring_details = smart_contract_event_monitoring_details;
    smart_contract_monitoring_schema_local_var->resource_monitoring = resource_monitoring;

    return smart_contract_monitoring_schema_local_var;
}


void smart_contract_monitoring_schema_free(smart_contract_monitoring_schema_t *smart_contract_monitoring_schema) {
    if(NULL == smart_contract_monitoring_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (smart_contract_monitoring_schema->smart_contract_event_monitoring_details) {
        resource_monitoring_smart_contract_event_details_free(smart_contract_monitoring_schema->smart_contract_event_monitoring_details);
        smart_contract_monitoring_schema->smart_contract_event_monitoring_details = NULL;
    }
    if (smart_contract_monitoring_schema->resource_monitoring) {
        resource_monitoring_details_free(smart_contract_monitoring_schema->resource_monitoring);
        smart_contract_monitoring_schema->resource_monitoring = NULL;
    }
    free(smart_contract_monitoring_schema);
}

cJSON *smart_contract_monitoring_schema_convertToJSON(smart_contract_monitoring_schema_t *smart_contract_monitoring_schema) {
    cJSON *item = cJSON_CreateObject();

    // smart_contract_monitoring_schema->smart_contract_event_monitoring_details
    if(smart_contract_monitoring_schema->smart_contract_event_monitoring_details) { 
    cJSON *smart_contract_event_monitoring_details_local_JSON = resource_monitoring_smart_contract_event_details_convertToJSON(smart_contract_monitoring_schema->smart_contract_event_monitoring_details);
    if(smart_contract_event_monitoring_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "smartContractEventMonitoringDetails", smart_contract_event_monitoring_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // smart_contract_monitoring_schema->resource_monitoring
    if(smart_contract_monitoring_schema->resource_monitoring) { 
    cJSON *resource_monitoring_local_JSON = resource_monitoring_details_convertToJSON(smart_contract_monitoring_schema->resource_monitoring);
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

smart_contract_monitoring_schema_t *smart_contract_monitoring_schema_parseFromJSON(cJSON *smart_contract_monitoring_schemaJSON){

    smart_contract_monitoring_schema_t *smart_contract_monitoring_schema_local_var = NULL;

    // smart_contract_monitoring_schema->smart_contract_event_monitoring_details
    cJSON *smart_contract_event_monitoring_details = cJSON_GetObjectItemCaseSensitive(smart_contract_monitoring_schemaJSON, "smartContractEventMonitoringDetails");
    resource_monitoring_smart_contract_event_details_t *smart_contract_event_monitoring_details_local_nonprim = NULL;
    if (smart_contract_event_monitoring_details) { 
    smart_contract_event_monitoring_details_local_nonprim = resource_monitoring_smart_contract_event_details_parseFromJSON(smart_contract_event_monitoring_details); //nonprimitive
    }

    // smart_contract_monitoring_schema->resource_monitoring
    cJSON *resource_monitoring = cJSON_GetObjectItemCaseSensitive(smart_contract_monitoring_schemaJSON, "resourceMonitoring");
    resource_monitoring_details_t *resource_monitoring_local_nonprim = NULL;
    if (resource_monitoring) { 
    resource_monitoring_local_nonprim = resource_monitoring_details_parseFromJSON(resource_monitoring); //nonprimitive
    }


    smart_contract_monitoring_schema_local_var = smart_contract_monitoring_schema_create (
        smart_contract_event_monitoring_details ? smart_contract_event_monitoring_details_local_nonprim : NULL,
        resource_monitoring ? resource_monitoring_local_nonprim : NULL
        );

    return smart_contract_monitoring_schema_local_var;
end:
    if (smart_contract_event_monitoring_details_local_nonprim) {
        resource_monitoring_smart_contract_event_details_free(smart_contract_event_monitoring_details_local_nonprim);
        smart_contract_event_monitoring_details_local_nonprim = NULL;
    }
    if (resource_monitoring_local_nonprim) {
        resource_monitoring_details_free(resource_monitoring_local_nonprim);
        resource_monitoring_local_nonprim = NULL;
    }
    return NULL;

}
