#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "owner_burn_schema.h"



owner_burn_schema_t *owner_burn_schema_create(
    char *account_id,
    burn_schema_t *burn
    ) {
    owner_burn_schema_t *owner_burn_schema_local_var = malloc(sizeof(owner_burn_schema_t));
    if (!owner_burn_schema_local_var) {
        return NULL;
    }
    owner_burn_schema_local_var->account_id = account_id;
    owner_burn_schema_local_var->burn = burn;

    return owner_burn_schema_local_var;
}


void owner_burn_schema_free(owner_burn_schema_t *owner_burn_schema) {
    if(NULL == owner_burn_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (owner_burn_schema->account_id) {
        free(owner_burn_schema->account_id);
        owner_burn_schema->account_id = NULL;
    }
    if (owner_burn_schema->burn) {
        burn_schema_free(owner_burn_schema->burn);
        owner_burn_schema->burn = NULL;
    }
    free(owner_burn_schema);
}

cJSON *owner_burn_schema_convertToJSON(owner_burn_schema_t *owner_burn_schema) {
    cJSON *item = cJSON_CreateObject();

    // owner_burn_schema->account_id
    if(owner_burn_schema->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", owner_burn_schema->account_id) == NULL) {
    goto fail; //String
    }
     } 


    // owner_burn_schema->burn
    if(owner_burn_schema->burn) { 
    cJSON *burn_local_JSON = burn_schema_convertToJSON(owner_burn_schema->burn);
    if(burn_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "burn", burn_local_JSON);
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

owner_burn_schema_t *owner_burn_schema_parseFromJSON(cJSON *owner_burn_schemaJSON){

    owner_burn_schema_t *owner_burn_schema_local_var = NULL;

    // owner_burn_schema->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(owner_burn_schemaJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }

    // owner_burn_schema->burn
    cJSON *burn = cJSON_GetObjectItemCaseSensitive(owner_burn_schemaJSON, "burn");
    burn_schema_t *burn_local_nonprim = NULL;
    if (burn) { 
    burn_local_nonprim = burn_schema_parseFromJSON(burn); //nonprimitive
    }


    owner_burn_schema_local_var = owner_burn_schema_create (
        account_id ? strdup(account_id->valuestring) : NULL,
        burn ? burn_local_nonprim : NULL
        );

    return owner_burn_schema_local_var;
end:
    if (burn_local_nonprim) {
        burn_schema_free(burn_local_nonprim);
        burn_local_nonprim = NULL;
    }
    return NULL;

}
