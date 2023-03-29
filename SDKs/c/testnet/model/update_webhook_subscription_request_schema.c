#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "update_webhook_subscription_request_schema.h"



update_webhook_subscription_request_schema_t *update_webhook_subscription_request_schema_create(
    webhook_status_update_schema_t *status_update,
    char *callback_url
    ) {
    update_webhook_subscription_request_schema_t *update_webhook_subscription_request_schema_local_var = malloc(sizeof(update_webhook_subscription_request_schema_t));
    if (!update_webhook_subscription_request_schema_local_var) {
        return NULL;
    }
    update_webhook_subscription_request_schema_local_var->status_update = status_update;
    update_webhook_subscription_request_schema_local_var->callback_url = callback_url;

    return update_webhook_subscription_request_schema_local_var;
}


void update_webhook_subscription_request_schema_free(update_webhook_subscription_request_schema_t *update_webhook_subscription_request_schema) {
    if(NULL == update_webhook_subscription_request_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (update_webhook_subscription_request_schema->status_update) {
        webhook_status_update_schema_free(update_webhook_subscription_request_schema->status_update);
        update_webhook_subscription_request_schema->status_update = NULL;
    }
    if (update_webhook_subscription_request_schema->callback_url) {
        free(update_webhook_subscription_request_schema->callback_url);
        update_webhook_subscription_request_schema->callback_url = NULL;
    }
    free(update_webhook_subscription_request_schema);
}

cJSON *update_webhook_subscription_request_schema_convertToJSON(update_webhook_subscription_request_schema_t *update_webhook_subscription_request_schema) {
    cJSON *item = cJSON_CreateObject();

    // update_webhook_subscription_request_schema->status_update
    if(update_webhook_subscription_request_schema->status_update) { 
    cJSON *status_update_local_JSON = webhook_status_update_schema_convertToJSON(update_webhook_subscription_request_schema->status_update);
    if(status_update_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "statusUpdate", status_update_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // update_webhook_subscription_request_schema->callback_url
    if(update_webhook_subscription_request_schema->callback_url) { 
    if(cJSON_AddStringToObject(item, "callbackUrl", update_webhook_subscription_request_schema->callback_url) == NULL) {
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

update_webhook_subscription_request_schema_t *update_webhook_subscription_request_schema_parseFromJSON(cJSON *update_webhook_subscription_request_schemaJSON){

    update_webhook_subscription_request_schema_t *update_webhook_subscription_request_schema_local_var = NULL;

    // update_webhook_subscription_request_schema->status_update
    cJSON *status_update = cJSON_GetObjectItemCaseSensitive(update_webhook_subscription_request_schemaJSON, "statusUpdate");
    webhook_status_update_schema_t *status_update_local_nonprim = NULL;
    if (status_update) { 
    status_update_local_nonprim = webhook_status_update_schema_parseFromJSON(status_update); //nonprimitive
    }

    // update_webhook_subscription_request_schema->callback_url
    cJSON *callback_url = cJSON_GetObjectItemCaseSensitive(update_webhook_subscription_request_schemaJSON, "callbackUrl");
    if (callback_url) { 
    if(!cJSON_IsString(callback_url))
    {
    goto end; //String
    }
    }


    update_webhook_subscription_request_schema_local_var = update_webhook_subscription_request_schema_create (
        status_update ? status_update_local_nonprim : NULL,
        callback_url ? strdup(callback_url->valuestring) : NULL
        );

    return update_webhook_subscription_request_schema_local_var;
end:
    if (status_update_local_nonprim) {
        webhook_status_update_schema_free(status_update_local_nonprim);
        status_update_local_nonprim = NULL;
    }
    return NULL;

}
