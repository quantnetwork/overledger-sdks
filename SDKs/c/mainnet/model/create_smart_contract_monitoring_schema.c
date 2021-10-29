#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "create_smart_contract_monitoring_schema.h"



create_smart_contract_monitoring_schema_t *create_smart_contract_monitoring_schema_create(
    resource_monitoring_subscription_details_t *subscription_details,
    resource_monitoring_details_t *resource_monitoring,
    resource_monitoring_subscription_t *subscription
    ) {
    create_smart_contract_monitoring_schema_t *create_smart_contract_monitoring_schema_local_var = malloc(sizeof(create_smart_contract_monitoring_schema_t));
    if (!create_smart_contract_monitoring_schema_local_var) {
        return NULL;
    }
    create_smart_contract_monitoring_schema_local_var->subscription_details = subscription_details;
    create_smart_contract_monitoring_schema_local_var->resource_monitoring = resource_monitoring;
    create_smart_contract_monitoring_schema_local_var->subscription = subscription;

    return create_smart_contract_monitoring_schema_local_var;
}


void create_smart_contract_monitoring_schema_free(create_smart_contract_monitoring_schema_t *create_smart_contract_monitoring_schema) {
    if(NULL == create_smart_contract_monitoring_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (create_smart_contract_monitoring_schema->subscription_details) {
        resource_monitoring_subscription_details_free(create_smart_contract_monitoring_schema->subscription_details);
        create_smart_contract_monitoring_schema->subscription_details = NULL;
    }
    if (create_smart_contract_monitoring_schema->resource_monitoring) {
        resource_monitoring_details_free(create_smart_contract_monitoring_schema->resource_monitoring);
        create_smart_contract_monitoring_schema->resource_monitoring = NULL;
    }
    if (create_smart_contract_monitoring_schema->subscription) {
        resource_monitoring_subscription_free(create_smart_contract_monitoring_schema->subscription);
        create_smart_contract_monitoring_schema->subscription = NULL;
    }
    free(create_smart_contract_monitoring_schema);
}

cJSON *create_smart_contract_monitoring_schema_convertToJSON(create_smart_contract_monitoring_schema_t *create_smart_contract_monitoring_schema) {
    cJSON *item = cJSON_CreateObject();

    // create_smart_contract_monitoring_schema->subscription_details
    if(create_smart_contract_monitoring_schema->subscription_details) { 
    cJSON *subscription_details_local_JSON = resource_monitoring_subscription_details_convertToJSON(create_smart_contract_monitoring_schema->subscription_details);
    if(subscription_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "subscriptionDetails", subscription_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // create_smart_contract_monitoring_schema->resource_monitoring
    if(create_smart_contract_monitoring_schema->resource_monitoring) { 
    cJSON *resource_monitoring_local_JSON = resource_monitoring_details_convertToJSON(create_smart_contract_monitoring_schema->resource_monitoring);
    if(resource_monitoring_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resourceMonitoring", resource_monitoring_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // create_smart_contract_monitoring_schema->subscription
    if(create_smart_contract_monitoring_schema->subscription) { 
    cJSON *subscription_local_JSON = resource_monitoring_subscription_convertToJSON(create_smart_contract_monitoring_schema->subscription);
    if(subscription_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "subscription", subscription_local_JSON);
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

create_smart_contract_monitoring_schema_t *create_smart_contract_monitoring_schema_parseFromJSON(cJSON *create_smart_contract_monitoring_schemaJSON){

    create_smart_contract_monitoring_schema_t *create_smart_contract_monitoring_schema_local_var = NULL;

    // create_smart_contract_monitoring_schema->subscription_details
    cJSON *subscription_details = cJSON_GetObjectItemCaseSensitive(create_smart_contract_monitoring_schemaJSON, "subscriptionDetails");
    resource_monitoring_subscription_details_t *subscription_details_local_nonprim = NULL;
    if (subscription_details) { 
    subscription_details_local_nonprim = resource_monitoring_subscription_details_parseFromJSON(subscription_details); //nonprimitive
    }

    // create_smart_contract_monitoring_schema->resource_monitoring
    cJSON *resource_monitoring = cJSON_GetObjectItemCaseSensitive(create_smart_contract_monitoring_schemaJSON, "resourceMonitoring");
    resource_monitoring_details_t *resource_monitoring_local_nonprim = NULL;
    if (resource_monitoring) { 
    resource_monitoring_local_nonprim = resource_monitoring_details_parseFromJSON(resource_monitoring); //nonprimitive
    }

    // create_smart_contract_monitoring_schema->subscription
    cJSON *subscription = cJSON_GetObjectItemCaseSensitive(create_smart_contract_monitoring_schemaJSON, "subscription");
    resource_monitoring_subscription_t *subscription_local_nonprim = NULL;
    if (subscription) { 
    subscription_local_nonprim = resource_monitoring_subscription_parseFromJSON(subscription); //nonprimitive
    }


    create_smart_contract_monitoring_schema_local_var = create_smart_contract_monitoring_schema_create (
        subscription_details ? subscription_details_local_nonprim : NULL,
        resource_monitoring ? resource_monitoring_local_nonprim : NULL,
        subscription ? subscription_local_nonprim : NULL
        );

    return create_smart_contract_monitoring_schema_local_var;
end:
    if (subscription_details_local_nonprim) {
        resource_monitoring_subscription_details_free(subscription_details_local_nonprim);
        subscription_details_local_nonprim = NULL;
    }
    if (resource_monitoring_local_nonprim) {
        resource_monitoring_details_free(resource_monitoring_local_nonprim);
        resource_monitoring_local_nonprim = NULL;
    }
    if (subscription_local_nonprim) {
        resource_monitoring_subscription_free(subscription_local_nonprim);
        subscription_local_nonprim = NULL;
    }
    return NULL;

}
