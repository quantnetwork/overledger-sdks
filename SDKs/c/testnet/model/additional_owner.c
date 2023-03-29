#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "additional_owner.h"



additional_owner_t *additional_owner_create(
    char *account_id
    ) {
    additional_owner_t *additional_owner_local_var = malloc(sizeof(additional_owner_t));
    if (!additional_owner_local_var) {
        return NULL;
    }
    additional_owner_local_var->account_id = account_id;

    return additional_owner_local_var;
}


void additional_owner_free(additional_owner_t *additional_owner) {
    if(NULL == additional_owner){
        return ;
    }
    listEntry_t *listEntry;
    if (additional_owner->account_id) {
        free(additional_owner->account_id);
        additional_owner->account_id = NULL;
    }
    free(additional_owner);
}

cJSON *additional_owner_convertToJSON(additional_owner_t *additional_owner) {
    cJSON *item = cJSON_CreateObject();

    // additional_owner->account_id
    if(additional_owner->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", additional_owner->account_id) == NULL) {
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

additional_owner_t *additional_owner_parseFromJSON(cJSON *additional_ownerJSON){

    additional_owner_t *additional_owner_local_var = NULL;

    // additional_owner->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(additional_ownerJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }


    additional_owner_local_var = additional_owner_create (
        account_id ? strdup(account_id->valuestring) : NULL
        );

    return additional_owner_local_var;
end:
    return NULL;

}
