#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "owner.h"



owner_t *owner_create(
    char *account_id,
    burn_t *burn,
    char *unit
    ) {
    owner_t *owner_local_var = malloc(sizeof(owner_t));
    if (!owner_local_var) {
        return NULL;
    }
    owner_local_var->account_id = account_id;
    owner_local_var->burn = burn;
    owner_local_var->unit = unit;

    return owner_local_var;
}


void owner_free(owner_t *owner) {
    if(NULL == owner){
        return ;
    }
    listEntry_t *listEntry;
    if (owner->account_id) {
        free(owner->account_id);
        owner->account_id = NULL;
    }
    if (owner->burn) {
        burn_free(owner->burn);
        owner->burn = NULL;
    }
    if (owner->unit) {
        free(owner->unit);
        owner->unit = NULL;
    }
    free(owner);
}

cJSON *owner_convertToJSON(owner_t *owner) {
    cJSON *item = cJSON_CreateObject();

    // owner->account_id
    if(owner->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", owner->account_id) == NULL) {
    goto fail; //String
    }
     } 


    // owner->burn
    if(owner->burn) { 
    cJSON *burn_local_JSON = burn_convertToJSON(owner->burn);
    if(burn_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "burn", burn_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // owner->unit
    if(owner->unit) { 
    if(cJSON_AddStringToObject(item, "unit", owner->unit) == NULL) {
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

owner_t *owner_parseFromJSON(cJSON *ownerJSON){

    owner_t *owner_local_var = NULL;

    // owner->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(ownerJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }

    // owner->burn
    cJSON *burn = cJSON_GetObjectItemCaseSensitive(ownerJSON, "burn");
    burn_t *burn_local_nonprim = NULL;
    if (burn) { 
    burn_local_nonprim = burn_parseFromJSON(burn); //nonprimitive
    }

    // owner->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(ownerJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit))
    {
    goto end; //String
    }
    }


    owner_local_var = owner_create (
        account_id ? strdup(account_id->valuestring) : NULL,
        burn ? burn_local_nonprim : NULL,
        unit ? strdup(unit->valuestring) : NULL
        );

    return owner_local_var;
end:
    if (burn_local_nonprim) {
        burn_free(burn_local_nonprim);
        burn_local_nonprim = NULL;
    }
    return NULL;

}
