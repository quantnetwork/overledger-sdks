#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "linked_blocks.h"



linked_blocks_t *linked_blocks_create(
    char *parent,
    char *child
    ) {
    linked_blocks_t *linked_blocks_local_var = malloc(sizeof(linked_blocks_t));
    if (!linked_blocks_local_var) {
        return NULL;
    }
    linked_blocks_local_var->parent = parent;
    linked_blocks_local_var->child = child;

    return linked_blocks_local_var;
}


void linked_blocks_free(linked_blocks_t *linked_blocks) {
    if(NULL == linked_blocks){
        return ;
    }
    listEntry_t *listEntry;
    if (linked_blocks->parent) {
        free(linked_blocks->parent);
        linked_blocks->parent = NULL;
    }
    if (linked_blocks->child) {
        free(linked_blocks->child);
        linked_blocks->child = NULL;
    }
    free(linked_blocks);
}

cJSON *linked_blocks_convertToJSON(linked_blocks_t *linked_blocks) {
    cJSON *item = cJSON_CreateObject();

    // linked_blocks->parent
    if(linked_blocks->parent) { 
    if(cJSON_AddStringToObject(item, "parent", linked_blocks->parent) == NULL) {
    goto fail; //String
    }
     } 


    // linked_blocks->child
    if(linked_blocks->child) { 
    if(cJSON_AddStringToObject(item, "child", linked_blocks->child) == NULL) {
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

linked_blocks_t *linked_blocks_parseFromJSON(cJSON *linked_blocksJSON){

    linked_blocks_t *linked_blocks_local_var = NULL;

    // linked_blocks->parent
    cJSON *parent = cJSON_GetObjectItemCaseSensitive(linked_blocksJSON, "parent");
    if (parent) { 
    if(!cJSON_IsString(parent))
    {
    goto end; //String
    }
    }

    // linked_blocks->child
    cJSON *child = cJSON_GetObjectItemCaseSensitive(linked_blocksJSON, "child");
    if (child) { 
    if(!cJSON_IsString(child))
    {
    goto end; //String
    }
    }


    linked_blocks_local_var = linked_blocks_create (
        parent ? strdup(parent->valuestring) : NULL,
        child ? strdup(child->valuestring) : NULL
        );

    return linked_blocks_local_var;
end:
    return NULL;

}
