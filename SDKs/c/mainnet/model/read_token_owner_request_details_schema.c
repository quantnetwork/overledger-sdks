#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "read_token_owner_request_details_schema.h"



read_token_owner_request_details_schema_t *read_token_owner_request_details_schema_create(
    char *token_id,
    char *token_name
    ) {
    read_token_owner_request_details_schema_t *read_token_owner_request_details_schema_local_var = malloc(sizeof(read_token_owner_request_details_schema_t));
    if (!read_token_owner_request_details_schema_local_var) {
        return NULL;
    }
    read_token_owner_request_details_schema_local_var->token_id = token_id;
    read_token_owner_request_details_schema_local_var->token_name = token_name;

    return read_token_owner_request_details_schema_local_var;
}


void read_token_owner_request_details_schema_free(read_token_owner_request_details_schema_t *read_token_owner_request_details_schema) {
    if(NULL == read_token_owner_request_details_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (read_token_owner_request_details_schema->token_id) {
        free(read_token_owner_request_details_schema->token_id);
        read_token_owner_request_details_schema->token_id = NULL;
    }
    if (read_token_owner_request_details_schema->token_name) {
        free(read_token_owner_request_details_schema->token_name);
        read_token_owner_request_details_schema->token_name = NULL;
    }
    free(read_token_owner_request_details_schema);
}

cJSON *read_token_owner_request_details_schema_convertToJSON(read_token_owner_request_details_schema_t *read_token_owner_request_details_schema) {
    cJSON *item = cJSON_CreateObject();

    // read_token_owner_request_details_schema->token_id
    if(read_token_owner_request_details_schema->token_id) { 
    if(cJSON_AddStringToObject(item, "tokenId", read_token_owner_request_details_schema->token_id) == NULL) {
    goto fail; //String
    }
     } 


    // read_token_owner_request_details_schema->token_name
    if(read_token_owner_request_details_schema->token_name) { 
    if(cJSON_AddStringToObject(item, "tokenName", read_token_owner_request_details_schema->token_name) == NULL) {
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

read_token_owner_request_details_schema_t *read_token_owner_request_details_schema_parseFromJSON(cJSON *read_token_owner_request_details_schemaJSON){

    read_token_owner_request_details_schema_t *read_token_owner_request_details_schema_local_var = NULL;

    // read_token_owner_request_details_schema->token_id
    cJSON *token_id = cJSON_GetObjectItemCaseSensitive(read_token_owner_request_details_schemaJSON, "tokenId");
    if (token_id) { 
    if(!cJSON_IsString(token_id))
    {
    goto end; //String
    }
    }

    // read_token_owner_request_details_schema->token_name
    cJSON *token_name = cJSON_GetObjectItemCaseSensitive(read_token_owner_request_details_schemaJSON, "tokenName");
    if (token_name) { 
    if(!cJSON_IsString(token_name))
    {
    goto end; //String
    }
    }


    read_token_owner_request_details_schema_local_var = read_token_owner_request_details_schema_create (
        token_id ? strdup(token_id->valuestring) : NULL,
        token_name ? strdup(token_name->valuestring) : NULL
        );

    return read_token_owner_request_details_schema_local_var;
end:
    return NULL;

}
