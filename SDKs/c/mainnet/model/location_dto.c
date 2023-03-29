#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "location_dto.h"



location_dto_t *location_dto_create(
    char *technology,
    char *network
    ) {
    location_dto_t *location_dto_local_var = malloc(sizeof(location_dto_t));
    if (!location_dto_local_var) {
        return NULL;
    }
    location_dto_local_var->technology = technology;
    location_dto_local_var->network = network;

    return location_dto_local_var;
}


void location_dto_free(location_dto_t *location_dto) {
    if(NULL == location_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (location_dto->technology) {
        free(location_dto->technology);
        location_dto->technology = NULL;
    }
    if (location_dto->network) {
        free(location_dto->network);
        location_dto->network = NULL;
    }
    free(location_dto);
}

cJSON *location_dto_convertToJSON(location_dto_t *location_dto) {
    cJSON *item = cJSON_CreateObject();

    // location_dto->technology
    if(location_dto->technology) { 
    if(cJSON_AddStringToObject(item, "technology", location_dto->technology) == NULL) {
    goto fail; //String
    }
     } 


    // location_dto->network
    if(location_dto->network) { 
    if(cJSON_AddStringToObject(item, "network", location_dto->network) == NULL) {
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

location_dto_t *location_dto_parseFromJSON(cJSON *location_dtoJSON){

    location_dto_t *location_dto_local_var = NULL;

    // location_dto->technology
    cJSON *technology = cJSON_GetObjectItemCaseSensitive(location_dtoJSON, "technology");
    if (technology) { 
    if(!cJSON_IsString(technology))
    {
    goto end; //String
    }
    }

    // location_dto->network
    cJSON *network = cJSON_GetObjectItemCaseSensitive(location_dtoJSON, "network");
    if (network) { 
    if(!cJSON_IsString(network))
    {
    goto end; //String
    }
    }


    location_dto_local_var = location_dto_create (
        technology ? strdup(technology->valuestring) : NULL,
        network ? strdup(network->valuestring) : NULL
        );

    return location_dto_local_var;
end:
    return NULL;

}
