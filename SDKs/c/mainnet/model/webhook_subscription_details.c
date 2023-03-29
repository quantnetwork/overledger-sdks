#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_subscription_details.h"



webhook_subscription_details_t *webhook_subscription_details_create(
    list_t *ids,
    status_t *status
    ) {
    webhook_subscription_details_t *webhook_subscription_details_local_var = malloc(sizeof(webhook_subscription_details_t));
    if (!webhook_subscription_details_local_var) {
        return NULL;
    }
    webhook_subscription_details_local_var->ids = ids;
    webhook_subscription_details_local_var->status = status;

    return webhook_subscription_details_local_var;
}


void webhook_subscription_details_free(webhook_subscription_details_t *webhook_subscription_details) {
    if(NULL == webhook_subscription_details){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_subscription_details->ids) {
        list_ForEach(listEntry, webhook_subscription_details->ids) {
            free(listEntry->data);
        }
        list_free(webhook_subscription_details->ids);
        webhook_subscription_details->ids = NULL;
    }
    if (webhook_subscription_details->status) {
        status_free(webhook_subscription_details->status);
        webhook_subscription_details->status = NULL;
    }
    free(webhook_subscription_details);
}

cJSON *webhook_subscription_details_convertToJSON(webhook_subscription_details_t *webhook_subscription_details) {
    cJSON *item = cJSON_CreateObject();

    // webhook_subscription_details->ids
    if(webhook_subscription_details->ids) { 
    cJSON *ids = cJSON_AddArrayToObject(item, "ids");
    if(ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *idsListEntry;
    list_ForEach(idsListEntry, webhook_subscription_details->ids) {
    if(cJSON_AddStringToObject(ids, "", (char*)idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // webhook_subscription_details->status
    if(webhook_subscription_details->status) { 
    cJSON *status_local_JSON = status_convertToJSON(webhook_subscription_details->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
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

webhook_subscription_details_t *webhook_subscription_details_parseFromJSON(cJSON *webhook_subscription_detailsJSON){

    webhook_subscription_details_t *webhook_subscription_details_local_var = NULL;

    // webhook_subscription_details->ids
    cJSON *ids = cJSON_GetObjectItemCaseSensitive(webhook_subscription_detailsJSON, "ids");
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

    // webhook_subscription_details->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(webhook_subscription_detailsJSON, "status");
    status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = status_parseFromJSON(status); //nonprimitive
    }


    webhook_subscription_details_local_var = webhook_subscription_details_create (
        ids ? idsList : NULL,
        status ? status_local_nonprim : NULL
        );

    return webhook_subscription_details_local_var;
end:
    if (status_local_nonprim) {
        status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
