#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "error_response_message.h"



error_response_message_t *error_response_message_create(
    int code,
    object_t *error_message_extra_details,
    int sub_code,
    char *log_trace_id,
    char *type,
    char *title,
    char *message
    ) {
    error_response_message_t *error_response_message_local_var = malloc(sizeof(error_response_message_t));
    if (!error_response_message_local_var) {
        return NULL;
    }
    error_response_message_local_var->code = code;
    error_response_message_local_var->error_message_extra_details = error_message_extra_details;
    error_response_message_local_var->sub_code = sub_code;
    error_response_message_local_var->log_trace_id = log_trace_id;
    error_response_message_local_var->type = type;
    error_response_message_local_var->title = title;
    error_response_message_local_var->message = message;

    return error_response_message_local_var;
}


void error_response_message_free(error_response_message_t *error_response_message) {
    if(NULL == error_response_message){
        return ;
    }
    listEntry_t *listEntry;
    if (error_response_message->error_message_extra_details) {
        object_free(error_response_message->error_message_extra_details);
        error_response_message->error_message_extra_details = NULL;
    }
    if (error_response_message->log_trace_id) {
        free(error_response_message->log_trace_id);
        error_response_message->log_trace_id = NULL;
    }
    if (error_response_message->type) {
        free(error_response_message->type);
        error_response_message->type = NULL;
    }
    if (error_response_message->title) {
        free(error_response_message->title);
        error_response_message->title = NULL;
    }
    if (error_response_message->message) {
        free(error_response_message->message);
        error_response_message->message = NULL;
    }
    free(error_response_message);
}

cJSON *error_response_message_convertToJSON(error_response_message_t *error_response_message) {
    cJSON *item = cJSON_CreateObject();

    // error_response_message->code
    if(error_response_message->code) { 
    if(cJSON_AddNumberToObject(item, "code", error_response_message->code) == NULL) {
    goto fail; //Numeric
    }
     } 


    // error_response_message->error_message_extra_details
    if(error_response_message->error_message_extra_details) { 
    cJSON *error_message_extra_details_object = object_convertToJSON(error_response_message->error_message_extra_details);
    if(error_message_extra_details_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "errorMessageExtraDetails", error_message_extra_details_object);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // error_response_message->sub_code
    if(error_response_message->sub_code) { 
    if(cJSON_AddNumberToObject(item, "subCode", error_response_message->sub_code) == NULL) {
    goto fail; //Numeric
    }
     } 


    // error_response_message->log_trace_id
    if(error_response_message->log_trace_id) { 
    if(cJSON_AddStringToObject(item, "logTraceId", error_response_message->log_trace_id) == NULL) {
    goto fail; //String
    }
     } 


    // error_response_message->type
    if(error_response_message->type) { 
    if(cJSON_AddStringToObject(item, "type", error_response_message->type) == NULL) {
    goto fail; //String
    }
     } 


    // error_response_message->title
    if(error_response_message->title) { 
    if(cJSON_AddStringToObject(item, "title", error_response_message->title) == NULL) {
    goto fail; //String
    }
     } 


    // error_response_message->message
    if(error_response_message->message) { 
    if(cJSON_AddStringToObject(item, "message", error_response_message->message) == NULL) {
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

error_response_message_t *error_response_message_parseFromJSON(cJSON *error_response_messageJSON){

    error_response_message_t *error_response_message_local_var = NULL;

    // error_response_message->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(error_response_messageJSON, "code");
    if (code) { 
    if(!cJSON_IsNumber(code))
    {
    goto end; //Numeric
    }
    }

    // error_response_message->error_message_extra_details
    cJSON *error_message_extra_details = cJSON_GetObjectItemCaseSensitive(error_response_messageJSON, "errorMessageExtraDetails");
    object_t *error_message_extra_details_local_object = NULL;
    if (error_message_extra_details) { 
    error_message_extra_details_local_object = object_parseFromJSON(error_message_extra_details); //object
    }

    // error_response_message->sub_code
    cJSON *sub_code = cJSON_GetObjectItemCaseSensitive(error_response_messageJSON, "subCode");
    if (sub_code) { 
    if(!cJSON_IsNumber(sub_code))
    {
    goto end; //Numeric
    }
    }

    // error_response_message->log_trace_id
    cJSON *log_trace_id = cJSON_GetObjectItemCaseSensitive(error_response_messageJSON, "logTraceId");
    if (log_trace_id) { 
    if(!cJSON_IsString(log_trace_id))
    {
    goto end; //String
    }
    }

    // error_response_message->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(error_response_messageJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // error_response_message->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(error_response_messageJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }
    }

    // error_response_message->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(error_response_messageJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }


    error_response_message_local_var = error_response_message_create (
        code ? code->valuedouble : 0,
        error_message_extra_details ? error_message_extra_details_local_object : NULL,
        sub_code ? sub_code->valuedouble : 0,
        log_trace_id ? strdup(log_trace_id->valuestring) : NULL,
        type ? strdup(type->valuestring) : NULL,
        title ? strdup(title->valuestring) : NULL,
        message ? strdup(message->valuestring) : NULL
        );

    return error_response_message_local_var;
end:
    return NULL;

}
