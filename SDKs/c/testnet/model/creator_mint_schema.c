#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creator_mint_schema.h"



creator_mint_schema_t *creator_mint_schema_create(
    char *account_id
    ) {
    creator_mint_schema_t *creator_mint_schema_local_var = malloc(sizeof(creator_mint_schema_t));
    if (!creator_mint_schema_local_var) {
        return NULL;
    }
    creator_mint_schema_local_var->account_id = account_id;

    return creator_mint_schema_local_var;
}


void creator_mint_schema_free(creator_mint_schema_t *creator_mint_schema) {
    if(NULL == creator_mint_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (creator_mint_schema->account_id) {
        free(creator_mint_schema->account_id);
        creator_mint_schema->account_id = NULL;
    }
    free(creator_mint_schema);
}

cJSON *creator_mint_schema_convertToJSON(creator_mint_schema_t *creator_mint_schema) {
    cJSON *item = cJSON_CreateObject();

    // creator_mint_schema->account_id
    if(creator_mint_schema->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", creator_mint_schema->account_id) == NULL) {
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

creator_mint_schema_t *creator_mint_schema_parseFromJSON(cJSON *creator_mint_schemaJSON){

    creator_mint_schema_t *creator_mint_schema_local_var = NULL;

    // creator_mint_schema->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(creator_mint_schemaJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }


    creator_mint_schema_local_var = creator_mint_schema_create (
        account_id ? strdup(account_id->valuestring) : NULL
        );

    return creator_mint_schema_local_var;
end:
    return NULL;

}
