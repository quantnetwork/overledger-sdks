#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_request.h"



prepare_request_t *prepare_request_create(
    char *api_lookup_path,
    list_t *smart_contract_tag,
    char *urgency,
    prepare_request_details_t *request_details,
    char *smart_contract_address,
    location_t *location,
    char *type
    ) {
    prepare_request_t *prepare_request_local_var = malloc(sizeof(prepare_request_t));
    if (!prepare_request_local_var) {
        return NULL;
    }
    prepare_request_local_var->api_lookup_path = api_lookup_path;
    prepare_request_local_var->smart_contract_tag = smart_contract_tag;
    prepare_request_local_var->urgency = urgency;
    prepare_request_local_var->request_details = request_details;
    prepare_request_local_var->smart_contract_address = smart_contract_address;
    prepare_request_local_var->location = location;
    prepare_request_local_var->type = type;

    return prepare_request_local_var;
}


void prepare_request_free(prepare_request_t *prepare_request) {
    if(NULL == prepare_request){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_request->api_lookup_path) {
        free(prepare_request->api_lookup_path);
        prepare_request->api_lookup_path = NULL;
    }
    if (prepare_request->smart_contract_tag) {
        list_ForEach(listEntry, prepare_request->smart_contract_tag) {
            smart_contract_tag_free(listEntry->data);
        }
        list_free(prepare_request->smart_contract_tag);
        prepare_request->smart_contract_tag = NULL;
    }
    if (prepare_request->urgency) {
        free(prepare_request->urgency);
        prepare_request->urgency = NULL;
    }
    if (prepare_request->request_details) {
        prepare_request_details_free(prepare_request->request_details);
        prepare_request->request_details = NULL;
    }
    if (prepare_request->smart_contract_address) {
        free(prepare_request->smart_contract_address);
        prepare_request->smart_contract_address = NULL;
    }
    if (prepare_request->location) {
        location_free(prepare_request->location);
        prepare_request->location = NULL;
    }
    if (prepare_request->type) {
        free(prepare_request->type);
        prepare_request->type = NULL;
    }
    free(prepare_request);
}

cJSON *prepare_request_convertToJSON(prepare_request_t *prepare_request) {
    cJSON *item = cJSON_CreateObject();

    // prepare_request->api_lookup_path
    if(prepare_request->api_lookup_path) { 
    if(cJSON_AddStringToObject(item, "apiLookupPath", prepare_request->api_lookup_path) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_request->smart_contract_tag
    if(prepare_request->smart_contract_tag) { 
    cJSON *smart_contract_tag = cJSON_AddArrayToObject(item, "smartContractTag");
    if(smart_contract_tag == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *smart_contract_tagListEntry;
    if (prepare_request->smart_contract_tag) {
    list_ForEach(smart_contract_tagListEntry, prepare_request->smart_contract_tag) {
    cJSON *itemLocal = smart_contract_tag_convertToJSON(smart_contract_tagListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(smart_contract_tag, itemLocal);
    }
    }
     } 


    // prepare_request->urgency
    if(prepare_request->urgency) { 
    if(cJSON_AddStringToObject(item, "urgency", prepare_request->urgency) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_request->request_details
    if(prepare_request->request_details) { 
    cJSON *request_details_local_JSON = prepare_request_details_convertToJSON(prepare_request->request_details);
    if(request_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "requestDetails", request_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_request->smart_contract_address
    if(prepare_request->smart_contract_address) { 
    if(cJSON_AddStringToObject(item, "smartContractAddress", prepare_request->smart_contract_address) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_request->location
    if(prepare_request->location) { 
    cJSON *location_local_JSON = location_convertToJSON(prepare_request->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_request->type
    if(prepare_request->type) { 
    if(cJSON_AddStringToObject(item, "type", prepare_request->type) == NULL) {
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

prepare_request_t *prepare_request_parseFromJSON(cJSON *prepare_requestJSON){

    prepare_request_t *prepare_request_local_var = NULL;

    // prepare_request->api_lookup_path
    cJSON *api_lookup_path = cJSON_GetObjectItemCaseSensitive(prepare_requestJSON, "apiLookupPath");
    if (api_lookup_path) { 
    if(!cJSON_IsString(api_lookup_path))
    {
    goto end; //String
    }
    }

    // prepare_request->smart_contract_tag
    cJSON *smart_contract_tag = cJSON_GetObjectItemCaseSensitive(prepare_requestJSON, "smartContractTag");
    list_t *smart_contract_tagList;
    if (smart_contract_tag) { 
    cJSON *smart_contract_tag_local_nonprimitive;
    if(!cJSON_IsArray(smart_contract_tag)){
        goto end; //nonprimitive container
    }

    smart_contract_tagList = list_create();

    cJSON_ArrayForEach(smart_contract_tag_local_nonprimitive,smart_contract_tag )
    {
        if(!cJSON_IsObject(smart_contract_tag_local_nonprimitive)){
            goto end;
        }
        smart_contract_tag_t *smart_contract_tagItem = smart_contract_tag_parseFromJSON(smart_contract_tag_local_nonprimitive);

        list_addElement(smart_contract_tagList, smart_contract_tagItem);
    }
    }

    // prepare_request->urgency
    cJSON *urgency = cJSON_GetObjectItemCaseSensitive(prepare_requestJSON, "urgency");
    if (urgency) { 
    if(!cJSON_IsString(urgency))
    {
    goto end; //String
    }
    }

    // prepare_request->request_details
    cJSON *request_details = cJSON_GetObjectItemCaseSensitive(prepare_requestJSON, "requestDetails");
    prepare_request_details_t *request_details_local_nonprim = NULL;
    if (request_details) { 
    request_details_local_nonprim = prepare_request_details_parseFromJSON(request_details); //nonprimitive
    }

    // prepare_request->smart_contract_address
    cJSON *smart_contract_address = cJSON_GetObjectItemCaseSensitive(prepare_requestJSON, "smartContractAddress");
    if (smart_contract_address) { 
    if(!cJSON_IsString(smart_contract_address))
    {
    goto end; //String
    }
    }

    // prepare_request->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(prepare_requestJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // prepare_request->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(prepare_requestJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }


    prepare_request_local_var = prepare_request_create (
        api_lookup_path ? strdup(api_lookup_path->valuestring) : NULL,
        smart_contract_tag ? smart_contract_tagList : NULL,
        urgency ? strdup(urgency->valuestring) : NULL,
        request_details ? request_details_local_nonprim : NULL,
        smart_contract_address ? strdup(smart_contract_address->valuestring) : NULL,
        location ? location_local_nonprim : NULL,
        type ? strdup(type->valuestring) : NULL
        );

    return prepare_request_local_var;
end:
    if (request_details_local_nonprim) {
        prepare_request_details_free(request_details_local_nonprim);
        request_details_local_nonprim = NULL;
    }
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
