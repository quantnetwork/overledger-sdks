#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status.h"



status_t *status_create(
    char *description,
    char *code,
    char *message,
    char *value,
    char *timestamp
    ) {
    status_t *status_local_var = malloc(sizeof(status_t));
    if (!status_local_var) {
        return NULL;
    }
    status_local_var->description = description;
    status_local_var->code = code;
    status_local_var->message = message;
    status_local_var->value = value;
    status_local_var->timestamp = timestamp;

    return status_local_var;
}


void status_free(status_t *status) {
    if(NULL == status){
        return ;
    }
    listEntry_t *listEntry;
    if (status->description) {
        free(status->description);
        status->description = NULL;
    }
    if (status->code) {
        free(status->code);
        status->code = NULL;
    }
    if (status->message) {
        free(status->message);
        status->message = NULL;
    }
    if (status->value) {
        free(status->value);
        status->value = NULL;
    }
    if (status->timestamp) {
        free(status->timestamp);
        status->timestamp = NULL;
    }
    free(status);
}

cJSON *status_convertToJSON(status_t *status) {
    cJSON *item = cJSON_CreateObject();

    // status->description
    if(status->description) { 
    if(cJSON_AddStringToObject(item, "description", status->description) == NULL) {
    goto fail; //String
    }
     } 


    // status->code
    if(status->code) { 
    if(cJSON_AddStringToObject(item, "code", status->code) == NULL) {
    goto fail; //String
    }
     } 


    // status->message
    if(status->message) { 
    if(cJSON_AddStringToObject(item, "message", status->message) == NULL) {
    goto fail; //String
    }
     } 


    // status->value
    if(status->value) { 
    if(cJSON_AddStringToObject(item, "value", status->value) == NULL) {
    goto fail; //String
    }
     } 


    // status->timestamp
    if(status->timestamp) { 
    if(cJSON_AddStringToObject(item, "timestamp", status->timestamp) == NULL) {
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

status_t *status_parseFromJSON(cJSON *statusJSON){

    status_t *status_local_var = NULL;

    // status->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(statusJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }
    }

    // status->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(statusJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code))
    {
    goto end; //String
    }
    }

    // status->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(statusJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // status->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(statusJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }

    // status->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(statusJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp))
    {
    goto end; //String
    }
    }


    status_local_var = status_create (
        description ? strdup(description->valuestring) : NULL,
        code ? strdup(code->valuestring) : NULL,
        message ? strdup(message->valuestring) : NULL,
        value ? strdup(value->valuestring) : NULL,
        timestamp ? strdup(timestamp->valuestring) : NULL
        );

    return status_local_var;
end:
    return NULL;

}
