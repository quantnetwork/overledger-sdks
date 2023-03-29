#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signer_account.h"



signer_account_t *signer_account_create(
    char *account_id
    ) {
    signer_account_t *signer_account_local_var = malloc(sizeof(signer_account_t));
    if (!signer_account_local_var) {
        return NULL;
    }
    signer_account_local_var->account_id = account_id;

    return signer_account_local_var;
}


void signer_account_free(signer_account_t *signer_account) {
    if(NULL == signer_account){
        return ;
    }
    listEntry_t *listEntry;
    if (signer_account->account_id) {
        free(signer_account->account_id);
        signer_account->account_id = NULL;
    }
    free(signer_account);
}

cJSON *signer_account_convertToJSON(signer_account_t *signer_account) {
    cJSON *item = cJSON_CreateObject();

    // signer_account->account_id
    if(signer_account->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", signer_account->account_id) == NULL) {
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

signer_account_t *signer_account_parseFromJSON(cJSON *signer_accountJSON){

    signer_account_t *signer_account_local_var = NULL;

    // signer_account->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(signer_accountJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }


    signer_account_local_var = signer_account_create (
        account_id ? strdup(account_id->valuestring) : NULL
        );

    return signer_account_local_var;
end:
    return NULL;

}
