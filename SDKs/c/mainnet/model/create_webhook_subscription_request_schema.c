#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "create_webhook_subscription_request_schema.h"



create_webhook_subscription_request_schema_t *create_webhook_subscription_request_schema_create(
    char *type,
    list_t *ids,
    char *callback_url
    ) {
    create_webhook_subscription_request_schema_t *create_webhook_subscription_request_schema_local_var = malloc(sizeof(create_webhook_subscription_request_schema_t));
    if (!create_webhook_subscription_request_schema_local_var) {
        return NULL;
    }
    create_webhook_subscription_request_schema_local_var->type = type;
    create_webhook_subscription_request_schema_local_var->ids = ids;
    create_webhook_subscription_request_schema_local_var->callback_url = callback_url;

    return create_webhook_subscription_request_schema_local_var;
}


void create_webhook_subscription_request_schema_free(create_webhook_subscription_request_schema_t *create_webhook_subscription_request_schema) {
    if(NULL == create_webhook_subscription_request_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (create_webhook_subscription_request_schema->type) {
        free(create_webhook_subscription_request_schema->type);
        create_webhook_subscription_request_schema->type = NULL;
    }
    if (create_webhook_subscription_request_schema->ids) {
        list_ForEach(listEntry, create_webhook_subscription_request_schema->ids) {
            free(listEntry->data);
        }
        list_free(create_webhook_subscription_request_schema->ids);
        create_webhook_subscription_request_schema->ids = NULL;
    }
    if (create_webhook_subscription_request_schema->callback_url) {
        free(create_webhook_subscription_request_schema->callback_url);
        create_webhook_subscription_request_schema->callback_url = NULL;
    }
    free(create_webhook_subscription_request_schema);
}

cJSON *create_webhook_subscription_request_schema_convertToJSON(create_webhook_subscription_request_schema_t *create_webhook_subscription_request_schema) {
    cJSON *item = cJSON_CreateObject();

    // create_webhook_subscription_request_schema->type
    if(create_webhook_subscription_request_schema->type) { 
    if(cJSON_AddStringToObject(item, "type", create_webhook_subscription_request_schema->type) == NULL) {
    goto fail; //String
    }
     } 


    // create_webhook_subscription_request_schema->ids
    if(create_webhook_subscription_request_schema->ids) { 
    cJSON *ids = cJSON_AddArrayToObject(item, "ids");
    if(ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *idsListEntry;
    list_ForEach(idsListEntry, create_webhook_subscription_request_schema->ids) {
    if(cJSON_AddStringToObject(ids, "", (char*)idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // create_webhook_subscription_request_schema->callback_url
    if(create_webhook_subscription_request_schema->callback_url) { 
    if(cJSON_AddStringToObject(item, "callbackUrl", create_webhook_subscription_request_schema->callback_url) == NULL) {
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

create_webhook_subscription_request_schema_t *create_webhook_subscription_request_schema_parseFromJSON(cJSON *create_webhook_subscription_request_schemaJSON){

    create_webhook_subscription_request_schema_t *create_webhook_subscription_request_schema_local_var = NULL;

    // create_webhook_subscription_request_schema->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(create_webhook_subscription_request_schemaJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // create_webhook_subscription_request_schema->ids
    cJSON *ids = cJSON_GetObjectItemCaseSensitive(create_webhook_subscription_request_schemaJSON, "ids");
    list_t *idsList;
    if (ids) { 
    cJSON *ids_local;
    if(!cJSON_IsArray(ids)) {
        goto end;//primitive container
    }
    idsList = list_create();

    cJSON_ArrayForEach(ids_local, ids)
    {
        if(!cJSON_IsString(ids_local))
        {
            goto end;
        }
        list_addElement(idsList , strdup(ids_local->valuestring));
    }
    }

    // create_webhook_subscription_request_schema->callback_url
    cJSON *callback_url = cJSON_GetObjectItemCaseSensitive(create_webhook_subscription_request_schemaJSON, "callbackUrl");
    if (callback_url) { 
    if(!cJSON_IsString(callback_url))
    {
    goto end; //String
    }
    }


    create_webhook_subscription_request_schema_local_var = create_webhook_subscription_request_schema_create (
        type ? strdup(type->valuestring) : NULL,
        ids ? idsList : NULL,
        callback_url ? strdup(callback_url->valuestring) : NULL
        );

    return create_webhook_subscription_request_schema_local_var;
end:
    return NULL;

}
