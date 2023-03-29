#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "token_read_response_details.h"



token_read_response_details_t *token_read_response_details_create(
    char *name,
    char *type,
    object_t *value
    ) {
    token_read_response_details_t *token_read_response_details_local_var = malloc(sizeof(token_read_response_details_t));
    if (!token_read_response_details_local_var) {
        return NULL;
    }
    token_read_response_details_local_var->name = name;
    token_read_response_details_local_var->type = type;
    token_read_response_details_local_var->value = value;

    return token_read_response_details_local_var;
}


void token_read_response_details_free(token_read_response_details_t *token_read_response_details) {
    if(NULL == token_read_response_details){
        return ;
    }
    listEntry_t *listEntry;
    if (token_read_response_details->name) {
        free(token_read_response_details->name);
        token_read_response_details->name = NULL;
    }
    if (token_read_response_details->type) {
        free(token_read_response_details->type);
        token_read_response_details->type = NULL;
    }
    if (token_read_response_details->value) {
        object_free(token_read_response_details->value);
        token_read_response_details->value = NULL;
    }
    free(token_read_response_details);
}

cJSON *token_read_response_details_convertToJSON(token_read_response_details_t *token_read_response_details) {
    cJSON *item = cJSON_CreateObject();

    // token_read_response_details->name
    if(token_read_response_details->name) { 
    if(cJSON_AddStringToObject(item, "name", token_read_response_details->name) == NULL) {
    goto fail; //String
    }
     } 


    // token_read_response_details->type
    if(token_read_response_details->type) { 
    if(cJSON_AddStringToObject(item, "type", token_read_response_details->type) == NULL) {
    goto fail; //String
    }
     } 


    // token_read_response_details->value
    if(token_read_response_details->value) { 
    cJSON *value_object = object_convertToJSON(token_read_response_details->value);
    if(value_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "value", value_object);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

token_read_response_details_t *token_read_response_details_parseFromJSON(cJSON *token_read_response_detailsJSON){

    token_read_response_details_t *token_read_response_details_local_var = NULL;

    // token_read_response_details->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(token_read_response_detailsJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // token_read_response_details->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(token_read_response_detailsJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // token_read_response_details->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(token_read_response_detailsJSON, "value");
    object_t *value_local_object = NULL;
    if (value) { 
    value_local_object = object_parseFromJSON(value); //object
    }


    token_read_response_details_local_var = token_read_response_details_create (
        name ? strdup(name->valuestring) : NULL,
        type ? strdup(type->valuestring) : NULL,
        value ? value_local_object : NULL
        );

    return token_read_response_details_local_var;
end:
    return NULL;

}
