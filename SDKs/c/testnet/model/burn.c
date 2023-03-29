#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "burn.h"



burn_t *burn_create(
    char *token_name,
    char *amount,
    char *unit,
    char *metadata,
    char *token_id
    ) {
    burn_t *burn_local_var = malloc(sizeof(burn_t));
    if (!burn_local_var) {
        return NULL;
    }
    burn_local_var->token_name = token_name;
    burn_local_var->amount = amount;
    burn_local_var->unit = unit;
    burn_local_var->metadata = metadata;
    burn_local_var->token_id = token_id;

    return burn_local_var;
}


void burn_free(burn_t *burn) {
    if(NULL == burn){
        return ;
    }
    listEntry_t *listEntry;
    if (burn->token_name) {
        free(burn->token_name);
        burn->token_name = NULL;
    }
    if (burn->amount) {
        free(burn->amount);
        burn->amount = NULL;
    }
    if (burn->unit) {
        free(burn->unit);
        burn->unit = NULL;
    }
    if (burn->metadata) {
        free(burn->metadata);
        burn->metadata = NULL;
    }
    if (burn->token_id) {
        free(burn->token_id);
        burn->token_id = NULL;
    }
    free(burn);
}

cJSON *burn_convertToJSON(burn_t *burn) {
    cJSON *item = cJSON_CreateObject();

    // burn->token_name
    if(burn->token_name) { 
    if(cJSON_AddStringToObject(item, "tokenName", burn->token_name) == NULL) {
    goto fail; //String
    }
     } 


    // burn->amount
    if(burn->amount) { 
    if(cJSON_AddStringToObject(item, "amount", burn->amount) == NULL) {
    goto fail; //String
    }
     } 


    // burn->unit
    if(burn->unit) { 
    if(cJSON_AddStringToObject(item, "unit", burn->unit) == NULL) {
    goto fail; //String
    }
     } 


    // burn->metadata
    if(burn->metadata) { 
    if(cJSON_AddStringToObject(item, "metadata", burn->metadata) == NULL) {
    goto fail; //String
    }
     } 


    // burn->token_id
    if(burn->token_id) { 
    if(cJSON_AddStringToObject(item, "tokenId", burn->token_id) == NULL) {
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

burn_t *burn_parseFromJSON(cJSON *burnJSON){

    burn_t *burn_local_var = NULL;

    // burn->token_name
    cJSON *token_name = cJSON_GetObjectItemCaseSensitive(burnJSON, "tokenName");
    if (token_name) { 
    if(!cJSON_IsString(token_name))
    {
    goto end; //String
    }
    }

    // burn->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(burnJSON, "amount");
    if (amount) { 
    if(!cJSON_IsString(amount))
    {
    goto end; //String
    }
    }

    // burn->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(burnJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit))
    {
    goto end; //String
    }
    }

    // burn->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(burnJSON, "metadata");
    if (metadata) { 
    if(!cJSON_IsString(metadata))
    {
    goto end; //String
    }
    }

    // burn->token_id
    cJSON *token_id = cJSON_GetObjectItemCaseSensitive(burnJSON, "tokenId");
    if (token_id) { 
    if(!cJSON_IsString(token_id))
    {
    goto end; //String
    }
    }


    burn_local_var = burn_create (
        token_name ? strdup(token_name->valuestring) : NULL,
        amount ? strdup(amount->valuestring) : NULL,
        unit ? strdup(unit->valuestring) : NULL,
        metadata ? strdup(metadata->valuestring) : NULL,
        token_id ? strdup(token_id->valuestring) : NULL
        );

    return burn_local_var;
end:
    return NULL;

}
