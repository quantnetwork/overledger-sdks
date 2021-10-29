#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "location.h"



location_t *location_create(
    char *technology,
    char *network
    ) {
    location_t *location_local_var = malloc(sizeof(location_t));
    if (!location_local_var) {
        return NULL;
    }
    location_local_var->technology = technology;
    location_local_var->network = network;

    return location_local_var;
}


void location_free(location_t *location) {
    if(NULL == location){
        return ;
    }
    listEntry_t *listEntry;
    if (location->technology) {
        free(location->technology);
        location->technology = NULL;
    }
    if (location->network) {
        free(location->network);
        location->network = NULL;
    }
    free(location);
}

cJSON *location_convertToJSON(location_t *location) {
    cJSON *item = cJSON_CreateObject();

    // location->technology
    if (!location->technology) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "technology", location->technology) == NULL) {
    goto fail; //String
    }


    // location->network
    if (!location->network) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "network", location->network) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

location_t *location_parseFromJSON(cJSON *locationJSON){

    location_t *location_local_var = NULL;

    // location->technology
    cJSON *technology = cJSON_GetObjectItemCaseSensitive(locationJSON, "technology");
    if (!technology) {
        goto end;
    }

    
    if(!cJSON_IsString(technology))
    {
    goto end; //String
    }

    // location->network
    cJSON *network = cJSON_GetObjectItemCaseSensitive(locationJSON, "network");
    if (!network) {
        goto end;
    }

    
    if(!cJSON_IsString(network))
    {
    goto end; //String
    }


    location_local_var = location_create (
        strdup(technology->valuestring),
        strdup(network->valuestring)
        );

    return location_local_var;
end:
    return NULL;

}
