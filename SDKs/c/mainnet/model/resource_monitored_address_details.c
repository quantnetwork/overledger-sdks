#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "resource_monitored_address_details.h"



resource_monitored_address_details_t *resource_monitored_address_details_create(
    char *address_id
    ) {
    resource_monitored_address_details_t *resource_monitored_address_details_local_var = malloc(sizeof(resource_monitored_address_details_t));
    if (!resource_monitored_address_details_local_var) {
        return NULL;
    }
    resource_monitored_address_details_local_var->address_id = address_id;

    return resource_monitored_address_details_local_var;
}


void resource_monitored_address_details_free(resource_monitored_address_details_t *resource_monitored_address_details) {
    if(NULL == resource_monitored_address_details){
        return ;
    }
    listEntry_t *listEntry;
    if (resource_monitored_address_details->address_id) {
        free(resource_monitored_address_details->address_id);
        resource_monitored_address_details->address_id = NULL;
    }
    free(resource_monitored_address_details);
}

cJSON *resource_monitored_address_details_convertToJSON(resource_monitored_address_details_t *resource_monitored_address_details) {
    cJSON *item = cJSON_CreateObject();

    // resource_monitored_address_details->address_id
    if(resource_monitored_address_details->address_id) { 
    if(cJSON_AddStringToObject(item, "addressId", resource_monitored_address_details->address_id) == NULL) {
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

resource_monitored_address_details_t *resource_monitored_address_details_parseFromJSON(cJSON *resource_monitored_address_detailsJSON){

    resource_monitored_address_details_t *resource_monitored_address_details_local_var = NULL;

    // resource_monitored_address_details->address_id
    cJSON *address_id = cJSON_GetObjectItemCaseSensitive(resource_monitored_address_detailsJSON, "addressId");
    if (address_id) { 
    if(!cJSON_IsString(address_id))
    {
    goto end; //String
    }
    }


    resource_monitored_address_details_local_var = resource_monitored_address_details_create (
        address_id ? strdup(address_id->valuestring) : NULL
        );

    return resource_monitored_address_details_local_var;
end:
    return NULL;

}
