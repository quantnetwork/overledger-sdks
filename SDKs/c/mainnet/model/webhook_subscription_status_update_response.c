#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_subscription_status_update_response.h"



webhook_subscription_status_update_response_t *webhook_subscription_status_update_response_create(
    webhook_subscription_details_t *subscription_details,
    char *callback_url,
    char *subscription_id,
    char *type
    ) {
    webhook_subscription_status_update_response_t *webhook_subscription_status_update_response_local_var = malloc(sizeof(webhook_subscription_status_update_response_t));
    if (!webhook_subscription_status_update_response_local_var) {
        return NULL;
    }
    webhook_subscription_status_update_response_local_var->subscription_details = subscription_details;
    webhook_subscription_status_update_response_local_var->callback_url = callback_url;
    webhook_subscription_status_update_response_local_var->subscription_id = subscription_id;
    webhook_subscription_status_update_response_local_var->type = type;

    return webhook_subscription_status_update_response_local_var;
}


void webhook_subscription_status_update_response_free(webhook_subscription_status_update_response_t *webhook_subscription_status_update_response) {
    if(NULL == webhook_subscription_status_update_response){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_subscription_status_update_response->subscription_details) {
        webhook_subscription_details_free(webhook_subscription_status_update_response->subscription_details);
        webhook_subscription_status_update_response->subscription_details = NULL;
    }
    if (webhook_subscription_status_update_response->callback_url) {
        free(webhook_subscription_status_update_response->callback_url);
        webhook_subscription_status_update_response->callback_url = NULL;
    }
    if (webhook_subscription_status_update_response->subscription_id) {
        free(webhook_subscription_status_update_response->subscription_id);
        webhook_subscription_status_update_response->subscription_id = NULL;
    }
    if (webhook_subscription_status_update_response->type) {
        free(webhook_subscription_status_update_response->type);
        webhook_subscription_status_update_response->type = NULL;
    }
    free(webhook_subscription_status_update_response);
}

cJSON *webhook_subscription_status_update_response_convertToJSON(webhook_subscription_status_update_response_t *webhook_subscription_status_update_response) {
    cJSON *item = cJSON_CreateObject();

    // webhook_subscription_status_update_response->subscription_details
    if(webhook_subscription_status_update_response->subscription_details) { 
    cJSON *subscription_details_local_JSON = webhook_subscription_details_convertToJSON(webhook_subscription_status_update_response->subscription_details);
    if(subscription_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "subscriptionDetails", subscription_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // webhook_subscription_status_update_response->callback_url
    if(webhook_subscription_status_update_response->callback_url) { 
    if(cJSON_AddStringToObject(item, "callbackUrl", webhook_subscription_status_update_response->callback_url) == NULL) {
    goto fail; //String
    }
     } 


    // webhook_subscription_status_update_response->subscription_id
    if(webhook_subscription_status_update_response->subscription_id) { 
    if(cJSON_AddStringToObject(item, "subscriptionId", webhook_subscription_status_update_response->subscription_id) == NULL) {
    goto fail; //String
    }
     } 


    // webhook_subscription_status_update_response->type
    if(webhook_subscription_status_update_response->type) { 
    if(cJSON_AddStringToObject(item, "type", webhook_subscription_status_update_response->type) == NULL) {
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

webhook_subscription_status_update_response_t *webhook_subscription_status_update_response_parseFromJSON(cJSON *webhook_subscription_status_update_responseJSON){

    webhook_subscription_status_update_response_t *webhook_subscription_status_update_response_local_var = NULL;

    // webhook_subscription_status_update_response->subscription_details
    cJSON *subscription_details = cJSON_GetObjectItemCaseSensitive(webhook_subscription_status_update_responseJSON, "subscriptionDetails");
    webhook_subscription_details_t *subscription_details_local_nonprim = NULL;
    if (subscription_details) { 
    subscription_details_local_nonprim = webhook_subscription_details_parseFromJSON(subscription_details); //nonprimitive
    }

    // webhook_subscription_status_update_response->callback_url
    cJSON *callback_url = cJSON_GetObjectItemCaseSensitive(webhook_subscription_status_update_responseJSON, "callbackUrl");
    if (callback_url) { 
    if(!cJSON_IsString(callback_url))
    {
    goto end; //String
    }
    }

    // webhook_subscription_status_update_response->subscription_id
    cJSON *subscription_id = cJSON_GetObjectItemCaseSensitive(webhook_subscription_status_update_responseJSON, "subscriptionId");
    if (subscription_id) { 
    if(!cJSON_IsString(subscription_id))
    {
    goto end; //String
    }
    }

    // webhook_subscription_status_update_response->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(webhook_subscription_status_update_responseJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }


    webhook_subscription_status_update_response_local_var = webhook_subscription_status_update_response_create (
        subscription_details ? subscription_details_local_nonprim : NULL,
        callback_url ? strdup(callback_url->valuestring) : NULL,
        subscription_id ? strdup(subscription_id->valuestring) : NULL,
        type ? strdup(type->valuestring) : NULL
        );

    return webhook_subscription_status_update_response_local_var;
end:
    if (subscription_details_local_nonprim) {
        webhook_subscription_details_free(subscription_details_local_nonprim);
        subscription_details_local_nonprim = NULL;
    }
    return NULL;

}
