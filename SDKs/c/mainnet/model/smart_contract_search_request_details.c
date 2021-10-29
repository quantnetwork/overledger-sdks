#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "smart_contract_search_request_details.h"



smart_contract_search_request_details_t *smart_contract_search_request_details_create(
    list_t *destination
    ) {
    smart_contract_search_request_details_t *smart_contract_search_request_details_local_var = malloc(sizeof(smart_contract_search_request_details_t));
    if (!smart_contract_search_request_details_local_var) {
        return NULL;
    }
    smart_contract_search_request_details_local_var->destination = destination;

    return smart_contract_search_request_details_local_var;
}


void smart_contract_search_request_details_free(smart_contract_search_request_details_t *smart_contract_search_request_details) {
    if(NULL == smart_contract_search_request_details){
        return ;
    }
    listEntry_t *listEntry;
    if (smart_contract_search_request_details->destination) {
        list_ForEach(listEntry, smart_contract_search_request_details->destination) {
            smart_contract_search_destination_schema_free(listEntry->data);
        }
        list_free(smart_contract_search_request_details->destination);
        smart_contract_search_request_details->destination = NULL;
    }
    free(smart_contract_search_request_details);
}

cJSON *smart_contract_search_request_details_convertToJSON(smart_contract_search_request_details_t *smart_contract_search_request_details) {
    cJSON *item = cJSON_CreateObject();

    // smart_contract_search_request_details->destination
    if(smart_contract_search_request_details->destination) { 
    cJSON *destination = cJSON_AddArrayToObject(item, "destination");
    if(destination == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *destinationListEntry;
    if (smart_contract_search_request_details->destination) {
    list_ForEach(destinationListEntry, smart_contract_search_request_details->destination) {
    cJSON *itemLocal = smart_contract_search_destination_schema_convertToJSON(destinationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(destination, itemLocal);
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

smart_contract_search_request_details_t *smart_contract_search_request_details_parseFromJSON(cJSON *smart_contract_search_request_detailsJSON){

    smart_contract_search_request_details_t *smart_contract_search_request_details_local_var = NULL;

    // smart_contract_search_request_details->destination
    cJSON *destination = cJSON_GetObjectItemCaseSensitive(smart_contract_search_request_detailsJSON, "destination");
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
        smart_contract_search_destination_schema_t *destinationItem = smart_contract_search_destination_schema_parseFromJSON(destination_local_nonprimitive);

        list_addElement(destinationList, destinationItem);
    }
    }


    smart_contract_search_request_details_local_var = smart_contract_search_request_details_create (
        destination ? destinationList : NULL
        );

    return smart_contract_search_request_details_local_var;
end:
    return NULL;

}
