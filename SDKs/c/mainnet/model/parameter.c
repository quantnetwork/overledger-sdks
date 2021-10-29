#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "parameter.h"



parameter_t *parameter_create(
    char *type,
    object_t *value,
    char *key
    ) {
    parameter_t *parameter_local_var = malloc(sizeof(parameter_t));
    if (!parameter_local_var) {
        return NULL;
    }
    parameter_local_var->type = type;
    parameter_local_var->value = value;
    parameter_local_var->key = key;

    return parameter_local_var;
}


void parameter_free(parameter_t *parameter) {
    if(NULL == parameter){
        return ;
    }
    listEntry_t *listEntry;
    if (parameter->type) {
        free(parameter->type);
        parameter->type = NULL;
    }
    if (parameter->value) {
        object_free(parameter->value);
        parameter->value = NULL;
    }
    if (parameter->key) {
        free(parameter->key);
        parameter->key = NULL;
    }
    free(parameter);
}

cJSON *parameter_convertToJSON(parameter_t *parameter) {
    cJSON *item = cJSON_CreateObject();

    // parameter->type
    if(parameter->type) { 
    if(cJSON_AddStringToObject(item, "type", parameter->type) == NULL) {
    goto fail; //String
    }
     } 


    // parameter->value
    if(parameter->value) { 
    cJSON *value_object = object_convertToJSON(parameter->value);
    if(value_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "value", value_object);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // parameter->key
    if(parameter->key) { 
    if(cJSON_AddStringToObject(item, "key", parameter->key) == NULL) {
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

parameter_t *parameter_parseFromJSON(cJSON *parameterJSON){

    parameter_t *parameter_local_var = NULL;

    // parameter->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(parameterJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // parameter->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(parameterJSON, "value");
    object_t *value_local_object = NULL;
    if (value) { 
    value_local_object = object_parseFromJSON(value); //object
    }

    // parameter->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(parameterJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key))
    {
    goto end; //String
    }
    }


    parameter_local_var = parameter_create (
        type ? strdup(type->valuestring) : NULL,
        value ? value_local_object : NULL,
        key ? strdup(key->valuestring) : NULL
        );

    return parameter_local_var;
end:
    return NULL;

}
