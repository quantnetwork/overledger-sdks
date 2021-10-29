#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transfer_schema.h"



transfer_schema_t *transfer_schema_create(
    char *token_id,
    char *token_name
    ) {
    transfer_schema_t *transfer_schema_local_var = malloc(sizeof(transfer_schema_t));
    if (!transfer_schema_local_var) {
        return NULL;
    }
    transfer_schema_local_var->token_id = token_id;
    transfer_schema_local_var->token_name = token_name;

    return transfer_schema_local_var;
}


void transfer_schema_free(transfer_schema_t *transfer_schema) {
    if(NULL == transfer_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (transfer_schema->token_id) {
        free(transfer_schema->token_id);
        transfer_schema->token_id = NULL;
    }
    if (transfer_schema->token_name) {
        free(transfer_schema->token_name);
        transfer_schema->token_name = NULL;
    }
    free(transfer_schema);
}

cJSON *transfer_schema_convertToJSON(transfer_schema_t *transfer_schema) {
    cJSON *item = cJSON_CreateObject();

    // transfer_schema->token_id
    if(transfer_schema->token_id) { 
    if(cJSON_AddStringToObject(item, "tokenId", transfer_schema->token_id) == NULL) {
    goto fail; //String
    }
     } 


    // transfer_schema->token_name
    if(transfer_schema->token_name) { 
    if(cJSON_AddStringToObject(item, "tokenName", transfer_schema->token_name) == NULL) {
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

transfer_schema_t *transfer_schema_parseFromJSON(cJSON *transfer_schemaJSON){

    transfer_schema_t *transfer_schema_local_var = NULL;

    // transfer_schema->token_id
    cJSON *token_id = cJSON_GetObjectItemCaseSensitive(transfer_schemaJSON, "tokenId");
    if (token_id) { 
    if(!cJSON_IsString(token_id))
    {
    goto end; //String
    }
    }

    // transfer_schema->token_name
    cJSON *token_name = cJSON_GetObjectItemCaseSensitive(transfer_schemaJSON, "tokenName");
    if (token_name) { 
    if(!cJSON_IsString(token_name))
    {
    goto end; //String
    }
    }


    transfer_schema_local_var = transfer_schema_create (
        token_id ? strdup(token_id->valuestring) : NULL,
        token_name ? strdup(token_name->valuestring) : NULL
        );

    return transfer_schema_local_var;
end:
    return NULL;

}
