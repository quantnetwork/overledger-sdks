#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "internal_server_error_schema.h"



internal_server_error_schema_t *internal_server_error_schema_create(
    char *path,
    char *error,
    char *message,
    char *timestamp,
    int status
    ) {
    internal_server_error_schema_t *internal_server_error_schema_local_var = malloc(sizeof(internal_server_error_schema_t));
    if (!internal_server_error_schema_local_var) {
        return NULL;
    }
    internal_server_error_schema_local_var->path = path;
    internal_server_error_schema_local_var->error = error;
    internal_server_error_schema_local_var->message = message;
    internal_server_error_schema_local_var->timestamp = timestamp;
    internal_server_error_schema_local_var->status = status;

    return internal_server_error_schema_local_var;
}


void internal_server_error_schema_free(internal_server_error_schema_t *internal_server_error_schema) {
    if(NULL == internal_server_error_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (internal_server_error_schema->path) {
        free(internal_server_error_schema->path);
        internal_server_error_schema->path = NULL;
    }
    if (internal_server_error_schema->error) {
        free(internal_server_error_schema->error);
        internal_server_error_schema->error = NULL;
    }
    if (internal_server_error_schema->message) {
        free(internal_server_error_schema->message);
        internal_server_error_schema->message = NULL;
    }
    if (internal_server_error_schema->timestamp) {
        free(internal_server_error_schema->timestamp);
        internal_server_error_schema->timestamp = NULL;
    }
    free(internal_server_error_schema);
}

cJSON *internal_server_error_schema_convertToJSON(internal_server_error_schema_t *internal_server_error_schema) {
    cJSON *item = cJSON_CreateObject();

    // internal_server_error_schema->path
    if(internal_server_error_schema->path) { 
    if(cJSON_AddStringToObject(item, "path", internal_server_error_schema->path) == NULL) {
    goto fail; //String
    }
     } 


    // internal_server_error_schema->error
    if(internal_server_error_schema->error) { 
    if(cJSON_AddStringToObject(item, "error", internal_server_error_schema->error) == NULL) {
    goto fail; //String
    }
     } 


    // internal_server_error_schema->message
    if(internal_server_error_schema->message) { 
    if(cJSON_AddStringToObject(item, "message", internal_server_error_schema->message) == NULL) {
    goto fail; //String
    }
     } 


    // internal_server_error_schema->timestamp
    if(internal_server_error_schema->timestamp) { 
    if(cJSON_AddStringToObject(item, "timestamp", internal_server_error_schema->timestamp) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // internal_server_error_schema->status
    if(internal_server_error_schema->status) { 
    if(cJSON_AddNumberToObject(item, "status", internal_server_error_schema->status) == NULL) {
    goto fail; //Numeric
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

internal_server_error_schema_t *internal_server_error_schema_parseFromJSON(cJSON *internal_server_error_schemaJSON){

    internal_server_error_schema_t *internal_server_error_schema_local_var = NULL;

    // internal_server_error_schema->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(internal_server_error_schemaJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }
    }

    // internal_server_error_schema->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(internal_server_error_schemaJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error))
    {
    goto end; //String
    }
    }

    // internal_server_error_schema->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(internal_server_error_schemaJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // internal_server_error_schema->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(internal_server_error_schemaJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp))
    {
    goto end; //DateTime
    }
    }

    // internal_server_error_schema->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(internal_server_error_schemaJSON, "status");
    if (status) { 
    if(!cJSON_IsNumber(status))
    {
    goto end; //Numeric
    }
    }


    internal_server_error_schema_local_var = internal_server_error_schema_create (
        path ? strdup(path->valuestring) : NULL,
        error ? strdup(error->valuestring) : NULL,
        message ? strdup(message->valuestring) : NULL,
        timestamp ? strdup(timestamp->valuestring) : NULL,
        status ? status->valuedouble : 0
        );

    return internal_server_error_schema_local_var;
end:
    return NULL;

}
