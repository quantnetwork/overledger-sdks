#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "token_read_qrc721_response.h"



token_read_qrc721_response_t *token_read_qrc721_response_create(
    char *token_name,
    token_read_response_details_t *response_details,
    location_t *location,
    char *request_id
    ) {
    token_read_qrc721_response_t *token_read_qrc721_response_local_var = malloc(sizeof(token_read_qrc721_response_t));
    if (!token_read_qrc721_response_local_var) {
        return NULL;
    }
    token_read_qrc721_response_local_var->token_name = token_name;
    token_read_qrc721_response_local_var->response_details = response_details;
    token_read_qrc721_response_local_var->location = location;
    token_read_qrc721_response_local_var->request_id = request_id;

    return token_read_qrc721_response_local_var;
}


void token_read_qrc721_response_free(token_read_qrc721_response_t *token_read_qrc721_response) {
    if(NULL == token_read_qrc721_response){
        return ;
    }
    listEntry_t *listEntry;
    if (token_read_qrc721_response->token_name) {
        free(token_read_qrc721_response->token_name);
        token_read_qrc721_response->token_name = NULL;
    }
    if (token_read_qrc721_response->response_details) {
        token_read_response_details_free(token_read_qrc721_response->response_details);
        token_read_qrc721_response->response_details = NULL;
    }
    if (token_read_qrc721_response->location) {
        location_free(token_read_qrc721_response->location);
        token_read_qrc721_response->location = NULL;
    }
    if (token_read_qrc721_response->request_id) {
        free(token_read_qrc721_response->request_id);
        token_read_qrc721_response->request_id = NULL;
    }
    free(token_read_qrc721_response);
}

cJSON *token_read_qrc721_response_convertToJSON(token_read_qrc721_response_t *token_read_qrc721_response) {
    cJSON *item = cJSON_CreateObject();

    // token_read_qrc721_response->token_name
    if(token_read_qrc721_response->token_name) { 
    if(cJSON_AddStringToObject(item, "tokenName", token_read_qrc721_response->token_name) == NULL) {
    goto fail; //String
    }
     } 


    // token_read_qrc721_response->response_details
    if(token_read_qrc721_response->response_details) { 
    cJSON *response_details_local_JSON = token_read_response_details_convertToJSON(token_read_qrc721_response->response_details);
    if(response_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "responseDetails", response_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // token_read_qrc721_response->location
    if(token_read_qrc721_response->location) { 
    cJSON *location_local_JSON = location_convertToJSON(token_read_qrc721_response->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // token_read_qrc721_response->request_id
    if(token_read_qrc721_response->request_id) { 
    if(cJSON_AddStringToObject(item, "requestId", token_read_qrc721_response->request_id) == NULL) {
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

token_read_qrc721_response_t *token_read_qrc721_response_parseFromJSON(cJSON *token_read_qrc721_responseJSON){

    token_read_qrc721_response_t *token_read_qrc721_response_local_var = NULL;

    // token_read_qrc721_response->token_name
    cJSON *token_name = cJSON_GetObjectItemCaseSensitive(token_read_qrc721_responseJSON, "tokenName");
    if (token_name) { 
    if(!cJSON_IsString(token_name))
    {
    goto end; //String
    }
    }

    // token_read_qrc721_response->response_details
    cJSON *response_details = cJSON_GetObjectItemCaseSensitive(token_read_qrc721_responseJSON, "responseDetails");
    token_read_response_details_t *response_details_local_nonprim = NULL;
    if (response_details) { 
    response_details_local_nonprim = token_read_response_details_parseFromJSON(response_details); //nonprimitive
    }

    // token_read_qrc721_response->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(token_read_qrc721_responseJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // token_read_qrc721_response->request_id
    cJSON *request_id = cJSON_GetObjectItemCaseSensitive(token_read_qrc721_responseJSON, "requestId");
    if (request_id) { 
    if(!cJSON_IsString(request_id))
    {
    goto end; //String
    }
    }


    token_read_qrc721_response_local_var = token_read_qrc721_response_create (
        token_name ? strdup(token_name->valuestring) : NULL,
        response_details ? response_details_local_nonprim : NULL,
        location ? location_local_nonprim : NULL,
        request_id ? strdup(request_id->valuestring) : NULL
        );

    return token_read_qrc721_response_local_var;
end:
    if (response_details_local_nonprim) {
        token_read_response_details_free(response_details_local_nonprim);
        response_details_local_nonprim = NULL;
    }
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
