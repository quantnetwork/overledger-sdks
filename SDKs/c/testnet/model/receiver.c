#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "receiver.h"



receiver_t *receiver_create(
    char *account_id,
    transfer_t *transfer
    ) {
    receiver_t *receiver_local_var = malloc(sizeof(receiver_t));
    if (!receiver_local_var) {
        return NULL;
    }
    receiver_local_var->account_id = account_id;
    receiver_local_var->transfer = transfer;

    return receiver_local_var;
}


void receiver_free(receiver_t *receiver) {
    if(NULL == receiver){
        return ;
    }
    listEntry_t *listEntry;
    if (receiver->account_id) {
        free(receiver->account_id);
        receiver->account_id = NULL;
    }
    if (receiver->transfer) {
        transfer_free(receiver->transfer);
        receiver->transfer = NULL;
    }
    free(receiver);
}

cJSON *receiver_convertToJSON(receiver_t *receiver) {
    cJSON *item = cJSON_CreateObject();

    // receiver->account_id
    if(receiver->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", receiver->account_id) == NULL) {
    goto fail; //String
    }
     } 


    // receiver->transfer
    if(receiver->transfer) { 
    cJSON *transfer_local_JSON = transfer_convertToJSON(receiver->transfer);
    if(transfer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "transfer", transfer_local_JSON);
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

receiver_t *receiver_parseFromJSON(cJSON *receiverJSON){

    receiver_t *receiver_local_var = NULL;

    // receiver->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(receiverJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }

    // receiver->transfer
    cJSON *transfer = cJSON_GetObjectItemCaseSensitive(receiverJSON, "transfer");
    transfer_t *transfer_local_nonprim = NULL;
    if (transfer) { 
    transfer_local_nonprim = transfer_parseFromJSON(transfer); //nonprimitive
    }


    receiver_local_var = receiver_create (
        account_id ? strdup(account_id->valuestring) : NULL,
        transfer ? transfer_local_nonprim : NULL
        );

    return receiver_local_var;
end:
    if (transfer_local_nonprim) {
        transfer_free(transfer_local_nonprim);
        transfer_local_nonprim = NULL;
    }
    return NULL;

}
