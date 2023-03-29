#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "origin_transfer_schema.h"



origin_transfer_schema_t *origin_transfer_schema_create(
    char *origin_id
    ) {
    origin_transfer_schema_t *origin_transfer_schema_local_var = malloc(sizeof(origin_transfer_schema_t));
    if (!origin_transfer_schema_local_var) {
        return NULL;
    }
    origin_transfer_schema_local_var->origin_id = origin_id;

    return origin_transfer_schema_local_var;
}


void origin_transfer_schema_free(origin_transfer_schema_t *origin_transfer_schema) {
    if(NULL == origin_transfer_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (origin_transfer_schema->origin_id) {
        free(origin_transfer_schema->origin_id);
        origin_transfer_schema->origin_id = NULL;
    }
    free(origin_transfer_schema);
}

cJSON *origin_transfer_schema_convertToJSON(origin_transfer_schema_t *origin_transfer_schema) {
    cJSON *item = cJSON_CreateObject();

    // origin_transfer_schema->origin_id
    if(origin_transfer_schema->origin_id) { 
    if(cJSON_AddStringToObject(item, "originId", origin_transfer_schema->origin_id) == NULL) {
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

origin_transfer_schema_t *origin_transfer_schema_parseFromJSON(cJSON *origin_transfer_schemaJSON){

    origin_transfer_schema_t *origin_transfer_schema_local_var = NULL;

    // origin_transfer_schema->origin_id
    cJSON *origin_id = cJSON_GetObjectItemCaseSensitive(origin_transfer_schemaJSON, "originId");
    if (origin_id) { 
    if(!cJSON_IsString(origin_id))
    {
    goto end; //String
    }
    }


    origin_transfer_schema_local_var = origin_transfer_schema_create (
        origin_id ? strdup(origin_id->valuestring) : NULL
        );

    return origin_transfer_schema_local_var;
end:
    return NULL;

}
