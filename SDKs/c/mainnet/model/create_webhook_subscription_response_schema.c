#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "create_webhook_subscription_response_schema.h"



create_webhook_subscription_response_schema_t *create_webhook_subscription_response_schema_create(
    char *subscription_id,
    webhook_subscription_details_schema_t *scubscription_details
    ) {
    create_webhook_subscription_response_schema_t *create_webhook_subscription_response_schema_local_var = malloc(sizeof(create_webhook_subscription_response_schema_t));
    if (!create_webhook_subscription_response_schema_local_var) {
        return NULL;
    }
    create_webhook_subscription_response_schema_local_var->subscription_id = subscription_id;
    create_webhook_subscription_response_schema_local_var->scubscription_details = scubscription_details;

    return create_webhook_subscription_response_schema_local_var;
}


void create_webhook_subscription_response_schema_free(create_webhook_subscription_response_schema_t *create_webhook_subscription_response_schema) {
    if(NULL == create_webhook_subscription_response_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (create_webhook_subscription_response_schema->subscription_id) {
        free(create_webhook_subscription_response_schema->subscription_id);
        create_webhook_subscription_response_schema->subscription_id = NULL;
    }
    if (create_webhook_subscription_response_schema->scubscription_details) {
        webhook_subscription_details_schema_free(create_webhook_subscription_response_schema->scubscription_details);
        create_webhook_subscription_response_schema->scubscription_details = NULL;
    }
    free(create_webhook_subscription_response_schema);
}

cJSON *create_webhook_subscription_response_schema_convertToJSON(create_webhook_subscription_response_schema_t *create_webhook_subscription_response_schema) {
    cJSON *item = cJSON_CreateObject();

    // create_webhook_subscription_response_schema->subscription_id
    if(create_webhook_subscription_response_schema->subscription_id) { 
    if(cJSON_AddStringToObject(item, "subscriptionId", create_webhook_subscription_response_schema->subscription_id) == NULL) {
    goto fail; //String
    }
     } 


    // create_webhook_subscription_response_schema->scubscription_details
    if(create_webhook_subscription_response_schema->scubscription_details) { 
    cJSON *scubscription_details_local_JSON = webhook_subscription_details_schema_convertToJSON(create_webhook_subscription_response_schema->scubscription_details);
    if(scubscription_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "scubscriptionDetails", scubscription_details_local_JSON);
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

create_webhook_subscription_response_schema_t *create_webhook_subscription_response_schema_parseFromJSON(cJSON *create_webhook_subscription_response_schemaJSON){

    create_webhook_subscription_response_schema_t *create_webhook_subscription_response_schema_local_var = NULL;

    // create_webhook_subscription_response_schema->subscription_id
    cJSON *subscription_id = cJSON_GetObjectItemCaseSensitive(create_webhook_subscription_response_schemaJSON, "subscriptionId");
    if (subscription_id) { 
    if(!cJSON_IsString(subscription_id))
    {
    goto end; //String
    }
    }

    // create_webhook_subscription_response_schema->scubscription_details
    cJSON *scubscription_details = cJSON_GetObjectItemCaseSensitive(create_webhook_subscription_response_schemaJSON, "scubscriptionDetails");
    webhook_subscription_details_schema_t *scubscription_details_local_nonprim = NULL;
    if (scubscription_details) { 
    scubscription_details_local_nonprim = webhook_subscription_details_schema_parseFromJSON(scubscription_details); //nonprimitive
    }


    create_webhook_subscription_response_schema_local_var = create_webhook_subscription_response_schema_create (
        subscription_id ? strdup(subscription_id->valuestring) : NULL,
        scubscription_details ? scubscription_details_local_nonprim : NULL
        );

    return create_webhook_subscription_response_schema_local_var;
end:
    if (scubscription_details_local_nonprim) {
        webhook_subscription_details_schema_free(scubscription_details_local_nonprim);
        scubscription_details_local_nonprim = NULL;
    }
    return NULL;

}
