#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subscription_details.h"



subscription_details_t *subscription_details_create(
    list_t *ids,
    status_t *status
    ) {
    subscription_details_t *subscription_details_local_var = malloc(sizeof(subscription_details_t));
    if (!subscription_details_local_var) {
        return NULL;
    }
    subscription_details_local_var->ids = ids;
    subscription_details_local_var->status = status;

    return subscription_details_local_var;
}


void subscription_details_free(subscription_details_t *subscription_details) {
    if(NULL == subscription_details){
        return ;
    }
    listEntry_t *listEntry;
    if (subscription_details->ids) {
        list_ForEach(listEntry, subscription_details->ids) {
            free(listEntry->data);
        }
        list_free(subscription_details->ids);
        subscription_details->ids = NULL;
    }
    if (subscription_details->status) {
        status_free(subscription_details->status);
        subscription_details->status = NULL;
    }
    free(subscription_details);
}

cJSON *subscription_details_convertToJSON(subscription_details_t *subscription_details) {
    cJSON *item = cJSON_CreateObject();

    // subscription_details->ids
    if(subscription_details->ids) { 
    cJSON *ids = cJSON_AddArrayToObject(item, "ids");
    if(ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *idsListEntry;
    list_ForEach(idsListEntry, subscription_details->ids) {
    if(cJSON_AddStringToObject(ids, "", (char*)idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // subscription_details->status
    if(subscription_details->status) { 
    cJSON *status_local_JSON = status_convertToJSON(subscription_details->status);
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

subscription_details_t *subscription_details_parseFromJSON(cJSON *subscription_detailsJSON){

    subscription_details_t *subscription_details_local_var = NULL;

    // subscription_details->ids
    cJSON *ids = cJSON_GetObjectItemCaseSensitive(subscription_detailsJSON, "ids");
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

    // subscription_details->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(subscription_detailsJSON, "status");
    status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = status_parseFromJSON(status); //nonprimitive
    }


    subscription_details_local_var = subscription_details_create (
        ids ? idsList : NULL,
        status ? status_local_nonprim : NULL
        );

    return subscription_details_local_var;
end:
    if (status_local_nonprim) {
        status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
