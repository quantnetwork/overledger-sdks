#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "owner_remove_secondary_schema.h"



owner_remove_secondary_schema_t *owner_remove_secondary_schema_create(
    char *account_id,
    char *unit
    ) {
    owner_remove_secondary_schema_t *owner_remove_secondary_schema_local_var = malloc(sizeof(owner_remove_secondary_schema_t));
    if (!owner_remove_secondary_schema_local_var) {
        return NULL;
    }
    owner_remove_secondary_schema_local_var->account_id = account_id;
    owner_remove_secondary_schema_local_var->unit = unit;

    return owner_remove_secondary_schema_local_var;
}


void owner_remove_secondary_schema_free(owner_remove_secondary_schema_t *owner_remove_secondary_schema) {
    if(NULL == owner_remove_secondary_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (owner_remove_secondary_schema->account_id) {
        free(owner_remove_secondary_schema->account_id);
        owner_remove_secondary_schema->account_id = NULL;
    }
    if (owner_remove_secondary_schema->unit) {
        free(owner_remove_secondary_schema->unit);
        owner_remove_secondary_schema->unit = NULL;
    }
    free(owner_remove_secondary_schema);
}

cJSON *owner_remove_secondary_schema_convertToJSON(owner_remove_secondary_schema_t *owner_remove_secondary_schema) {
    cJSON *item = cJSON_CreateObject();

    // owner_remove_secondary_schema->account_id
    if(owner_remove_secondary_schema->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", owner_remove_secondary_schema->account_id) == NULL) {
    goto fail; //String
    }
     } 


    // owner_remove_secondary_schema->unit
    if(owner_remove_secondary_schema->unit) { 
    if(cJSON_AddStringToObject(item, "unit", owner_remove_secondary_schema->unit) == NULL) {
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

owner_remove_secondary_schema_t *owner_remove_secondary_schema_parseFromJSON(cJSON *owner_remove_secondary_schemaJSON){

    owner_remove_secondary_schema_t *owner_remove_secondary_schema_local_var = NULL;

    // owner_remove_secondary_schema->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(owner_remove_secondary_schemaJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }

    // owner_remove_secondary_schema->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(owner_remove_secondary_schemaJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit))
    {
    goto end; //String
    }
    }


    owner_remove_secondary_schema_local_var = owner_remove_secondary_schema_create (
        account_id ? strdup(account_id->valuestring) : NULL,
        unit ? strdup(unit->valuestring) : NULL
        );

    return owner_remove_secondary_schema_local_var;
end:
    return NULL;

}
