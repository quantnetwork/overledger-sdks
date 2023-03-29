#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sender.h"



sender_t *sender_create(
    char *account_id
    ) {
    sender_t *sender_local_var = malloc(sizeof(sender_t));
    if (!sender_local_var) {
        return NULL;
    }
    sender_local_var->account_id = account_id;

    return sender_local_var;
}


void sender_free(sender_t *sender) {
    if(NULL == sender){
        return ;
    }
    listEntry_t *listEntry;
    if (sender->account_id) {
        free(sender->account_id);
        sender->account_id = NULL;
    }
    free(sender);
}

cJSON *sender_convertToJSON(sender_t *sender) {
    cJSON *item = cJSON_CreateObject();

    // sender->account_id
    if(sender->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", sender->account_id) == NULL) {
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

sender_t *sender_parseFromJSON(cJSON *senderJSON){

    sender_t *sender_local_var = NULL;

    // sender->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(senderJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }


    sender_local_var = sender_create (
        account_id ? strdup(account_id->valuestring) : NULL
        );

    return sender_local_var;
end:
    return NULL;

}
