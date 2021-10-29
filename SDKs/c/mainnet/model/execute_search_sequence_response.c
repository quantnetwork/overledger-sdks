#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "execute_search_sequence_response.h"



execute_search_sequence_response_t *execute_search_sequence_response_create(
    char *sequence,
    location_t *location,
    char *address_id
    ) {
    execute_search_sequence_response_t *execute_search_sequence_response_local_var = malloc(sizeof(execute_search_sequence_response_t));
    if (!execute_search_sequence_response_local_var) {
        return NULL;
    }
    execute_search_sequence_response_local_var->sequence = sequence;
    execute_search_sequence_response_local_var->location = location;
    execute_search_sequence_response_local_var->address_id = address_id;

    return execute_search_sequence_response_local_var;
}


void execute_search_sequence_response_free(execute_search_sequence_response_t *execute_search_sequence_response) {
    if(NULL == execute_search_sequence_response){
        return ;
    }
    listEntry_t *listEntry;
    if (execute_search_sequence_response->sequence) {
        free(execute_search_sequence_response->sequence);
        execute_search_sequence_response->sequence = NULL;
    }
    if (execute_search_sequence_response->location) {
        location_free(execute_search_sequence_response->location);
        execute_search_sequence_response->location = NULL;
    }
    if (execute_search_sequence_response->address_id) {
        free(execute_search_sequence_response->address_id);
        execute_search_sequence_response->address_id = NULL;
    }
    free(execute_search_sequence_response);
}

cJSON *execute_search_sequence_response_convertToJSON(execute_search_sequence_response_t *execute_search_sequence_response) {
    cJSON *item = cJSON_CreateObject();

    // execute_search_sequence_response->sequence
    if(execute_search_sequence_response->sequence) { 
    if(cJSON_AddStringToObject(item, "sequence", execute_search_sequence_response->sequence) == NULL) {
    goto fail; //String
    }
     } 


    // execute_search_sequence_response->location
    if(execute_search_sequence_response->location) { 
    cJSON *location_local_JSON = location_convertToJSON(execute_search_sequence_response->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // execute_search_sequence_response->address_id
    if(execute_search_sequence_response->address_id) { 
    if(cJSON_AddStringToObject(item, "addressId", execute_search_sequence_response->address_id) == NULL) {
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

execute_search_sequence_response_t *execute_search_sequence_response_parseFromJSON(cJSON *execute_search_sequence_responseJSON){

    execute_search_sequence_response_t *execute_search_sequence_response_local_var = NULL;

    // execute_search_sequence_response->sequence
    cJSON *sequence = cJSON_GetObjectItemCaseSensitive(execute_search_sequence_responseJSON, "sequence");
    if (sequence) { 
    if(!cJSON_IsString(sequence))
    {
    goto end; //String
    }
    }

    // execute_search_sequence_response->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(execute_search_sequence_responseJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // execute_search_sequence_response->address_id
    cJSON *address_id = cJSON_GetObjectItemCaseSensitive(execute_search_sequence_responseJSON, "addressId");
    if (address_id) { 
    if(!cJSON_IsString(address_id))
    {
    goto end; //String
    }
    }


    execute_search_sequence_response_local_var = execute_search_sequence_response_create (
        sequence ? strdup(sequence->valuestring) : NULL,
        location ? location_local_nonprim : NULL,
        address_id ? strdup(address_id->valuestring) : NULL
        );

    return execute_search_sequence_response_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
