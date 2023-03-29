#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "smart_contract_invoke_request_details_schema.h"



smart_contract_invoke_request_details_schema_t *smart_contract_invoke_request_details_schema_create(
    list_t *destination,
    list_t *origin
    ) {
    smart_contract_invoke_request_details_schema_t *smart_contract_invoke_request_details_schema_local_var = malloc(sizeof(smart_contract_invoke_request_details_schema_t));
    if (!smart_contract_invoke_request_details_schema_local_var) {
        return NULL;
    }
    smart_contract_invoke_request_details_schema_local_var->destination = destination;
    smart_contract_invoke_request_details_schema_local_var->origin = origin;

    return smart_contract_invoke_request_details_schema_local_var;
}


void smart_contract_invoke_request_details_schema_free(smart_contract_invoke_request_details_schema_t *smart_contract_invoke_request_details_schema) {
    if(NULL == smart_contract_invoke_request_details_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (smart_contract_invoke_request_details_schema->destination) {
        list_ForEach(listEntry, smart_contract_invoke_request_details_schema->destination) {
            smart_contract_destination_schema_free(listEntry->data);
        }
        list_free(smart_contract_invoke_request_details_schema->destination);
        smart_contract_invoke_request_details_schema->destination = NULL;
    }
    if (smart_contract_invoke_request_details_schema->origin) {
        list_ForEach(listEntry, smart_contract_invoke_request_details_schema->origin) {
            smart_contract_request_details_origin_free(listEntry->data);
        }
        list_free(smart_contract_invoke_request_details_schema->origin);
        smart_contract_invoke_request_details_schema->origin = NULL;
    }
    free(smart_contract_invoke_request_details_schema);
}

cJSON *smart_contract_invoke_request_details_schema_convertToJSON(smart_contract_invoke_request_details_schema_t *smart_contract_invoke_request_details_schema) {
    cJSON *item = cJSON_CreateObject();

    // smart_contract_invoke_request_details_schema->destination
    if(smart_contract_invoke_request_details_schema->destination) { 
    cJSON *destination = cJSON_AddArrayToObject(item, "destination");
    if(destination == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *destinationListEntry;
    if (smart_contract_invoke_request_details_schema->destination) {
    list_ForEach(destinationListEntry, smart_contract_invoke_request_details_schema->destination) {
    cJSON *itemLocal = smart_contract_destination_schema_convertToJSON(destinationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(destination, itemLocal);
    }
    }
     } 


    // smart_contract_invoke_request_details_schema->origin
    if(smart_contract_invoke_request_details_schema->origin) { 
    cJSON *origin = cJSON_AddArrayToObject(item, "origin");
    if(origin == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *originListEntry;
    if (smart_contract_invoke_request_details_schema->origin) {
    list_ForEach(originListEntry, smart_contract_invoke_request_details_schema->origin) {
    cJSON *itemLocal = smart_contract_request_details_origin_convertToJSON(originListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(origin, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

smart_contract_invoke_request_details_schema_t *smart_contract_invoke_request_details_schema_parseFromJSON(cJSON *smart_contract_invoke_request_details_schemaJSON){

    smart_contract_invoke_request_details_schema_t *smart_contract_invoke_request_details_schema_local_var = NULL;

    // smart_contract_invoke_request_details_schema->destination
    cJSON *destination = cJSON_GetObjectItemCaseSensitive(smart_contract_invoke_request_details_schemaJSON, "destination");
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
        smart_contract_destination_schema_t *destinationItem = smart_contract_destination_schema_parseFromJSON(destination_local_nonprimitive);

        list_addElement(destinationList, destinationItem);
    }
    }

    // smart_contract_invoke_request_details_schema->origin
    cJSON *origin = cJSON_GetObjectItemCaseSensitive(smart_contract_invoke_request_details_schemaJSON, "origin");
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
        smart_contract_request_details_origin_t *originItem = smart_contract_request_details_origin_parseFromJSON(origin_local_nonprimitive);

        list_addElement(originList, originItem);
    }
    }


    smart_contract_invoke_request_details_schema_local_var = smart_contract_invoke_request_details_schema_create (
        destination ? destinationList : NULL,
        origin ? originList : NULL
        );

    return smart_contract_invoke_request_details_schema_local_var;
end:
    return NULL;

}
