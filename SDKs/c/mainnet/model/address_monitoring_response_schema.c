#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "address_monitoring_response_schema.h"



address_monitoring_response_schema_t *address_monitoring_response_schema_create(
    resource_monitoring_subscription_details_t *subscription_details,
    resource_monitoring_details_t *resource_monitoring,
    resource_monitoring_subscription_t *subscription
    ) {
    address_monitoring_response_schema_t *address_monitoring_response_schema_local_var = malloc(sizeof(address_monitoring_response_schema_t));
    if (!address_monitoring_response_schema_local_var) {
        return NULL;
    }
    address_monitoring_response_schema_local_var->subscription_details = subscription_details;
    address_monitoring_response_schema_local_var->resource_monitoring = resource_monitoring;
    address_monitoring_response_schema_local_var->subscription = subscription;

    return address_monitoring_response_schema_local_var;
}


void address_monitoring_response_schema_free(address_monitoring_response_schema_t *address_monitoring_response_schema) {
    if(NULL == address_monitoring_response_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (address_monitoring_response_schema->subscription_details) {
        resource_monitoring_subscription_details_free(address_monitoring_response_schema->subscription_details);
        address_monitoring_response_schema->subscription_details = NULL;
    }
    if (address_monitoring_response_schema->resource_monitoring) {
        resource_monitoring_details_free(address_monitoring_response_schema->resource_monitoring);
        address_monitoring_response_schema->resource_monitoring = NULL;
    }
    if (address_monitoring_response_schema->subscription) {
        resource_monitoring_subscription_free(address_monitoring_response_schema->subscription);
        address_monitoring_response_schema->subscription = NULL;
    }
    free(address_monitoring_response_schema);
}

cJSON *address_monitoring_response_schema_convertToJSON(address_monitoring_response_schema_t *address_monitoring_response_schema) {
    cJSON *item = cJSON_CreateObject();

    // address_monitoring_response_schema->subscription_details
    if(address_monitoring_response_schema->subscription_details) { 
    cJSON *subscription_details_local_JSON = resource_monitoring_subscription_details_convertToJSON(address_monitoring_response_schema->subscription_details);
    if(subscription_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "subscriptionDetails", subscription_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // address_monitoring_response_schema->resource_monitoring
    if(address_monitoring_response_schema->resource_monitoring) { 
    cJSON *resource_monitoring_local_JSON = resource_monitoring_details_convertToJSON(address_monitoring_response_schema->resource_monitoring);
    if(resource_monitoring_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resourceMonitoring", resource_monitoring_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // address_monitoring_response_schema->subscription
    if(address_monitoring_response_schema->subscription) { 
    cJSON *subscription_local_JSON = resource_monitoring_subscription_convertToJSON(address_monitoring_response_schema->subscription);
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

address_monitoring_response_schema_t *address_monitoring_response_schema_parseFromJSON(cJSON *address_monitoring_response_schemaJSON){

    address_monitoring_response_schema_t *address_monitoring_response_schema_local_var = NULL;

    // address_monitoring_response_schema->subscription_details
    cJSON *subscription_details = cJSON_GetObjectItemCaseSensitive(address_monitoring_response_schemaJSON, "subscriptionDetails");
    resource_monitoring_subscription_details_t *subscription_details_local_nonprim = NULL;
    if (subscription_details) { 
    subscription_details_local_nonprim = resource_monitoring_subscription_details_parseFromJSON(subscription_details); //nonprimitive
    }

    // address_monitoring_response_schema->resource_monitoring
    cJSON *resource_monitoring = cJSON_GetObjectItemCaseSensitive(address_monitoring_response_schemaJSON, "resourceMonitoring");
    resource_monitoring_details_t *resource_monitoring_local_nonprim = NULL;
    if (resource_monitoring) { 
    resource_monitoring_local_nonprim = resource_monitoring_details_parseFromJSON(resource_monitoring); //nonprimitive
    }

    // address_monitoring_response_schema->subscription
    cJSON *subscription = cJSON_GetObjectItemCaseSensitive(address_monitoring_response_schemaJSON, "subscription");
    resource_monitoring_subscription_t *subscription_local_nonprim = NULL;
    if (subscription) { 
    subscription_local_nonprim = resource_monitoring_subscription_parseFromJSON(subscription); //nonprimitive
    }


    address_monitoring_response_schema_local_var = address_monitoring_response_schema_create (
        subscription_details ? subscription_details_local_nonprim : NULL,
        resource_monitoring ? resource_monitoring_local_nonprim : NULL,
        subscription ? subscription_local_nonprim : NULL
        );

    return address_monitoring_response_schema_local_var;
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
