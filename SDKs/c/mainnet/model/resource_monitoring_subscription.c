#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "resource_monitoring_subscription.h"



resource_monitoring_subscription_t *resource_monitoring_subscription_create(
    char *callback_url,
    char *subscription_id,
    char *type
    ) {
    resource_monitoring_subscription_t *resource_monitoring_subscription_local_var = malloc(sizeof(resource_monitoring_subscription_t));
    if (!resource_monitoring_subscription_local_var) {
        return NULL;
    }
    resource_monitoring_subscription_local_var->callback_url = callback_url;
    resource_monitoring_subscription_local_var->subscription_id = subscription_id;
    resource_monitoring_subscription_local_var->type = type;

    return resource_monitoring_subscription_local_var;
}


void resource_monitoring_subscription_free(resource_monitoring_subscription_t *resource_monitoring_subscription) {
    if(NULL == resource_monitoring_subscription){
        return ;
    }
    listEntry_t *listEntry;
    if (resource_monitoring_subscription->callback_url) {
        free(resource_monitoring_subscription->callback_url);
        resource_monitoring_subscription->callback_url = NULL;
    }
    if (resource_monitoring_subscription->subscription_id) {
        free(resource_monitoring_subscription->subscription_id);
        resource_monitoring_subscription->subscription_id = NULL;
    }
    if (resource_monitoring_subscription->type) {
        free(resource_monitoring_subscription->type);
        resource_monitoring_subscription->type = NULL;
    }
    free(resource_monitoring_subscription);
}

cJSON *resource_monitoring_subscription_convertToJSON(resource_monitoring_subscription_t *resource_monitoring_subscription) {
    cJSON *item = cJSON_CreateObject();

    // resource_monitoring_subscription->callback_url
    if(resource_monitoring_subscription->callback_url) { 
    if(cJSON_AddStringToObject(item, "callbackUrl", resource_monitoring_subscription->callback_url) == NULL) {
    goto fail; //String
    }
     } 


    // resource_monitoring_subscription->subscription_id
    if(resource_monitoring_subscription->subscription_id) { 
    if(cJSON_AddStringToObject(item, "subscriptionId", resource_monitoring_subscription->subscription_id) == NULL) {
    goto fail; //String
    }
     } 


    // resource_monitoring_subscription->type
    if(resource_monitoring_subscription->type) { 
    if(cJSON_AddStringToObject(item, "type", resource_monitoring_subscription->type) == NULL) {
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

resource_monitoring_subscription_t *resource_monitoring_subscription_parseFromJSON(cJSON *resource_monitoring_subscriptionJSON){

    resource_monitoring_subscription_t *resource_monitoring_subscription_local_var = NULL;

    // resource_monitoring_subscription->callback_url
    cJSON *callback_url = cJSON_GetObjectItemCaseSensitive(resource_monitoring_subscriptionJSON, "callbackUrl");
    if (callback_url) { 
    if(!cJSON_IsString(callback_url))
    {
    goto end; //String
    }
    }

    // resource_monitoring_subscription->subscription_id
    cJSON *subscription_id = cJSON_GetObjectItemCaseSensitive(resource_monitoring_subscriptionJSON, "subscriptionId");
    if (subscription_id) { 
    if(!cJSON_IsString(subscription_id))
    {
    goto end; //String
    }
    }

    // resource_monitoring_subscription->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(resource_monitoring_subscriptionJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }


    resource_monitoring_subscription_local_var = resource_monitoring_subscription_create (
        callback_url ? strdup(callback_url->valuestring) : NULL,
        subscription_id ? strdup(subscription_id->valuestring) : NULL,
        type ? strdup(type->valuestring) : NULL
        );

    return resource_monitoring_subscription_local_var;
end:
    return NULL;

}
