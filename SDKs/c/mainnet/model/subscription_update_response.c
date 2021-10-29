#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subscription_update_response.h"



subscription_update_response_t *subscription_update_response_create(
    subscription_details_t *subscription_details,
    char *callback_url,
    char *subscription_id,
    char *type
    ) {
    subscription_update_response_t *subscription_update_response_local_var = malloc(sizeof(subscription_update_response_t));
    if (!subscription_update_response_local_var) {
        return NULL;
    }
    subscription_update_response_local_var->subscription_details = subscription_details;
    subscription_update_response_local_var->callback_url = callback_url;
    subscription_update_response_local_var->subscription_id = subscription_id;
    subscription_update_response_local_var->type = type;

    return subscription_update_response_local_var;
}


void subscription_update_response_free(subscription_update_response_t *subscription_update_response) {
    if(NULL == subscription_update_response){
        return ;
    }
    listEntry_t *listEntry;
    if (subscription_update_response->subscription_details) {
        subscription_details_free(subscription_update_response->subscription_details);
        subscription_update_response->subscription_details = NULL;
    }
    if (subscription_update_response->callback_url) {
        free(subscription_update_response->callback_url);
        subscription_update_response->callback_url = NULL;
    }
    if (subscription_update_response->subscription_id) {
        free(subscription_update_response->subscription_id);
        subscription_update_response->subscription_id = NULL;
    }
    if (subscription_update_response->type) {
        free(subscription_update_response->type);
        subscription_update_response->type = NULL;
    }
    free(subscription_update_response);
}

cJSON *subscription_update_response_convertToJSON(subscription_update_response_t *subscription_update_response) {
    cJSON *item = cJSON_CreateObject();

    // subscription_update_response->subscription_details
    if(subscription_update_response->subscription_details) { 
    cJSON *subscription_details_local_JSON = subscription_details_convertToJSON(subscription_update_response->subscription_details);
    if(subscription_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "subscriptionDetails", subscription_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // subscription_update_response->callback_url
    if(subscription_update_response->callback_url) { 
    if(cJSON_AddStringToObject(item, "callbackUrl", subscription_update_response->callback_url) == NULL) {
    goto fail; //String
    }
     } 


    // subscription_update_response->subscription_id
    if(subscription_update_response->subscription_id) { 
    if(cJSON_AddStringToObject(item, "subscriptionId", subscription_update_response->subscription_id) == NULL) {
    goto fail; //String
    }
     } 


    // subscription_update_response->type
    if(subscription_update_response->type) { 
    if(cJSON_AddStringToObject(item, "type", subscription_update_response->type) == NULL) {
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

subscription_update_response_t *subscription_update_response_parseFromJSON(cJSON *subscription_update_responseJSON){

    subscription_update_response_t *subscription_update_response_local_var = NULL;

    // subscription_update_response->subscription_details
    cJSON *subscription_details = cJSON_GetObjectItemCaseSensitive(subscription_update_responseJSON, "subscriptionDetails");
    subscription_details_t *subscription_details_local_nonprim = NULL;
    if (subscription_details) { 
    subscription_details_local_nonprim = subscription_details_parseFromJSON(subscription_details); //nonprimitive
    }

    // subscription_update_response->callback_url
    cJSON *callback_url = cJSON_GetObjectItemCaseSensitive(subscription_update_responseJSON, "callbackUrl");
    if (callback_url) { 
    if(!cJSON_IsString(callback_url))
    {
    goto end; //String
    }
    }

    // subscription_update_response->subscription_id
    cJSON *subscription_id = cJSON_GetObjectItemCaseSensitive(subscription_update_responseJSON, "subscriptionId");
    if (subscription_id) { 
    if(!cJSON_IsString(subscription_id))
    {
    goto end; //String
    }
    }

    // subscription_update_response->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(subscription_update_responseJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }


    subscription_update_response_local_var = subscription_update_response_create (
        subscription_details ? subscription_details_local_nonprim : NULL,
        callback_url ? strdup(callback_url->valuestring) : NULL,
        subscription_id ? strdup(subscription_id->valuestring) : NULL,
        type ? strdup(type->valuestring) : NULL
        );

    return subscription_update_response_local_var;
end:
    if (subscription_details_local_nonprim) {
        subscription_details_free(subscription_details_local_nonprim);
        subscription_details_local_nonprim = NULL;
    }
    return NULL;

}
