#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "add_secondary_account_request_details_schema.h"



add_secondary_account_request_details_schema_t *add_secondary_account_request_details_schema_create(
    secondary_account_owner_schema_t *owner,
    secondary_account_additional_owner_schema_t *additional_owner
    ) {
    add_secondary_account_request_details_schema_t *add_secondary_account_request_details_schema_local_var = malloc(sizeof(add_secondary_account_request_details_schema_t));
    if (!add_secondary_account_request_details_schema_local_var) {
        return NULL;
    }
    add_secondary_account_request_details_schema_local_var->owner = owner;
    add_secondary_account_request_details_schema_local_var->additional_owner = additional_owner;

    return add_secondary_account_request_details_schema_local_var;
}


void add_secondary_account_request_details_schema_free(add_secondary_account_request_details_schema_t *add_secondary_account_request_details_schema) {
    if(NULL == add_secondary_account_request_details_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (add_secondary_account_request_details_schema->owner) {
        secondary_account_owner_schema_free(add_secondary_account_request_details_schema->owner);
        add_secondary_account_request_details_schema->owner = NULL;
    }
    if (add_secondary_account_request_details_schema->additional_owner) {
        secondary_account_additional_owner_schema_free(add_secondary_account_request_details_schema->additional_owner);
        add_secondary_account_request_details_schema->additional_owner = NULL;
    }
    free(add_secondary_account_request_details_schema);
}

cJSON *add_secondary_account_request_details_schema_convertToJSON(add_secondary_account_request_details_schema_t *add_secondary_account_request_details_schema) {
    cJSON *item = cJSON_CreateObject();

    // add_secondary_account_request_details_schema->owner
    if(add_secondary_account_request_details_schema->owner) { 
    cJSON *owner_local_JSON = secondary_account_owner_schema_convertToJSON(add_secondary_account_request_details_schema->owner);
    if(owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "owner", owner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // add_secondary_account_request_details_schema->additional_owner
    if(add_secondary_account_request_details_schema->additional_owner) { 
    cJSON *additional_owner_local_JSON = secondary_account_additional_owner_schema_convertToJSON(add_secondary_account_request_details_schema->additional_owner);
    if(additional_owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additionalOwner", additional_owner_local_JSON);
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

add_secondary_account_request_details_schema_t *add_secondary_account_request_details_schema_parseFromJSON(cJSON *add_secondary_account_request_details_schemaJSON){

    add_secondary_account_request_details_schema_t *add_secondary_account_request_details_schema_local_var = NULL;

    // add_secondary_account_request_details_schema->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(add_secondary_account_request_details_schemaJSON, "owner");
    secondary_account_owner_schema_t *owner_local_nonprim = NULL;
    if (owner) { 
    owner_local_nonprim = secondary_account_owner_schema_parseFromJSON(owner); //nonprimitive
    }

    // add_secondary_account_request_details_schema->additional_owner
    cJSON *additional_owner = cJSON_GetObjectItemCaseSensitive(add_secondary_account_request_details_schemaJSON, "additionalOwner");
    secondary_account_additional_owner_schema_t *additional_owner_local_nonprim = NULL;
    if (additional_owner) { 
    additional_owner_local_nonprim = secondary_account_additional_owner_schema_parseFromJSON(additional_owner); //nonprimitive
    }


    add_secondary_account_request_details_schema_local_var = add_secondary_account_request_details_schema_create (
        owner ? owner_local_nonprim : NULL,
        additional_owner ? additional_owner_local_nonprim : NULL
        );

    return add_secondary_account_request_details_schema_local_var;
end:
    if (owner_local_nonprim) {
        secondary_account_owner_schema_free(owner_local_nonprim);
        owner_local_nonprim = NULL;
    }
    if (additional_owner_local_nonprim) {
        secondary_account_additional_owner_schema_free(additional_owner_local_nonprim);
        additional_owner_local_nonprim = NULL;
    }
    return NULL;

}
