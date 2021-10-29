#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "execute_search_block_response.h"



execute_search_block_response_t *execute_search_block_response_create(
    location_t *location,
    block_t *block,
    status_t *status
    ) {
    execute_search_block_response_t *execute_search_block_response_local_var = malloc(sizeof(execute_search_block_response_t));
    if (!execute_search_block_response_local_var) {
        return NULL;
    }
    execute_search_block_response_local_var->location = location;
    execute_search_block_response_local_var->block = block;
    execute_search_block_response_local_var->status = status;

    return execute_search_block_response_local_var;
}


void execute_search_block_response_free(execute_search_block_response_t *execute_search_block_response) {
    if(NULL == execute_search_block_response){
        return ;
    }
    listEntry_t *listEntry;
    if (execute_search_block_response->location) {
        location_free(execute_search_block_response->location);
        execute_search_block_response->location = NULL;
    }
    if (execute_search_block_response->block) {
        block_free(execute_search_block_response->block);
        execute_search_block_response->block = NULL;
    }
    if (execute_search_block_response->status) {
        status_free(execute_search_block_response->status);
        execute_search_block_response->status = NULL;
    }
    free(execute_search_block_response);
}

cJSON *execute_search_block_response_convertToJSON(execute_search_block_response_t *execute_search_block_response) {
    cJSON *item = cJSON_CreateObject();

    // execute_search_block_response->location
    if(execute_search_block_response->location) { 
    cJSON *location_local_JSON = location_convertToJSON(execute_search_block_response->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // execute_search_block_response->block
    if(execute_search_block_response->block) { 
    cJSON *block_local_JSON = block_convertToJSON(execute_search_block_response->block);
    if(block_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "block", block_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // execute_search_block_response->status
    if(execute_search_block_response->status) { 
    cJSON *status_local_JSON = status_convertToJSON(execute_search_block_response->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
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

execute_search_block_response_t *execute_search_block_response_parseFromJSON(cJSON *execute_search_block_responseJSON){

    execute_search_block_response_t *execute_search_block_response_local_var = NULL;

    // execute_search_block_response->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(execute_search_block_responseJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // execute_search_block_response->block
    cJSON *block = cJSON_GetObjectItemCaseSensitive(execute_search_block_responseJSON, "block");
    block_t *block_local_nonprim = NULL;
    if (block) { 
    block_local_nonprim = block_parseFromJSON(block); //nonprimitive
    }

    // execute_search_block_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(execute_search_block_responseJSON, "status");
    status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = status_parseFromJSON(status); //nonprimitive
    }


    execute_search_block_response_local_var = execute_search_block_response_create (
        location ? location_local_nonprim : NULL,
        block ? block_local_nonprim : NULL,
        status ? status_local_nonprim : NULL
        );

    return execute_search_block_response_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    if (block_local_nonprim) {
        block_free(block_local_nonprim);
        block_local_nonprim = NULL;
    }
    if (status_local_nonprim) {
        status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
