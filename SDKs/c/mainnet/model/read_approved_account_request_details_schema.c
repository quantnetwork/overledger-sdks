#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "read_approved_account_request_details_schema.h"



read_approved_account_request_details_schema_t *read_approved_account_request_details_schema_create(
    char *token_id,
    char *token_name
    ) {
    read_approved_account_request_details_schema_t *read_approved_account_request_details_schema_local_var = malloc(sizeof(read_approved_account_request_details_schema_t));
    if (!read_approved_account_request_details_schema_local_var) {
        return NULL;
    }
    read_approved_account_request_details_schema_local_var->token_id = token_id;
    read_approved_account_request_details_schema_local_var->token_name = token_name;

    return read_approved_account_request_details_schema_local_var;
}


void read_approved_account_request_details_schema_free(read_approved_account_request_details_schema_t *read_approved_account_request_details_schema) {
    if(NULL == read_approved_account_request_details_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (read_approved_account_request_details_schema->token_id) {
        free(read_approved_account_request_details_schema->token_id);
        read_approved_account_request_details_schema->token_id = NULL;
    }
    if (read_approved_account_request_details_schema->token_name) {
        free(read_approved_account_request_details_schema->token_name);
        read_approved_account_request_details_schema->token_name = NULL;
    }
    free(read_approved_account_request_details_schema);
}

cJSON *read_approved_account_request_details_schema_convertToJSON(read_approved_account_request_details_schema_t *read_approved_account_request_details_schema) {
    cJSON *item = cJSON_CreateObject();

    // read_approved_account_request_details_schema->token_id
    if(read_approved_account_request_details_schema->token_id) { 
    if(cJSON_AddStringToObject(item, "tokenId", read_approved_account_request_details_schema->token_id) == NULL) {
    goto fail; //String
    }
     } 


    // read_approved_account_request_details_schema->token_name
    if(read_approved_account_request_details_schema->token_name) { 
    if(cJSON_AddStringToObject(item, "tokenName", read_approved_account_request_details_schema->token_name) == NULL) {
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

read_approved_account_request_details_schema_t *read_approved_account_request_details_schema_parseFromJSON(cJSON *read_approved_account_request_details_schemaJSON){

    read_approved_account_request_details_schema_t *read_approved_account_request_details_schema_local_var = NULL;

    // read_approved_account_request_details_schema->token_id
    cJSON *token_id = cJSON_GetObjectItemCaseSensitive(read_approved_account_request_details_schemaJSON, "tokenId");
    if (token_id) { 
    if(!cJSON_IsString(token_id))
    {
    goto end; //String
    }
    }

    // read_approved_account_request_details_schema->token_name
    cJSON *token_name = cJSON_GetObjectItemCaseSensitive(read_approved_account_request_details_schemaJSON, "tokenName");
    if (token_name) { 
    if(!cJSON_IsString(token_name))
    {
    goto end; //String
    }
    }


    read_approved_account_request_details_schema_local_var = read_approved_account_request_details_schema_create (
        token_id ? strdup(token_id->valuestring) : NULL,
        token_name ? strdup(token_name->valuestring) : NULL
        );

    return read_approved_account_request_details_schema_local_var;
end:
    return NULL;

}
