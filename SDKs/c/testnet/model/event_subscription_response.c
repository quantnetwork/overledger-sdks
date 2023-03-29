#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "event_subscription_response.h"



event_subscription_response_t *event_subscription_response_create(
    char *token_name,
    event_subscription_response_details_t *subscription_details,
    location_t *location,
    char *type
    ) {
    event_subscription_response_t *event_subscription_response_local_var = malloc(sizeof(event_subscription_response_t));
    if (!event_subscription_response_local_var) {
        return NULL;
    }
    event_subscription_response_local_var->token_name = token_name;
    event_subscription_response_local_var->subscription_details = subscription_details;
    event_subscription_response_local_var->location = location;
    event_subscription_response_local_var->type = type;

    return event_subscription_response_local_var;
}


void event_subscription_response_free(event_subscription_response_t *event_subscription_response) {
    if(NULL == event_subscription_response){
        return ;
    }
    listEntry_t *listEntry;
    if (event_subscription_response->token_name) {
        free(event_subscription_response->token_name);
        event_subscription_response->token_name = NULL;
    }
    if (event_subscription_response->subscription_details) {
        event_subscription_response_details_free(event_subscription_response->subscription_details);
        event_subscription_response->subscription_details = NULL;
    }
    if (event_subscription_response->location) {
        location_free(event_subscription_response->location);
        event_subscription_response->location = NULL;
    }
    if (event_subscription_response->type) {
        free(event_subscription_response->type);
        event_subscription_response->type = NULL;
    }
    free(event_subscription_response);
}

cJSON *event_subscription_response_convertToJSON(event_subscription_response_t *event_subscription_response) {
    cJSON *item = cJSON_CreateObject();

    // event_subscription_response->token_name
    if(event_subscription_response->token_name) { 
    if(cJSON_AddStringToObject(item, "tokenName", event_subscription_response->token_name) == NULL) {
    goto fail; //String
    }
     } 


    // event_subscription_response->subscription_details
    if(event_subscription_response->subscription_details) { 
    cJSON *subscription_details_local_JSON = event_subscription_response_details_convertToJSON(event_subscription_response->subscription_details);
    if(subscription_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "subscriptionDetails", subscription_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // event_subscription_response->location
    if(event_subscription_response->location) { 
    cJSON *location_local_JSON = location_convertToJSON(event_subscription_response->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // event_subscription_response->type
    if(event_subscription_response->type) { 
    if(cJSON_AddStringToObject(item, "type", event_subscription_response->type) == NULL) {
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

event_subscription_response_t *event_subscription_response_parseFromJSON(cJSON *event_subscription_responseJSON){

    event_subscription_response_t *event_subscription_response_local_var = NULL;

    // event_subscription_response->token_name
    cJSON *token_name = cJSON_GetObjectItemCaseSensitive(event_subscription_responseJSON, "tokenName");
    if (token_name) { 
    if(!cJSON_IsString(token_name))
    {
    goto end; //String
    }
    }

    // event_subscription_response->subscription_details
    cJSON *subscription_details = cJSON_GetObjectItemCaseSensitive(event_subscription_responseJSON, "subscriptionDetails");
    event_subscription_response_details_t *subscription_details_local_nonprim = NULL;
    if (subscription_details) { 
    subscription_details_local_nonprim = event_subscription_response_details_parseFromJSON(subscription_details); //nonprimitive
    }

    // event_subscription_response->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(event_subscription_responseJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // event_subscription_response->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(event_subscription_responseJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }


    event_subscription_response_local_var = event_subscription_response_create (
        token_name ? strdup(token_name->valuestring) : NULL,
        subscription_details ? subscription_details_local_nonprim : NULL,
        location ? location_local_nonprim : NULL,
        type ? strdup(type->valuestring) : NULL
        );

    return event_subscription_response_local_var;
end:
    if (subscription_details_local_nonprim) {
        event_subscription_response_details_free(subscription_details_local_nonprim);
        subscription_details_local_nonprim = NULL;
    }
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
