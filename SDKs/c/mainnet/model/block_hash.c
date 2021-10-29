#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "block_hash.h"



block_hash_t *block_hash_create(
    char *type,
    char *value
    ) {
    block_hash_t *block_hash_local_var = malloc(sizeof(block_hash_t));
    if (!block_hash_local_var) {
        return NULL;
    }
    block_hash_local_var->type = type;
    block_hash_local_var->value = value;

    return block_hash_local_var;
}


void block_hash_free(block_hash_t *block_hash) {
    if(NULL == block_hash){
        return ;
    }
    listEntry_t *listEntry;
    if (block_hash->type) {
        free(block_hash->type);
        block_hash->type = NULL;
    }
    if (block_hash->value) {
        free(block_hash->value);
        block_hash->value = NULL;
    }
    free(block_hash);
}

cJSON *block_hash_convertToJSON(block_hash_t *block_hash) {
    cJSON *item = cJSON_CreateObject();

    // block_hash->type
    if(block_hash->type) { 
    if(cJSON_AddStringToObject(item, "type", block_hash->type) == NULL) {
    goto fail; //String
    }
     } 


    // block_hash->value
    if(block_hash->value) { 
    if(cJSON_AddStringToObject(item, "value", block_hash->value) == NULL) {
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

block_hash_t *block_hash_parseFromJSON(cJSON *block_hashJSON){

    block_hash_t *block_hash_local_var = NULL;

    // block_hash->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(block_hashJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // block_hash->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(block_hashJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }


    block_hash_local_var = block_hash_create (
        type ? strdup(type->valuestring) : NULL,
        value ? strdup(value->valuestring) : NULL
        );

    return block_hash_local_var;
end:
    return NULL;

}
