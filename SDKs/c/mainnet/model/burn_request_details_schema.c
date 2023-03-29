#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "burn_request_details_schema.h"



burn_request_details_schema_t *burn_request_details_schema_create(
    list_t *owner,
    char *message,
    char *overledger_signing_type
    ) {
    burn_request_details_schema_t *burn_request_details_schema_local_var = malloc(sizeof(burn_request_details_schema_t));
    if (!burn_request_details_schema_local_var) {
        return NULL;
    }
    burn_request_details_schema_local_var->owner = owner;
    burn_request_details_schema_local_var->message = message;
    burn_request_details_schema_local_var->overledger_signing_type = overledger_signing_type;

    return burn_request_details_schema_local_var;
}


void burn_request_details_schema_free(burn_request_details_schema_t *burn_request_details_schema) {
    if(NULL == burn_request_details_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (burn_request_details_schema->owner) {
        list_ForEach(listEntry, burn_request_details_schema->owner) {
            owner_burn_schema_free(listEntry->data);
        }
        list_free(burn_request_details_schema->owner);
        burn_request_details_schema->owner = NULL;
    }
    if (burn_request_details_schema->message) {
        free(burn_request_details_schema->message);
        burn_request_details_schema->message = NULL;
    }
    if (burn_request_details_schema->overledger_signing_type) {
        free(burn_request_details_schema->overledger_signing_type);
        burn_request_details_schema->overledger_signing_type = NULL;
    }
    free(burn_request_details_schema);
}

cJSON *burn_request_details_schema_convertToJSON(burn_request_details_schema_t *burn_request_details_schema) {
    cJSON *item = cJSON_CreateObject();

    // burn_request_details_schema->owner
    if(burn_request_details_schema->owner) { 
    cJSON *owner = cJSON_AddArrayToObject(item, "owner");
    if(owner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *ownerListEntry;
    if (burn_request_details_schema->owner) {
    list_ForEach(ownerListEntry, burn_request_details_schema->owner) {
    cJSON *itemLocal = owner_burn_schema_convertToJSON(ownerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(owner, itemLocal);
    }
    }
     } 


    // burn_request_details_schema->message
    if(burn_request_details_schema->message) { 
    if(cJSON_AddStringToObject(item, "message", burn_request_details_schema->message) == NULL) {
    goto fail; //String
    }
     } 


    // burn_request_details_schema->overledger_signing_type
    if(burn_request_details_schema->overledger_signing_type) { 
    if(cJSON_AddStringToObject(item, "overledgerSigningType", burn_request_details_schema->overledger_signing_type) == NULL) {
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

burn_request_details_schema_t *burn_request_details_schema_parseFromJSON(cJSON *burn_request_details_schemaJSON){

    burn_request_details_schema_t *burn_request_details_schema_local_var = NULL;

    // burn_request_details_schema->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(burn_request_details_schemaJSON, "owner");
    list_t *ownerList;
    if (owner) { 
    cJSON *owner_local_nonprimitive;
    if(!cJSON_IsArray(owner)){
        goto end; //nonprimitive container
    }

    ownerList = list_create();

    cJSON_ArrayForEach(owner_local_nonprimitive,owner )
    {
        if(!cJSON_IsObject(owner_local_nonprimitive)){
            goto end;
        }
        owner_burn_schema_t *ownerItem = owner_burn_schema_parseFromJSON(owner_local_nonprimitive);

        list_addElement(ownerList, ownerItem);
    }
    }

    // burn_request_details_schema->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(burn_request_details_schemaJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // burn_request_details_schema->overledger_signing_type
    cJSON *overledger_signing_type = cJSON_GetObjectItemCaseSensitive(burn_request_details_schemaJSON, "overledgerSigningType");
    if (overledger_signing_type) { 
    if(!cJSON_IsString(overledger_signing_type))
    {
    goto end; //String
    }
    }


    burn_request_details_schema_local_var = burn_request_details_schema_create (
        owner ? ownerList : NULL,
        message ? strdup(message->valuestring) : NULL,
        overledger_signing_type ? strdup(overledger_signing_type->valuestring) : NULL
        );

    return burn_request_details_schema_local_var;
end:
    return NULL;

}
