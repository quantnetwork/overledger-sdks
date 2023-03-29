#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creator.h"



creator_t *creator_create(
    char *account_id
    ) {
    creator_t *creator_local_var = malloc(sizeof(creator_t));
    if (!creator_local_var) {
        return NULL;
    }
    creator_local_var->account_id = account_id;

    return creator_local_var;
}


void creator_free(creator_t *creator) {
    if(NULL == creator){
        return ;
    }
    listEntry_t *listEntry;
    if (creator->account_id) {
        free(creator->account_id);
        creator->account_id = NULL;
    }
    free(creator);
}

cJSON *creator_convertToJSON(creator_t *creator) {
    cJSON *item = cJSON_CreateObject();

    // creator->account_id
    if(creator->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", creator->account_id) == NULL) {
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

creator_t *creator_parseFromJSON(cJSON *creatorJSON){

    creator_t *creator_local_var = NULL;

    // creator->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(creatorJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }


    creator_local_var = creator_create (
        account_id ? strdup(account_id->valuestring) : NULL
        );

    return creator_local_var;
end:
    return NULL;

}
