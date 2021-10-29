#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_request_details_schema.h"



payment_request_details_schema_t *payment_request_details_schema_create(
    char *overledger_signing_type,
    list_t *origin,
    list_t *destination,
    char *message
    ) {
    payment_request_details_schema_t *payment_request_details_schema_local_var = malloc(sizeof(payment_request_details_schema_t));
    if (!payment_request_details_schema_local_var) {
        return NULL;
    }
    payment_request_details_schema_local_var->overledger_signing_type = overledger_signing_type;
    payment_request_details_schema_local_var->origin = origin;
    payment_request_details_schema_local_var->destination = destination;
    payment_request_details_schema_local_var->message = message;

    return payment_request_details_schema_local_var;
}


void payment_request_details_schema_free(payment_request_details_schema_t *payment_request_details_schema) {
    if(NULL == payment_request_details_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_request_details_schema->overledger_signing_type) {
        free(payment_request_details_schema->overledger_signing_type);
        payment_request_details_schema->overledger_signing_type = NULL;
    }
    if (payment_request_details_schema->origin) {
        list_ForEach(listEntry, payment_request_details_schema->origin) {
            origin_payment_schema_free(listEntry->data);
        }
        list_free(payment_request_details_schema->origin);
        payment_request_details_schema->origin = NULL;
    }
    if (payment_request_details_schema->destination) {
        list_ForEach(listEntry, payment_request_details_schema->destination) {
            destination_payment_schema_free(listEntry->data);
        }
        list_free(payment_request_details_schema->destination);
        payment_request_details_schema->destination = NULL;
    }
    if (payment_request_details_schema->message) {
        free(payment_request_details_schema->message);
        payment_request_details_schema->message = NULL;
    }
    free(payment_request_details_schema);
}

cJSON *payment_request_details_schema_convertToJSON(payment_request_details_schema_t *payment_request_details_schema) {
    cJSON *item = cJSON_CreateObject();

    // payment_request_details_schema->overledger_signing_type
    if(payment_request_details_schema->overledger_signing_type) { 
    if(cJSON_AddStringToObject(item, "overledgerSigningType", payment_request_details_schema->overledger_signing_type) == NULL) {
    goto fail; //String
    }
     } 


    // payment_request_details_schema->origin
    if(payment_request_details_schema->origin) { 
    cJSON *origin = cJSON_AddArrayToObject(item, "origin");
    if(origin == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *originListEntry;
    if (payment_request_details_schema->origin) {
    list_ForEach(originListEntry, payment_request_details_schema->origin) {
    cJSON *itemLocal = origin_payment_schema_convertToJSON(originListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(origin, itemLocal);
    }
    }
     } 


    // payment_request_details_schema->destination
    if(payment_request_details_schema->destination) { 
    cJSON *destination = cJSON_AddArrayToObject(item, "destination");
    if(destination == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *destinationListEntry;
    if (payment_request_details_schema->destination) {
    list_ForEach(destinationListEntry, payment_request_details_schema->destination) {
    cJSON *itemLocal = destination_payment_schema_convertToJSON(destinationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(destination, itemLocal);
    }
    }
     } 


    // payment_request_details_schema->message
    if(payment_request_details_schema->message) { 
    if(cJSON_AddStringToObject(item, "message", payment_request_details_schema->message) == NULL) {
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

payment_request_details_schema_t *payment_request_details_schema_parseFromJSON(cJSON *payment_request_details_schemaJSON){

    payment_request_details_schema_t *payment_request_details_schema_local_var = NULL;

    // payment_request_details_schema->overledger_signing_type
    cJSON *overledger_signing_type = cJSON_GetObjectItemCaseSensitive(payment_request_details_schemaJSON, "overledgerSigningType");
    if (overledger_signing_type) { 
    if(!cJSON_IsString(overledger_signing_type))
    {
    goto end; //String
    }
    }

    // payment_request_details_schema->origin
    cJSON *origin = cJSON_GetObjectItemCaseSensitive(payment_request_details_schemaJSON, "origin");
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
        origin_payment_schema_t *originItem = origin_payment_schema_parseFromJSON(origin_local_nonprimitive);

        list_addElement(originList, originItem);
    }
    }

    // payment_request_details_schema->destination
    cJSON *destination = cJSON_GetObjectItemCaseSensitive(payment_request_details_schemaJSON, "destination");
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
        destination_payment_schema_t *destinationItem = destination_payment_schema_parseFromJSON(destination_local_nonprimitive);

        list_addElement(destinationList, destinationItem);
    }
    }

    // payment_request_details_schema->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(payment_request_details_schemaJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }


    payment_request_details_schema_local_var = payment_request_details_schema_create (
        overledger_signing_type ? strdup(overledger_signing_type->valuestring) : NULL,
        origin ? originList : NULL,
        destination ? destinationList : NULL,
        message ? strdup(message->valuestring) : NULL
        );

    return payment_request_details_schema_local_var;
end:
    return NULL;

}
