#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "origin_payment_schema.h"



origin_payment_schema_t *origin_payment_schema_create(
    char *origin_id
    ) {
    origin_payment_schema_t *origin_payment_schema_local_var = malloc(sizeof(origin_payment_schema_t));
    if (!origin_payment_schema_local_var) {
        return NULL;
    }
    origin_payment_schema_local_var->origin_id = origin_id;

    return origin_payment_schema_local_var;
}


void origin_payment_schema_free(origin_payment_schema_t *origin_payment_schema) {
    if(NULL == origin_payment_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (origin_payment_schema->origin_id) {
        free(origin_payment_schema->origin_id);
        origin_payment_schema->origin_id = NULL;
    }
    free(origin_payment_schema);
}

cJSON *origin_payment_schema_convertToJSON(origin_payment_schema_t *origin_payment_schema) {
    cJSON *item = cJSON_CreateObject();

    // origin_payment_schema->origin_id
    if (!origin_payment_schema->origin_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "originId", origin_payment_schema->origin_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

origin_payment_schema_t *origin_payment_schema_parseFromJSON(cJSON *origin_payment_schemaJSON){

    origin_payment_schema_t *origin_payment_schema_local_var = NULL;

    // origin_payment_schema->origin_id
    cJSON *origin_id = cJSON_GetObjectItemCaseSensitive(origin_payment_schemaJSON, "originId");
    if (!origin_id) {
        goto end;
    }

    
    if(!cJSON_IsString(origin_id))
    {
    goto end; //String
    }


    origin_payment_schema_local_var = origin_payment_schema_create (
        strdup(origin_id->valuestring)
        );

    return origin_payment_schema_local_var;
end:
    return NULL;

}
