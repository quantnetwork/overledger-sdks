#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "token_read_qrc20_response.h"



token_read_qrc20_response_t *token_read_qrc20_response_create(
    list_t *response_details,
    char *request_id,
    location_t *location
    ) {
    token_read_qrc20_response_t *token_read_qrc20_response_local_var = malloc(sizeof(token_read_qrc20_response_t));
    if (!token_read_qrc20_response_local_var) {
        return NULL;
    }
    token_read_qrc20_response_local_var->response_details = response_details;
    token_read_qrc20_response_local_var->request_id = request_id;
    token_read_qrc20_response_local_var->location = location;

    return token_read_qrc20_response_local_var;
}


void token_read_qrc20_response_free(token_read_qrc20_response_t *token_read_qrc20_response) {
    if(NULL == token_read_qrc20_response){
        return ;
    }
    listEntry_t *listEntry;
    if (token_read_qrc20_response->response_details) {
        list_ForEach(listEntry, token_read_qrc20_response->response_details) {
            token_read_response_details_free(listEntry->data);
        }
        list_free(token_read_qrc20_response->response_details);
        token_read_qrc20_response->response_details = NULL;
    }
    if (token_read_qrc20_response->request_id) {
        free(token_read_qrc20_response->request_id);
        token_read_qrc20_response->request_id = NULL;
    }
    if (token_read_qrc20_response->location) {
        location_free(token_read_qrc20_response->location);
        token_read_qrc20_response->location = NULL;
    }
    free(token_read_qrc20_response);
}

cJSON *token_read_qrc20_response_convertToJSON(token_read_qrc20_response_t *token_read_qrc20_response) {
    cJSON *item = cJSON_CreateObject();

    // token_read_qrc20_response->response_details
    if(token_read_qrc20_response->response_details) { 
    cJSON *response_details = cJSON_AddArrayToObject(item, "responseDetails");
    if(response_details == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *response_detailsListEntry;
    if (token_read_qrc20_response->response_details) {
    list_ForEach(response_detailsListEntry, token_read_qrc20_response->response_details) {
    cJSON *itemLocal = token_read_response_details_convertToJSON(response_detailsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(response_details, itemLocal);
    }
    }
     } 


    // token_read_qrc20_response->request_id
    if(token_read_qrc20_response->request_id) { 
    if(cJSON_AddStringToObject(item, "requestId", token_read_qrc20_response->request_id) == NULL) {
    goto fail; //String
    }
     } 


    // token_read_qrc20_response->location
    if(token_read_qrc20_response->location) { 
    cJSON *location_local_JSON = location_convertToJSON(token_read_qrc20_response->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
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

token_read_qrc20_response_t *token_read_qrc20_response_parseFromJSON(cJSON *token_read_qrc20_responseJSON){

    token_read_qrc20_response_t *token_read_qrc20_response_local_var = NULL;

    // token_read_qrc20_response->response_details
    cJSON *response_details = cJSON_GetObjectItemCaseSensitive(token_read_qrc20_responseJSON, "responseDetails");
    list_t *response_detailsList;
    if (response_details) { 
    cJSON *response_details_local_nonprimitive;
    if(!cJSON_IsArray(response_details)){
        goto end; //nonprimitive container
    }

    response_detailsList = list_create();

    cJSON_ArrayForEach(response_details_local_nonprimitive,response_details )
    {
        if(!cJSON_IsObject(response_details_local_nonprimitive)){
            goto end;
        }
        token_read_response_details_t *response_detailsItem = token_read_response_details_parseFromJSON(response_details_local_nonprimitive);

        list_addElement(response_detailsList, response_detailsItem);
    }
    }

    // token_read_qrc20_response->request_id
    cJSON *request_id = cJSON_GetObjectItemCaseSensitive(token_read_qrc20_responseJSON, "requestId");
    if (request_id) { 
    if(!cJSON_IsString(request_id))
    {
    goto end; //String
    }
    }

    // token_read_qrc20_response->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(token_read_qrc20_responseJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }


    token_read_qrc20_response_local_var = token_read_qrc20_response_create (
        response_details ? response_detailsList : NULL,
        request_id ? strdup(request_id->valuestring) : NULL,
        location ? location_local_nonprim : NULL
        );

    return token_read_qrc20_response_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
