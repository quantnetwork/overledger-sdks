#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "secondary_account_additional_owner_schema.h"



secondary_account_additional_owner_schema_t *secondary_account_additional_owner_schema_create(
    char *account_id
    ) {
    secondary_account_additional_owner_schema_t *secondary_account_additional_owner_schema_local_var = malloc(sizeof(secondary_account_additional_owner_schema_t));
    if (!secondary_account_additional_owner_schema_local_var) {
        return NULL;
    }
    secondary_account_additional_owner_schema_local_var->account_id = account_id;

    return secondary_account_additional_owner_schema_local_var;
}


void secondary_account_additional_owner_schema_free(secondary_account_additional_owner_schema_t *secondary_account_additional_owner_schema) {
    if(NULL == secondary_account_additional_owner_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (secondary_account_additional_owner_schema->account_id) {
        free(secondary_account_additional_owner_schema->account_id);
        secondary_account_additional_owner_schema->account_id = NULL;
    }
    free(secondary_account_additional_owner_schema);
}

cJSON *secondary_account_additional_owner_schema_convertToJSON(secondary_account_additional_owner_schema_t *secondary_account_additional_owner_schema) {
    cJSON *item = cJSON_CreateObject();

    // secondary_account_additional_owner_schema->account_id
    if(secondary_account_additional_owner_schema->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", secondary_account_additional_owner_schema->account_id) == NULL) {
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

secondary_account_additional_owner_schema_t *secondary_account_additional_owner_schema_parseFromJSON(cJSON *secondary_account_additional_owner_schemaJSON){

    secondary_account_additional_owner_schema_t *secondary_account_additional_owner_schema_local_var = NULL;

    // secondary_account_additional_owner_schema->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(secondary_account_additional_owner_schemaJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }


    secondary_account_additional_owner_schema_local_var = secondary_account_additional_owner_schema_create (
        account_id ? strdup(account_id->valuestring) : NULL
        );

    return secondary_account_additional_owner_schema_local_var;
end:
    return NULL;

}
