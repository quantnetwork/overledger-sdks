#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "block_size.h"



block_size_t *block_size_create(
    char *type,
    char *value,
    char *key
    ) {
    block_size_t *block_size_local_var = malloc(sizeof(block_size_t));
    if (!block_size_local_var) {
        return NULL;
    }
    block_size_local_var->type = type;
    block_size_local_var->value = value;
    block_size_local_var->key = key;

    return block_size_local_var;
}


void block_size_free(block_size_t *block_size) {
    if(NULL == block_size){
        return ;
    }
    listEntry_t *listEntry;
    if (block_size->type) {
        free(block_size->type);
        block_size->type = NULL;
    }
    if (block_size->value) {
        free(block_size->value);
        block_size->value = NULL;
    }
    if (block_size->key) {
        free(block_size->key);
        block_size->key = NULL;
    }
    free(block_size);
}

cJSON *block_size_convertToJSON(block_size_t *block_size) {
    cJSON *item = cJSON_CreateObject();

    // block_size->type
    if(block_size->type) { 
    if(cJSON_AddStringToObject(item, "type", block_size->type) == NULL) {
    goto fail; //String
    }
     } 


    // block_size->value
    if(block_size->value) { 
    if(cJSON_AddStringToObject(item, "value", block_size->value) == NULL) {
    goto fail; //String
    }
     } 


    // block_size->key
    if(block_size->key) { 
    if(cJSON_AddStringToObject(item, "key", block_size->key) == NULL) {
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

block_size_t *block_size_parseFromJSON(cJSON *block_sizeJSON){

    block_size_t *block_size_local_var = NULL;

    // block_size->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(block_sizeJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // block_size->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(block_sizeJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }

    // block_size->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(block_sizeJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key))
    {
    goto end; //String
    }
    }


    block_size_local_var = block_size_create (
        type ? strdup(type->valuestring) : NULL,
        value ? strdup(value->valuestring) : NULL,
        key ? strdup(key->valuestring) : NULL
        );

    return block_size_local_var;
end:
    return NULL;

}
