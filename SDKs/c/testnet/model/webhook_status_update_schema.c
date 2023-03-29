#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_status_update_schema.h"



webhook_status_update_schema_t *webhook_status_update_schema_create(
    char *value
    ) {
    webhook_status_update_schema_t *webhook_status_update_schema_local_var = malloc(sizeof(webhook_status_update_schema_t));
    if (!webhook_status_update_schema_local_var) {
        return NULL;
    }
    webhook_status_update_schema_local_var->value = value;

    return webhook_status_update_schema_local_var;
}


void webhook_status_update_schema_free(webhook_status_update_schema_t *webhook_status_update_schema) {
    if(NULL == webhook_status_update_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_status_update_schema->value) {
        free(webhook_status_update_schema->value);
        webhook_status_update_schema->value = NULL;
    }
    free(webhook_status_update_schema);
}

cJSON *webhook_status_update_schema_convertToJSON(webhook_status_update_schema_t *webhook_status_update_schema) {
    cJSON *item = cJSON_CreateObject();

    // webhook_status_update_schema->value
    if(webhook_status_update_schema->value) { 
    if(cJSON_AddStringToObject(item, "value", webhook_status_update_schema->value) == NULL) {
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

webhook_status_update_schema_t *webhook_status_update_schema_parseFromJSON(cJSON *webhook_status_update_schemaJSON){

    webhook_status_update_schema_t *webhook_status_update_schema_local_var = NULL;

    // webhook_status_update_schema->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(webhook_status_update_schemaJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }


    webhook_status_update_schema_local_var = webhook_status_update_schema_create (
        value ? strdup(value->valuestring) : NULL
        );

    return webhook_status_update_schema_local_var;
end:
    return NULL;

}
