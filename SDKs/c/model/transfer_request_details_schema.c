#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transfer_request_details_schema.h"



transfer_request_details_schema_t *transfer_request_details_schema_create(
    char *overledger_signing_type,
    list_t *origin,
    list_t *destination,
    char *message
    ) {
    transfer_request_details_schema_t *transfer_request_details_schema_local_var = malloc(sizeof(transfer_request_details_schema_t));
    if (!transfer_request_details_schema_local_var) {
        return NULL;
    }
    transfer_request_details_schema_local_var->overledger_signing_type = overledger_signing_type;
    transfer_request_details_schema_local_var->origin = origin;
    transfer_request_details_schema_local_var->destination = destination;
    transfer_request_details_schema_local_var->message = message;

    return transfer_request_details_schema_local_var;
}


void transfer_request_details_schema_free(transfer_request_details_schema_t *transfer_request_details_schema) {
    if(NULL == transfer_request_details_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (transfer_request_details_schema->overledger_signing_type) {
        free(transfer_request_details_schema->overledger_signing_type);
        transfer_request_details_schema->overledger_signing_type = NULL;
    }
    if (transfer_request_details_schema->origin) {
        list_ForEach(listEntry, transfer_request_details_schema->origin) {
            origin_transfer_schema_free(listEntry->data);
        }
        list_free(transfer_request_details_schema->origin);
        transfer_request_details_schema->origin = NULL;
    }
    if (transfer_request_details_schema->destination) {
        list_ForEach(listEntry, transfer_request_details_schema->destination) {
            destination_transfer_schema_free(listEntry->data);
        }
        list_free(transfer_request_details_schema->destination);
        transfer_request_details_schema->destination = NULL;
    }
    if (transfer_request_details_schema->message) {
        free(transfer_request_details_schema->message);
        transfer_request_details_schema->message = NULL;
    }
    free(transfer_request_details_schema);
}

cJSON *transfer_request_details_schema_convertToJSON(transfer_request_details_schema_t *transfer_request_details_schema) {
    cJSON *item = cJSON_CreateObject();

    // transfer_request_details_schema->overledger_signing_type
    if(transfer_request_details_schema->overledger_signing_type) { 
    if(cJSON_AddStringToObject(item, "overledgerSigningType", transfer_request_details_schema->overledger_signing_type) == NULL) {
    goto fail; //String
    }
     } 


    // transfer_request_details_schema->origin
    if(transfer_request_details_schema->origin) { 
    cJSON *origin = cJSON_AddArrayToObject(item, "origin");
    if(origin == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *originListEntry;
    if (transfer_request_details_schema->origin) {
    list_ForEach(originListEntry, transfer_request_details_schema->origin) {
    cJSON *itemLocal = origin_transfer_schema_convertToJSON(originListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(origin, itemLocal);
    }
    }
     } 


    // transfer_request_details_schema->destination
    if(transfer_request_details_schema->destination) { 
    cJSON *destination = cJSON_AddArrayToObject(item, "destination");
    if(destination == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *destinationListEntry;
    if (transfer_request_details_schema->destination) {
    list_ForEach(destinationListEntry, transfer_request_details_schema->destination) {
    cJSON *itemLocal = destination_transfer_schema_convertToJSON(destinationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(destination, itemLocal);
    }
    }
     } 


    // transfer_request_details_schema->message
    if(transfer_request_details_schema->message) { 
    if(cJSON_AddStringToObject(item, "message", transfer_request_details_schema->message) == NULL) {
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

transfer_request_details_schema_t *transfer_request_details_schema_parseFromJSON(cJSON *transfer_request_details_schemaJSON){

    transfer_request_details_schema_t *transfer_request_details_schema_local_var = NULL;

    // transfer_request_details_schema->overledger_signing_type
    cJSON *overledger_signing_type = cJSON_GetObjectItemCaseSensitive(transfer_request_details_schemaJSON, "overledgerSigningType");
    if (overledger_signing_type) { 
    if(!cJSON_IsString(overledger_signing_type))
    {
    goto end; //String
    }
    }

    // transfer_request_details_schema->origin
    cJSON *origin = cJSON_GetObjectItemCaseSensitive(transfer_request_details_schemaJSON, "origin");
    list_t *originList;
    if (origin) { 
    cJSON *origin_local_nonprimitive;
    if(!cJSON_IsArray(origin)){
        goto end; //nonprimitive container
    }

    originList = list_create();

    cJSON_ArrayForEach(origin_local_nonprimitive,origin )
    {
        if(!cJSON_IsObject(origin_local_nonprimitive)){
            goto end;
        }
        origin_transfer_schema_t *originItem = origin_transfer_schema_parseFromJSON(origin_local_nonprimitive);

        list_addElement(originList, originItem);
    }
    }

    // transfer_request_details_schema->destination
    cJSON *destination = cJSON_GetObjectItemCaseSensitive(transfer_request_details_schemaJSON, "destination");
    list_t *destinationList;
    if (destination) { 
    cJSON *destination_local_nonprimitive;
    if(!cJSON_IsArray(destination)){
        goto end; //nonprimitive container
    }

    destinationList = list_create();

    cJSON_ArrayForEach(destination_local_nonprimitive,destination )
    {
        if(!cJSON_IsObject(destination_local_nonprimitive)){
            goto end;
        }
        destination_transfer_schema_t *destinationItem = destination_transfer_schema_parseFromJSON(destination_local_nonprimitive);

        list_addElement(destinationList, destinationItem);
    }
    }

    // transfer_request_details_schema->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(transfer_request_details_schemaJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }


    transfer_request_details_schema_local_var = transfer_request_details_schema_create (
        overledger_signing_type ? strdup(overledger_signing_type->valuestring) : NULL,
        origin ? originList : NULL,
        destination ? destinationList : NULL,
        message ? strdup(message->valuestring) : NULL
        );

    return transfer_request_details_schema_local_var;
end:
    return NULL;

}
