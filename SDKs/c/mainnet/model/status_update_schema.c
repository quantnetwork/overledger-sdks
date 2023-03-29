#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status_update_schema.h"



status_update_schema_t *status_update_schema_create(
    char *value
    ) {
    status_update_schema_t *status_update_schema_local_var = malloc(sizeof(status_update_schema_t));
    if (!status_update_schema_local_var) {
        return NULL;
    }
    status_update_schema_local_var->value = value;

    return status_update_schema_local_var;
}


void status_update_schema_free(status_update_schema_t *status_update_schema) {
    if(NULL == status_update_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (status_update_schema->value) {
        free(status_update_schema->value);
        status_update_schema->value = NULL;
    }
    free(status_update_schema);
}

cJSON *status_update_schema_convertToJSON(status_update_schema_t *status_update_schema) {
    cJSON *item = cJSON_CreateObject();

    // status_update_schema->value
    if(status_update_schema->value) { 
    if(cJSON_AddStringToObject(item, "value", status_update_schema->value) == NULL) {
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

status_update_schema_t *status_update_schema_parseFromJSON(cJSON *status_update_schemaJSON){

    status_update_schema_t *status_update_schema_local_var = NULL;

    // status_update_schema->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(status_update_schemaJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }


    status_update_schema_local_var = status_update_schema_create (
        value ? strdup(value->valuestring) : NULL
        );

    return status_update_schema_local_var;
end:
    return NULL;

}
