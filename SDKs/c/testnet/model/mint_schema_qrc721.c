#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mint_schema_qrc721.h"



mint_schema_qrc721_t *mint_schema_qrc721_create(
    char *token_id,
    char *token_name,
    char *metadata
    ) {
    mint_schema_qrc721_t *mint_schema_qrc721_local_var = malloc(sizeof(mint_schema_qrc721_t));
    if (!mint_schema_qrc721_local_var) {
        return NULL;
    }
    mint_schema_qrc721_local_var->token_id = token_id;
    mint_schema_qrc721_local_var->token_name = token_name;
    mint_schema_qrc721_local_var->metadata = metadata;

    return mint_schema_qrc721_local_var;
}


void mint_schema_qrc721_free(mint_schema_qrc721_t *mint_schema_qrc721) {
    if(NULL == mint_schema_qrc721){
        return ;
    }
    listEntry_t *listEntry;
    if (mint_schema_qrc721->token_id) {
        free(mint_schema_qrc721->token_id);
        mint_schema_qrc721->token_id = NULL;
    }
    if (mint_schema_qrc721->token_name) {
        free(mint_schema_qrc721->token_name);
        mint_schema_qrc721->token_name = NULL;
    }
    if (mint_schema_qrc721->metadata) {
        free(mint_schema_qrc721->metadata);
        mint_schema_qrc721->metadata = NULL;
    }
    free(mint_schema_qrc721);
}

cJSON *mint_schema_qrc721_convertToJSON(mint_schema_qrc721_t *mint_schema_qrc721) {
    cJSON *item = cJSON_CreateObject();

    // mint_schema_qrc721->token_id
    if(mint_schema_qrc721->token_id) { 
    if(cJSON_AddStringToObject(item, "tokenId", mint_schema_qrc721->token_id) == NULL) {
    goto fail; //String
    }
     } 


    // mint_schema_qrc721->token_name
    if(mint_schema_qrc721->token_name) { 
    if(cJSON_AddStringToObject(item, "tokenName", mint_schema_qrc721->token_name) == NULL) {
    goto fail; //String
    }
     } 


    // mint_schema_qrc721->metadata
    if(mint_schema_qrc721->metadata) { 
    if(cJSON_AddStringToObject(item, "metadata", mint_schema_qrc721->metadata) == NULL) {
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

mint_schema_qrc721_t *mint_schema_qrc721_parseFromJSON(cJSON *mint_schema_qrc721JSON){

    mint_schema_qrc721_t *mint_schema_qrc721_local_var = NULL;

    // mint_schema_qrc721->token_id
    cJSON *token_id = cJSON_GetObjectItemCaseSensitive(mint_schema_qrc721JSON, "tokenId");
    if (token_id) { 
    if(!cJSON_IsString(token_id))
    {
    goto end; //String
    }
    }

    // mint_schema_qrc721->token_name
    cJSON *token_name = cJSON_GetObjectItemCaseSensitive(mint_schema_qrc721JSON, "tokenName");
    if (token_name) { 
    if(!cJSON_IsString(token_name))
    {
    goto end; //String
    }
    }

    // mint_schema_qrc721->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(mint_schema_qrc721JSON, "metadata");
    if (metadata) { 
    if(!cJSON_IsString(metadata))
    {
    goto end; //String
    }
    }


    mint_schema_qrc721_local_var = mint_schema_qrc721_create (
        token_id ? strdup(token_id->valuestring) : NULL,
        token_name ? strdup(token_name->valuestring) : NULL,
        metadata ? strdup(metadata->valuestring) : NULL
        );

    return mint_schema_qrc721_local_var;
end:
    return NULL;

}
