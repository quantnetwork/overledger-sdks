#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "event_subscription_response_details.h"



event_subscription_response_details_t *event_subscription_response_details_create(
    char *subscription_id,
    char *callback_url,
    char *created_date
    ) {
    event_subscription_response_details_t *event_subscription_response_details_local_var = malloc(sizeof(event_subscription_response_details_t));
    if (!event_subscription_response_details_local_var) {
        return NULL;
    }
    event_subscription_response_details_local_var->subscription_id = subscription_id;
    event_subscription_response_details_local_var->callback_url = callback_url;
    event_subscription_response_details_local_var->created_date = created_date;

    return event_subscription_response_details_local_var;
}


void event_subscription_response_details_free(event_subscription_response_details_t *event_subscription_response_details) {
    if(NULL == event_subscription_response_details){
        return ;
    }
    listEntry_t *listEntry;
    if (event_subscription_response_details->subscription_id) {
        free(event_subscription_response_details->subscription_id);
        event_subscription_response_details->subscription_id = NULL;
    }
    if (event_subscription_response_details->callback_url) {
        free(event_subscription_response_details->callback_url);
        event_subscription_response_details->callback_url = NULL;
    }
    if (event_subscription_response_details->created_date) {
        free(event_subscription_response_details->created_date);
        event_subscription_response_details->created_date = NULL;
    }
    free(event_subscription_response_details);
}

cJSON *event_subscription_response_details_convertToJSON(event_subscription_response_details_t *event_subscription_response_details) {
    cJSON *item = cJSON_CreateObject();

    // event_subscription_response_details->subscription_id
    if(event_subscription_response_details->subscription_id) { 
    if(cJSON_AddStringToObject(item, "subscriptionId", event_subscription_response_details->subscription_id) == NULL) {
    goto fail; //String
    }
     } 


    // event_subscription_response_details->callback_url
    if(event_subscription_response_details->callback_url) { 
    if(cJSON_AddStringToObject(item, "callbackUrl", event_subscription_response_details->callback_url) == NULL) {
    goto fail; //String
    }
     } 


    // event_subscription_response_details->created_date
    if(event_subscription_response_details->created_date) { 
    if(cJSON_AddStringToObject(item, "createdDate", event_subscription_response_details->created_date) == NULL) {
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

event_subscription_response_details_t *event_subscription_response_details_parseFromJSON(cJSON *event_subscription_response_detailsJSON){

    event_subscription_response_details_t *event_subscription_response_details_local_var = NULL;

    // event_subscription_response_details->subscription_id
    cJSON *subscription_id = cJSON_GetObjectItemCaseSensitive(event_subscription_response_detailsJSON, "subscriptionId");
    if (subscription_id) { 
    if(!cJSON_IsString(subscription_id))
    {
    goto end; //String
    }
    }

    // event_subscription_response_details->callback_url
    cJSON *callback_url = cJSON_GetObjectItemCaseSensitive(event_subscription_response_detailsJSON, "callbackUrl");
    if (callback_url) { 
    if(!cJSON_IsString(callback_url))
    {
    goto end; //String
    }
    }

    // event_subscription_response_details->created_date
    cJSON *created_date = cJSON_GetObjectItemCaseSensitive(event_subscription_response_detailsJSON, "createdDate");
    if (created_date) { 
    if(!cJSON_IsString(created_date))
    {
    goto end; //String
    }
    }


    event_subscription_response_details_local_var = event_subscription_response_details_create (
        subscription_id ? strdup(subscription_id->valuestring) : NULL,
        callback_url ? strdup(callback_url->valuestring) : NULL,
        created_date ? strdup(created_date->valuestring) : NULL
        );

    return event_subscription_response_details_local_var;
end:
    return NULL;

}
