#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "error.h"



error_t *error_create(
    int code,
    char *message,
    char *service,
    long timestamp
    ) {
    error_t *error_local_var = malloc(sizeof(error_t));
    if (!error_local_var) {
        return NULL;
    }
    error_local_var->code = code;
    error_local_var->message = message;
    error_local_var->service = service;
    error_local_var->timestamp = timestamp;

    return error_local_var;
}


void error_free(error_t *error) {
    if(NULL == error){
        return ;
    }
    listEntry_t *listEntry;
    if (error->message) {
        free(error->message);
        error->message = NULL;
    }
    if (error->service) {
        free(error->service);
        error->service = NULL;
    }
    free(error);
}

cJSON *error_convertToJSON(error_t *error) {
    cJSON *item = cJSON_CreateObject();

    // error->code
    if(error->code) { 
    if(cJSON_AddNumberToObject(item, "code", error->code) == NULL) {
    goto fail; //Numeric
    }
     } 


    // error->message
    if(error->message) { 
    if(cJSON_AddStringToObject(item, "message", error->message) == NULL) {
    goto fail; //String
    }
     } 


    // error->service
    if(error->service) { 
    if(cJSON_AddStringToObject(item, "service", error->service) == NULL) {
    goto fail; //String
    }
     } 


    // error->timestamp
    if(error->timestamp) { 
    if(cJSON_AddNumberToObject(item, "timestamp", error->timestamp) == NULL) {
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

error_t *error_parseFromJSON(cJSON *errorJSON){

    error_t *error_local_var = NULL;

    // error->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(errorJSON, "code");
    if (code) { 
    if(!cJSON_IsNumber(code))
    {
    goto end; //Numeric
    }
    }

    // error->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(errorJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // error->service
    cJSON *service = cJSON_GetObjectItemCaseSensitive(errorJSON, "service");
    if (service) { 
    if(!cJSON_IsString(service))
    {
    goto end; //String
    }
    }

    // error->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(errorJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsNumber(timestamp))
    {
    goto end; //Numeric
    }
    }


    error_local_var = error_create (
        code ? code->valuedouble : 0,
        message ? strdup(message->valuestring) : NULL,
        service ? strdup(service->valuestring) : NULL,
        timestamp ? timestamp->valuedouble : 0
        );

    return error_local_var;
end:
    return NULL;

}
