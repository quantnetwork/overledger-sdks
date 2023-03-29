#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mint.h"



mint_t *mint_create(
    char *token_name,
    char *amount,
    char *unit,
    char *metadata,
    char *token_id
    ) {
    mint_t *mint_local_var = malloc(sizeof(mint_t));
    if (!mint_local_var) {
        return NULL;
    }
    mint_local_var->token_name = token_name;
    mint_local_var->amount = amount;
    mint_local_var->unit = unit;
    mint_local_var->metadata = metadata;
    mint_local_var->token_id = token_id;

    return mint_local_var;
}


void mint_free(mint_t *mint) {
    if(NULL == mint){
        return ;
    }
    listEntry_t *listEntry;
    if (mint->token_name) {
        free(mint->token_name);
        mint->token_name = NULL;
    }
    if (mint->amount) {
        free(mint->amount);
        mint->amount = NULL;
    }
    if (mint->unit) {
        free(mint->unit);
        mint->unit = NULL;
    }
    if (mint->metadata) {
        free(mint->metadata);
        mint->metadata = NULL;
    }
    if (mint->token_id) {
        free(mint->token_id);
        mint->token_id = NULL;
    }
    free(mint);
}

cJSON *mint_convertToJSON(mint_t *mint) {
    cJSON *item = cJSON_CreateObject();

    // mint->token_name
    if(mint->token_name) { 
    if(cJSON_AddStringToObject(item, "tokenName", mint->token_name) == NULL) {
    goto fail; //String
    }
     } 


    // mint->amount
    if(mint->amount) { 
    if(cJSON_AddStringToObject(item, "amount", mint->amount) == NULL) {
    goto fail; //String
    }
     } 


    // mint->unit
    if(mint->unit) { 
    if(cJSON_AddStringToObject(item, "unit", mint->unit) == NULL) {
    goto fail; //String
    }
     } 


    // mint->metadata
    if(mint->metadata) { 
    if(cJSON_AddStringToObject(item, "metadata", mint->metadata) == NULL) {
    goto fail; //String
    }
     } 


    // mint->token_id
    if(mint->token_id) { 
    if(cJSON_AddStringToObject(item, "tokenId", mint->token_id) == NULL) {
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

mint_t *mint_parseFromJSON(cJSON *mintJSON){

    mint_t *mint_local_var = NULL;

    // mint->token_name
    cJSON *token_name = cJSON_GetObjectItemCaseSensitive(mintJSON, "tokenName");
    if (token_name) { 
    if(!cJSON_IsString(token_name))
    {
    goto end; //String
    }
    }

    // mint->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(mintJSON, "amount");
    if (amount) { 
    if(!cJSON_IsString(amount))
    {
    goto end; //String
    }
    }

    // mint->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(mintJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit))
    {
    goto end; //String
    }
    }

    // mint->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(mintJSON, "metadata");
    if (metadata) { 
    if(!cJSON_IsString(metadata))
    {
    goto end; //String
    }
    }

    // mint->token_id
    cJSON *token_id = cJSON_GetObjectItemCaseSensitive(mintJSON, "tokenId");
    if (token_id) { 
    if(!cJSON_IsString(token_id))
    {
    goto end; //String
    }
    }


    mint_local_var = mint_create (
        token_name ? strdup(token_name->valuestring) : NULL,
        amount ? strdup(amount->valuestring) : NULL,
        unit ? strdup(unit->valuestring) : NULL,
        metadata ? strdup(metadata->valuestring) : NULL,
        token_id ? strdup(token_id->valuestring) : NULL
        );

    return mint_local_var;
end:
    return NULL;

}
