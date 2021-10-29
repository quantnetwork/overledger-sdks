#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "create_subscription_response_schema.h"



create_subscription_response_schema_t *create_subscription_response_schema_create(
    subscription_details_schema_t *scubscription_details,
    char *subscription_id
    ) {
    create_subscription_response_schema_t *create_subscription_response_schema_local_var = malloc(sizeof(create_subscription_response_schema_t));
    if (!create_subscription_response_schema_local_var) {
        return NULL;
    }
    create_subscription_response_schema_local_var->scubscription_details = scubscription_details;
    create_subscription_response_schema_local_var->subscription_id = subscription_id;

    return create_subscription_response_schema_local_var;
}


void create_subscription_response_schema_free(create_subscription_response_schema_t *create_subscription_response_schema) {
    if(NULL == create_subscription_response_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (create_subscription_response_schema->scubscription_details) {
        subscription_details_schema_free(create_subscription_response_schema->scubscription_details);
        create_subscription_response_schema->scubscription_details = NULL;
    }
    if (create_subscription_response_schema->subscription_id) {
        free(create_subscription_response_schema->subscription_id);
        create_subscription_response_schema->subscription_id = NULL;
    }
    free(create_subscription_response_schema);
}

cJSON *create_subscription_response_schema_convertToJSON(create_subscription_response_schema_t *create_subscription_response_schema) {
    cJSON *item = cJSON_CreateObject();

    // create_subscription_response_schema->scubscription_details
    if(create_subscription_response_schema->scubscription_details) { 
    cJSON *scubscription_details_local_JSON = subscription_details_schema_convertToJSON(create_subscription_response_schema->scubscription_details);
    if(scubscription_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "scubscriptionDetails", scubscription_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // create_subscription_response_schema->subscription_id
    if(create_subscription_response_schema->subscription_id) { 
    if(cJSON_AddStringToObject(item, "subscriptionId", create_subscription_response_schema->subscription_id) == NULL) {
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

create_subscription_response_schema_t *create_subscription_response_schema_parseFromJSON(cJSON *create_subscription_response_schemaJSON){

    create_subscription_response_schema_t *create_subscription_response_schema_local_var = NULL;

    // create_subscription_response_schema->scubscription_details
    cJSON *scubscription_details = cJSON_GetObjectItemCaseSensitive(create_subscription_response_schemaJSON, "scubscriptionDetails");
    subscription_details_schema_t *scubscription_details_local_nonprim = NULL;
    if (scubscription_details) { 
    scubscription_details_local_nonprim = subscription_details_schema_parseFromJSON(scubscription_details); //nonprimitive
    }

    // create_subscription_response_schema->subscription_id
    cJSON *subscription_id = cJSON_GetObjectItemCaseSensitive(create_subscription_response_schemaJSON, "subscriptionId");
    if (subscription_id) { 
    if(!cJSON_IsString(subscription_id))
    {
    goto end; //String
    }
    }


    create_subscription_response_schema_local_var = create_subscription_response_schema_create (
        scubscription_details ? scubscription_details_local_nonprim : NULL,
        subscription_id ? strdup(subscription_id->valuestring) : NULL
        );

    return create_subscription_response_schema_local_var;
end:
    if (scubscription_details_local_nonprim) {
        subscription_details_schema_free(scubscription_details_local_nonprim);
        scubscription_details_local_nonprim = NULL;
    }
    return NULL;

}
