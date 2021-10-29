#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list_subscription_response_schema.h"



list_subscription_response_schema_t *list_subscription_response_schema_create(
    subscription_details_schema_t *subscription_details,
    char *subscribed_time,
    char *last_updated_time,
    char *callback_url,
    char *subscription_id,
    char *type
    ) {
    list_subscription_response_schema_t *list_subscription_response_schema_local_var = malloc(sizeof(list_subscription_response_schema_t));
    if (!list_subscription_response_schema_local_var) {
        return NULL;
    }
    list_subscription_response_schema_local_var->subscription_details = subscription_details;
    list_subscription_response_schema_local_var->subscribed_time = subscribed_time;
    list_subscription_response_schema_local_var->last_updated_time = last_updated_time;
    list_subscription_response_schema_local_var->callback_url = callback_url;
    list_subscription_response_schema_local_var->subscription_id = subscription_id;
    list_subscription_response_schema_local_var->type = type;

    return list_subscription_response_schema_local_var;
}


void list_subscription_response_schema_free(list_subscription_response_schema_t *list_subscription_response_schema) {
    if(NULL == list_subscription_response_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (list_subscription_response_schema->subscription_details) {
        subscription_details_schema_free(list_subscription_response_schema->subscription_details);
        list_subscription_response_schema->subscription_details = NULL;
    }
    if (list_subscription_response_schema->subscribed_time) {
        free(list_subscription_response_schema->subscribed_time);
        list_subscription_response_schema->subscribed_time = NULL;
    }
    if (list_subscription_response_schema->last_updated_time) {
        free(list_subscription_response_schema->last_updated_time);
        list_subscription_response_schema->last_updated_time = NULL;
    }
    if (list_subscription_response_schema->callback_url) {
        free(list_subscription_response_schema->callback_url);
        list_subscription_response_schema->callback_url = NULL;
    }
    if (list_subscription_response_schema->subscription_id) {
        free(list_subscription_response_schema->subscription_id);
        list_subscription_response_schema->subscription_id = NULL;
    }
    if (list_subscription_response_schema->type) {
        free(list_subscription_response_schema->type);
        list_subscription_response_schema->type = NULL;
    }
    free(list_subscription_response_schema);
}

cJSON *list_subscription_response_schema_convertToJSON(list_subscription_response_schema_t *list_subscription_response_schema) {
    cJSON *item = cJSON_CreateObject();

    // list_subscription_response_schema->subscription_details
    if(list_subscription_response_schema->subscription_details) { 
    cJSON *subscription_details_local_JSON = subscription_details_schema_convertToJSON(list_subscription_response_schema->subscription_details);
    if(subscription_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "subscriptionDetails", subscription_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // list_subscription_response_schema->subscribed_time
    if(list_subscription_response_schema->subscribed_time) { 
    if(cJSON_AddStringToObject(item, "subscribedTime", list_subscription_response_schema->subscribed_time) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // list_subscription_response_schema->last_updated_time
    if(list_subscription_response_schema->last_updated_time) { 
    if(cJSON_AddStringToObject(item, "lastUpdatedTime", list_subscription_response_schema->last_updated_time) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // list_subscription_response_schema->callback_url
    if(list_subscription_response_schema->callback_url) { 
    if(cJSON_AddStringToObject(item, "callbackUrl", list_subscription_response_schema->callback_url) == NULL) {
    goto fail; //String
    }
     } 


    // list_subscription_response_schema->subscription_id
    if(list_subscription_response_schema->subscription_id) { 
    if(cJSON_AddStringToObject(item, "subscriptionId", list_subscription_response_schema->subscription_id) == NULL) {
    goto fail; //String
    }
     } 


    // list_subscription_response_schema->type
    if(list_subscription_response_schema->type) { 
    if(cJSON_AddStringToObject(item, "type", list_subscription_response_schema->type) == NULL) {
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

list_subscription_response_schema_t *list_subscription_response_schema_parseFromJSON(cJSON *list_subscription_response_schemaJSON){

    list_subscription_response_schema_t *list_subscription_response_schema_local_var = NULL;

    // list_subscription_response_schema->subscription_details
    cJSON *subscription_details = cJSON_GetObjectItemCaseSensitive(list_subscription_response_schemaJSON, "subscriptionDetails");
    subscription_details_schema_t *subscription_details_local_nonprim = NULL;
    if (subscription_details) { 
    subscription_details_local_nonprim = subscription_details_schema_parseFromJSON(subscription_details); //nonprimitive
    }

    // list_subscription_response_schema->subscribed_time
    cJSON *subscribed_time = cJSON_GetObjectItemCaseSensitive(list_subscription_response_schemaJSON, "subscribedTime");
    if (subscribed_time) { 
    if(!cJSON_IsString(subscribed_time))
    {
    goto end; //DateTime
    }
    }

    // list_subscription_response_schema->last_updated_time
    cJSON *last_updated_time = cJSON_GetObjectItemCaseSensitive(list_subscription_response_schemaJSON, "lastUpdatedTime");
    if (last_updated_time) { 
    if(!cJSON_IsString(last_updated_time))
    {
    goto end; //DateTime
    }
    }

    // list_subscription_response_schema->callback_url
    cJSON *callback_url = cJSON_GetObjectItemCaseSensitive(list_subscription_response_schemaJSON, "callbackUrl");
    if (callback_url) { 
    if(!cJSON_IsString(callback_url))
    {
    goto end; //String
    }
    }

    // list_subscription_response_schema->subscription_id
    cJSON *subscription_id = cJSON_GetObjectItemCaseSensitive(list_subscription_response_schemaJSON, "subscriptionId");
    if (subscription_id) { 
    if(!cJSON_IsString(subscription_id))
    {
    goto end; //String
    }
    }

    // list_subscription_response_schema->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(list_subscription_response_schemaJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }


    list_subscription_response_schema_local_var = list_subscription_response_schema_create (
        subscription_details ? subscription_details_local_nonprim : NULL,
        subscribed_time ? strdup(subscribed_time->valuestring) : NULL,
        last_updated_time ? strdup(last_updated_time->valuestring) : NULL,
        callback_url ? strdup(callback_url->valuestring) : NULL,
        subscription_id ? strdup(subscription_id->valuestring) : NULL,
        type ? strdup(type->valuestring) : NULL
        );

    return list_subscription_response_schema_local_var;
end:
    if (subscription_details_local_nonprim) {
        subscription_details_schema_free(subscription_details_local_nonprim);
        subscription_details_local_nonprim = NULL;
    }
    return NULL;

}
