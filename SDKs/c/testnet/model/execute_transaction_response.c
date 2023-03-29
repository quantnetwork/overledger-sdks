#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "execute_transaction_response.h"



execute_transaction_response_t *execute_transaction_response_create(
    char *urgency,
    char *request_id,
    char *overledger_transaction_id,
    location_t *location,
    char *type,
    char *transaction_id,
    status_t *status
    ) {
    execute_transaction_response_t *execute_transaction_response_local_var = malloc(sizeof(execute_transaction_response_t));
    if (!execute_transaction_response_local_var) {
        return NULL;
    }
    execute_transaction_response_local_var->urgency = urgency;
    execute_transaction_response_local_var->request_id = request_id;
    execute_transaction_response_local_var->overledger_transaction_id = overledger_transaction_id;
    execute_transaction_response_local_var->location = location;
    execute_transaction_response_local_var->type = type;
    execute_transaction_response_local_var->transaction_id = transaction_id;
    execute_transaction_response_local_var->status = status;

    return execute_transaction_response_local_var;
}


void execute_transaction_response_free(execute_transaction_response_t *execute_transaction_response) {
    if(NULL == execute_transaction_response){
        return ;
    }
    listEntry_t *listEntry;
    if (execute_transaction_response->urgency) {
        free(execute_transaction_response->urgency);
        execute_transaction_response->urgency = NULL;
    }
    if (execute_transaction_response->request_id) {
        free(execute_transaction_response->request_id);
        execute_transaction_response->request_id = NULL;
    }
    if (execute_transaction_response->overledger_transaction_id) {
        free(execute_transaction_response->overledger_transaction_id);
        execute_transaction_response->overledger_transaction_id = NULL;
    }
    if (execute_transaction_response->location) {
        location_free(execute_transaction_response->location);
        execute_transaction_response->location = NULL;
    }
    if (execute_transaction_response->type) {
        free(execute_transaction_response->type);
        execute_transaction_response->type = NULL;
    }
    if (execute_transaction_response->transaction_id) {
        free(execute_transaction_response->transaction_id);
        execute_transaction_response->transaction_id = NULL;
    }
    if (execute_transaction_response->status) {
        status_free(execute_transaction_response->status);
        execute_transaction_response->status = NULL;
    }
    free(execute_transaction_response);
}

cJSON *execute_transaction_response_convertToJSON(execute_transaction_response_t *execute_transaction_response) {
    cJSON *item = cJSON_CreateObject();

    // execute_transaction_response->urgency
    if(execute_transaction_response->urgency) { 
    if(cJSON_AddStringToObject(item, "urgency", execute_transaction_response->urgency) == NULL) {
    goto fail; //String
    }
     } 


    // execute_transaction_response->request_id
    if(execute_transaction_response->request_id) { 
    if(cJSON_AddStringToObject(item, "requestId", execute_transaction_response->request_id) == NULL) {
    goto fail; //String
    }
     } 


    // execute_transaction_response->overledger_transaction_id
    if(execute_transaction_response->overledger_transaction_id) { 
    if(cJSON_AddStringToObject(item, "overledgerTransactionId", execute_transaction_response->overledger_transaction_id) == NULL) {
    goto fail; //String
    }
     } 


    // execute_transaction_response->location
    if(execute_transaction_response->location) { 
    cJSON *location_local_JSON = location_convertToJSON(execute_transaction_response->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // execute_transaction_response->type
    if(execute_transaction_response->type) { 
    if(cJSON_AddStringToObject(item, "type", execute_transaction_response->type) == NULL) {
    goto fail; //String
    }
     } 


    // execute_transaction_response->transaction_id
    if(execute_transaction_response->transaction_id) { 
    if(cJSON_AddStringToObject(item, "transactionId", execute_transaction_response->transaction_id) == NULL) {
    goto fail; //String
    }
     } 


    // execute_transaction_response->status
    if(execute_transaction_response->status) { 
    cJSON *status_local_JSON = status_convertToJSON(execute_transaction_response->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
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

execute_transaction_response_t *execute_transaction_response_parseFromJSON(cJSON *execute_transaction_responseJSON){

    execute_transaction_response_t *execute_transaction_response_local_var = NULL;

    // execute_transaction_response->urgency
    cJSON *urgency = cJSON_GetObjectItemCaseSensitive(execute_transaction_responseJSON, "urgency");
    if (urgency) { 
    if(!cJSON_IsString(urgency))
    {
    goto end; //String
    }
    }

    // execute_transaction_response->request_id
    cJSON *request_id = cJSON_GetObjectItemCaseSensitive(execute_transaction_responseJSON, "requestId");
    if (request_id) { 
    if(!cJSON_IsString(request_id))
    {
    goto end; //String
    }
    }

    // execute_transaction_response->overledger_transaction_id
    cJSON *overledger_transaction_id = cJSON_GetObjectItemCaseSensitive(execute_transaction_responseJSON, "overledgerTransactionId");
    if (overledger_transaction_id) { 
    if(!cJSON_IsString(overledger_transaction_id))
    {
    goto end; //String
    }
    }

    // execute_transaction_response->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(execute_transaction_responseJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // execute_transaction_response->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(execute_transaction_responseJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // execute_transaction_response->transaction_id
    cJSON *transaction_id = cJSON_GetObjectItemCaseSensitive(execute_transaction_responseJSON, "transactionId");
    if (transaction_id) { 
    if(!cJSON_IsString(transaction_id))
    {
    goto end; //String
    }
    }

    // execute_transaction_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(execute_transaction_responseJSON, "status");
    status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = status_parseFromJSON(status); //nonprimitive
    }


    execute_transaction_response_local_var = execute_transaction_response_create (
        urgency ? strdup(urgency->valuestring) : NULL,
        request_id ? strdup(request_id->valuestring) : NULL,
        overledger_transaction_id ? strdup(overledger_transaction_id->valuestring) : NULL,
        location ? location_local_nonprim : NULL,
        type ? strdup(type->valuestring) : NULL,
        transaction_id ? strdup(transaction_id->valuestring) : NULL,
        status ? status_local_nonprim : NULL
        );

    return execute_transaction_response_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    if (status_local_nonprim) {
        status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
