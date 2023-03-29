#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transfer.h"



transfer_t *transfer_create(
    char *token_id,
    char *token_name
    ) {
    transfer_t *transfer_local_var = malloc(sizeof(transfer_t));
    if (!transfer_local_var) {
        return NULL;
    }
    transfer_local_var->token_id = token_id;
    transfer_local_var->token_name = token_name;

    return transfer_local_var;
}


void transfer_free(transfer_t *transfer) {
    if(NULL == transfer){
        return ;
    }
    listEntry_t *listEntry;
    if (transfer->token_id) {
        free(transfer->token_id);
        transfer->token_id = NULL;
    }
    if (transfer->token_name) {
        free(transfer->token_name);
        transfer->token_name = NULL;
    }
    free(transfer);
}

cJSON *transfer_convertToJSON(transfer_t *transfer) {
    cJSON *item = cJSON_CreateObject();

    // transfer->token_id
    if(transfer->token_id) { 
    if(cJSON_AddStringToObject(item, "tokenId", transfer->token_id) == NULL) {
    goto fail; //String
    }
     } 


    // transfer->token_name
    if(transfer->token_name) { 
    if(cJSON_AddStringToObject(item, "tokenName", transfer->token_name) == NULL) {
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

transfer_t *transfer_parseFromJSON(cJSON *transferJSON){

    transfer_t *transfer_local_var = NULL;

    // transfer->token_id
    cJSON *token_id = cJSON_GetObjectItemCaseSensitive(transferJSON, "tokenId");
    if (token_id) { 
    if(!cJSON_IsString(token_id))
    {
    goto end; //String
    }
    }

    // transfer->token_name
    cJSON *token_name = cJSON_GetObjectItemCaseSensitive(transferJSON, "tokenName");
    if (token_name) { 
    if(!cJSON_IsString(token_name))
    {
    goto end; //String
    }
    }


    transfer_local_var = transfer_create (
        token_id ? strdup(token_id->valuestring) : NULL,
        token_name ? strdup(token_name->valuestring) : NULL
        );

    return transfer_local_var;
end:
    return NULL;

}
