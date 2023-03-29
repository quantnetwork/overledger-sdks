#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "additional_owner_remove_secondary_schema.h"



additional_owner_remove_secondary_schema_t *additional_owner_remove_secondary_schema_create(
    char *account_id
    ) {
    additional_owner_remove_secondary_schema_t *additional_owner_remove_secondary_schema_local_var = malloc(sizeof(additional_owner_remove_secondary_schema_t));
    if (!additional_owner_remove_secondary_schema_local_var) {
        return NULL;
    }
    additional_owner_remove_secondary_schema_local_var->account_id = account_id;

    return additional_owner_remove_secondary_schema_local_var;
}


void additional_owner_remove_secondary_schema_free(additional_owner_remove_secondary_schema_t *additional_owner_remove_secondary_schema) {
    if(NULL == additional_owner_remove_secondary_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (additional_owner_remove_secondary_schema->account_id) {
        free(additional_owner_remove_secondary_schema->account_id);
        additional_owner_remove_secondary_schema->account_id = NULL;
    }
    free(additional_owner_remove_secondary_schema);
}

cJSON *additional_owner_remove_secondary_schema_convertToJSON(additional_owner_remove_secondary_schema_t *additional_owner_remove_secondary_schema) {
    cJSON *item = cJSON_CreateObject();

    // additional_owner_remove_secondary_schema->account_id
    if(additional_owner_remove_secondary_schema->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", additional_owner_remove_secondary_schema->account_id) == NULL) {
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

additional_owner_remove_secondary_schema_t *additional_owner_remove_secondary_schema_parseFromJSON(cJSON *additional_owner_remove_secondary_schemaJSON){

    additional_owner_remove_secondary_schema_t *additional_owner_remove_secondary_schema_local_var = NULL;

    // additional_owner_remove_secondary_schema->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(additional_owner_remove_secondary_schemaJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }


    additional_owner_remove_secondary_schema_local_var = additional_owner_remove_secondary_schema_create (
        account_id ? strdup(account_id->valuestring) : NULL
        );

    return additional_owner_remove_secondary_schema_local_var;
end:
    return NULL;

}
