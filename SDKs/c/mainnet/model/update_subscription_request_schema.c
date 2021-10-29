#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "update_subscription_request_schema.h"



update_subscription_request_schema_t *update_subscription_request_schema_create(
    status_update_schema_t *status_update,
    char *callback_url
    ) {
    update_subscription_request_schema_t *update_subscription_request_schema_local_var = malloc(sizeof(update_subscription_request_schema_t));
    if (!update_subscription_request_schema_local_var) {
        return NULL;
    }
    update_subscription_request_schema_local_var->status_update = status_update;
    update_subscription_request_schema_local_var->callback_url = callback_url;

    return update_subscription_request_schema_local_var;
}


void update_subscription_request_schema_free(update_subscription_request_schema_t *update_subscription_request_schema) {
    if(NULL == update_subscription_request_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (update_subscription_request_schema->status_update) {
        status_update_schema_free(update_subscription_request_schema->status_update);
        update_subscription_request_schema->status_update = NULL;
    }
    if (update_subscription_request_schema->callback_url) {
        free(update_subscription_request_schema->callback_url);
        update_subscription_request_schema->callback_url = NULL;
    }
    free(update_subscription_request_schema);
}

cJSON *update_subscription_request_schema_convertToJSON(update_subscription_request_schema_t *update_subscription_request_schema) {
    cJSON *item = cJSON_CreateObject();

    // update_subscription_request_schema->status_update
    if(update_subscription_request_schema->status_update) { 
    cJSON *status_update_local_JSON = status_update_schema_convertToJSON(update_subscription_request_schema->status_update);
    if(status_update_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "statusUpdate", status_update_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // update_subscription_request_schema->callback_url
    if(update_subscription_request_schema->callback_url) { 
    if(cJSON_AddStringToObject(item, "callbackUrl", update_subscription_request_schema->callback_url) == NULL) {
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

update_subscription_request_schema_t *update_subscription_request_schema_parseFromJSON(cJSON *update_subscription_request_schemaJSON){

    update_subscription_request_schema_t *update_subscription_request_schema_local_var = NULL;

    // update_subscription_request_schema->status_update
    cJSON *status_update = cJSON_GetObjectItemCaseSensitive(update_subscription_request_schemaJSON, "statusUpdate");
    status_update_schema_t *status_update_local_nonprim = NULL;
    if (status_update) { 
    status_update_local_nonprim = status_update_schema_parseFromJSON(status_update); //nonprimitive
    }

    // update_subscription_request_schema->callback_url
    cJSON *callback_url = cJSON_GetObjectItemCaseSensitive(update_subscription_request_schemaJSON, "callbackUrl");
    if (callback_url) { 
    if(!cJSON_IsString(callback_url))
    {
    goto end; //String
    }
    }


    update_subscription_request_schema_local_var = update_subscription_request_schema_create (
        status_update ? status_update_local_nonprim : NULL,
        callback_url ? strdup(callback_url->valuestring) : NULL
        );

    return update_subscription_request_schema_local_var;
end:
    if (status_update_local_nonprim) {
        status_update_schema_free(status_update_local_nonprim);
        status_update_local_nonprim = NULL;
    }
    return NULL;

}
