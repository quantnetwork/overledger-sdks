#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "resource_monitoring_subscription_details.h"



resource_monitoring_subscription_details_t *resource_monitoring_subscription_details_create(
    list_t *ids,
    status_t *status
    ) {
    resource_monitoring_subscription_details_t *resource_monitoring_subscription_details_local_var = malloc(sizeof(resource_monitoring_subscription_details_t));
    if (!resource_monitoring_subscription_details_local_var) {
        return NULL;
    }
    resource_monitoring_subscription_details_local_var->ids = ids;
    resource_monitoring_subscription_details_local_var->status = status;

    return resource_monitoring_subscription_details_local_var;
}


void resource_monitoring_subscription_details_free(resource_monitoring_subscription_details_t *resource_monitoring_subscription_details) {
    if(NULL == resource_monitoring_subscription_details){
        return ;
    }
    listEntry_t *listEntry;
    if (resource_monitoring_subscription_details->ids) {
        list_ForEach(listEntry, resource_monitoring_subscription_details->ids) {
            free(listEntry->data);
        }
        list_free(resource_monitoring_subscription_details->ids);
        resource_monitoring_subscription_details->ids = NULL;
    }
    if (resource_monitoring_subscription_details->status) {
        status_free(resource_monitoring_subscription_details->status);
        resource_monitoring_subscription_details->status = NULL;
    }
    free(resource_monitoring_subscription_details);
}

cJSON *resource_monitoring_subscription_details_convertToJSON(resource_monitoring_subscription_details_t *resource_monitoring_subscription_details) {
    cJSON *item = cJSON_CreateObject();

    // resource_monitoring_subscription_details->ids
    if(resource_monitoring_subscription_details->ids) { 
    cJSON *ids = cJSON_AddArrayToObject(item, "ids");
    if(ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *idsListEntry;
    list_ForEach(idsListEntry, resource_monitoring_subscription_details->ids) {
    if(cJSON_AddStringToObject(ids, "", (char*)idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // resource_monitoring_subscription_details->status
    if(resource_monitoring_subscription_details->status) { 
    cJSON *status_local_JSON = status_convertToJSON(resource_monitoring_subscription_details->status);
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

resource_monitoring_subscription_details_t *resource_monitoring_subscription_details_parseFromJSON(cJSON *resource_monitoring_subscription_detailsJSON){

    resource_monitoring_subscription_details_t *resource_monitoring_subscription_details_local_var = NULL;

    // resource_monitoring_subscription_details->ids
    cJSON *ids = cJSON_GetObjectItemCaseSensitive(resource_monitoring_subscription_detailsJSON, "ids");
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

    // resource_monitoring_subscription_details->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(resource_monitoring_subscription_detailsJSON, "status");
    status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = status_parseFromJSON(status); //nonprimitive
    }


    resource_monitoring_subscription_details_local_var = resource_monitoring_subscription_details_create (
        ids ? idsList : NULL,
        status ? status_local_nonprim : NULL
        );

    return resource_monitoring_subscription_details_local_var;
end:
    if (status_local_nonprim) {
        status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
