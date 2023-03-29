#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "remove_secondary_account_details_schema.h"



remove_secondary_account_details_schema_t *remove_secondary_account_details_schema_create(
    owner_remove_secondary_schema_t *owner,
    additional_owner_remove_secondary_schema_t *additional_owner,
    char *message,
    char *overledger_signing_type
    ) {
    remove_secondary_account_details_schema_t *remove_secondary_account_details_schema_local_var = malloc(sizeof(remove_secondary_account_details_schema_t));
    if (!remove_secondary_account_details_schema_local_var) {
        return NULL;
    }
    remove_secondary_account_details_schema_local_var->owner = owner;
    remove_secondary_account_details_schema_local_var->additional_owner = additional_owner;
    remove_secondary_account_details_schema_local_var->message = message;
    remove_secondary_account_details_schema_local_var->overledger_signing_type = overledger_signing_type;

    return remove_secondary_account_details_schema_local_var;
}


void remove_secondary_account_details_schema_free(remove_secondary_account_details_schema_t *remove_secondary_account_details_schema) {
    if(NULL == remove_secondary_account_details_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (remove_secondary_account_details_schema->owner) {
        owner_remove_secondary_schema_free(remove_secondary_account_details_schema->owner);
        remove_secondary_account_details_schema->owner = NULL;
    }
    if (remove_secondary_account_details_schema->additional_owner) {
        additional_owner_remove_secondary_schema_free(remove_secondary_account_details_schema->additional_owner);
        remove_secondary_account_details_schema->additional_owner = NULL;
    }
    if (remove_secondary_account_details_schema->message) {
        free(remove_secondary_account_details_schema->message);
        remove_secondary_account_details_schema->message = NULL;
    }
    if (remove_secondary_account_details_schema->overledger_signing_type) {
        free(remove_secondary_account_details_schema->overledger_signing_type);
        remove_secondary_account_details_schema->overledger_signing_type = NULL;
    }
    free(remove_secondary_account_details_schema);
}

cJSON *remove_secondary_account_details_schema_convertToJSON(remove_secondary_account_details_schema_t *remove_secondary_account_details_schema) {
    cJSON *item = cJSON_CreateObject();

    // remove_secondary_account_details_schema->owner
    if(remove_secondary_account_details_schema->owner) { 
    cJSON *owner_local_JSON = owner_remove_secondary_schema_convertToJSON(remove_secondary_account_details_schema->owner);
    if(owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "owner", owner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // remove_secondary_account_details_schema->additional_owner
    if(remove_secondary_account_details_schema->additional_owner) { 
    cJSON *additional_owner_local_JSON = additional_owner_remove_secondary_schema_convertToJSON(remove_secondary_account_details_schema->additional_owner);
    if(additional_owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additionalOwner", additional_owner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // remove_secondary_account_details_schema->message
    if(remove_secondary_account_details_schema->message) { 
    if(cJSON_AddStringToObject(item, "message", remove_secondary_account_details_schema->message) == NULL) {
    goto fail; //String
    }
     } 


    // remove_secondary_account_details_schema->overledger_signing_type
    if(remove_secondary_account_details_schema->overledger_signing_type) { 
    if(cJSON_AddStringToObject(item, "overledgerSigningType", remove_secondary_account_details_schema->overledger_signing_type) == NULL) {
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

remove_secondary_account_details_schema_t *remove_secondary_account_details_schema_parseFromJSON(cJSON *remove_secondary_account_details_schemaJSON){

    remove_secondary_account_details_schema_t *remove_secondary_account_details_schema_local_var = NULL;

    // remove_secondary_account_details_schema->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(remove_secondary_account_details_schemaJSON, "owner");
    owner_remove_secondary_schema_t *owner_local_nonprim = NULL;
    if (owner) { 
    owner_local_nonprim = owner_remove_secondary_schema_parseFromJSON(owner); //nonprimitive
    }

    // remove_secondary_account_details_schema->additional_owner
    cJSON *additional_owner = cJSON_GetObjectItemCaseSensitive(remove_secondary_account_details_schemaJSON, "additionalOwner");
    additional_owner_remove_secondary_schema_t *additional_owner_local_nonprim = NULL;
    if (additional_owner) { 
    additional_owner_local_nonprim = additional_owner_remove_secondary_schema_parseFromJSON(additional_owner); //nonprimitive
    }

    // remove_secondary_account_details_schema->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(remove_secondary_account_details_schemaJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // remove_secondary_account_details_schema->overledger_signing_type
    cJSON *overledger_signing_type = cJSON_GetObjectItemCaseSensitive(remove_secondary_account_details_schemaJSON, "overledgerSigningType");
    if (overledger_signing_type) { 
    if(!cJSON_IsString(overledger_signing_type))
    {
    goto end; //String
    }
    }


    remove_secondary_account_details_schema_local_var = remove_secondary_account_details_schema_create (
        owner ? owner_local_nonprim : NULL,
        additional_owner ? additional_owner_local_nonprim : NULL,
        message ? strdup(message->valuestring) : NULL,
        overledger_signing_type ? strdup(overledger_signing_type->valuestring) : NULL
        );

    return remove_secondary_account_details_schema_local_var;
end:
    if (owner_local_nonprim) {
        owner_remove_secondary_schema_free(owner_local_nonprim);
        owner_local_nonprim = NULL;
    }
    if (additional_owner_local_nonprim) {
        additional_owner_remove_secondary_schema_free(additional_owner_local_nonprim);
        additional_owner_local_nonprim = NULL;
    }
    return NULL;

}
