#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "overledger_transaction_response_schema.h"



overledger_transaction_response_schema_t *overledger_transaction_response_schema_create(
    char *client_id,
    char *request_id,
    char *overledger_transaction_id,
    location_t *location,
    list_t *transaction_history,
    char *type,
    char *transaction_id,
    status_t *status
    ) {
    overledger_transaction_response_schema_t *overledger_transaction_response_schema_local_var = malloc(sizeof(overledger_transaction_response_schema_t));
    if (!overledger_transaction_response_schema_local_var) {
        return NULL;
    }
    overledger_transaction_response_schema_local_var->client_id = client_id;
    overledger_transaction_response_schema_local_var->request_id = request_id;
    overledger_transaction_response_schema_local_var->overledger_transaction_id = overledger_transaction_id;
    overledger_transaction_response_schema_local_var->location = location;
    overledger_transaction_response_schema_local_var->transaction_history = transaction_history;
    overledger_transaction_response_schema_local_var->type = type;
    overledger_transaction_response_schema_local_var->transaction_id = transaction_id;
    overledger_transaction_response_schema_local_var->status = status;

    return overledger_transaction_response_schema_local_var;
}


void overledger_transaction_response_schema_free(overledger_transaction_response_schema_t *overledger_transaction_response_schema) {
    if(NULL == overledger_transaction_response_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (overledger_transaction_response_schema->client_id) {
        free(overledger_transaction_response_schema->client_id);
        overledger_transaction_response_schema->client_id = NULL;
    }
    if (overledger_transaction_response_schema->request_id) {
        free(overledger_transaction_response_schema->request_id);
        overledger_transaction_response_schema->request_id = NULL;
    }
    if (overledger_transaction_response_schema->overledger_transaction_id) {
        free(overledger_transaction_response_schema->overledger_transaction_id);
        overledger_transaction_response_schema->overledger_transaction_id = NULL;
    }
    if (overledger_transaction_response_schema->location) {
        location_free(overledger_transaction_response_schema->location);
        overledger_transaction_response_schema->location = NULL;
    }
    if (overledger_transaction_response_schema->transaction_history) {
        list_ForEach(listEntry, overledger_transaction_response_schema->transaction_history) {
            status_free(listEntry->data);
        }
        list_free(overledger_transaction_response_schema->transaction_history);
        overledger_transaction_response_schema->transaction_history = NULL;
    }
    if (overledger_transaction_response_schema->type) {
        free(overledger_transaction_response_schema->type);
        overledger_transaction_response_schema->type = NULL;
    }
    if (overledger_transaction_response_schema->transaction_id) {
        free(overledger_transaction_response_schema->transaction_id);
        overledger_transaction_response_schema->transaction_id = NULL;
    }
    if (overledger_transaction_response_schema->status) {
        status_free(overledger_transaction_response_schema->status);
        overledger_transaction_response_schema->status = NULL;
    }
    free(overledger_transaction_response_schema);
}

cJSON *overledger_transaction_response_schema_convertToJSON(overledger_transaction_response_schema_t *overledger_transaction_response_schema) {
    cJSON *item = cJSON_CreateObject();

    // overledger_transaction_response_schema->client_id
    if(overledger_transaction_response_schema->client_id) { 
    if(cJSON_AddStringToObject(item, "clientId", overledger_transaction_response_schema->client_id) == NULL) {
    goto fail; //String
    }
     } 


    // overledger_transaction_response_schema->request_id
    if(overledger_transaction_response_schema->request_id) { 
    if(cJSON_AddStringToObject(item, "requestId", overledger_transaction_response_schema->request_id) == NULL) {
    goto fail; //String
    }
     } 


    // overledger_transaction_response_schema->overledger_transaction_id
    if(overledger_transaction_response_schema->overledger_transaction_id) { 
    if(cJSON_AddStringToObject(item, "overledgerTransactionId", overledger_transaction_response_schema->overledger_transaction_id) == NULL) {
    goto fail; //String
    }
     } 


    // overledger_transaction_response_schema->location
    if(overledger_transaction_response_schema->location) { 
    cJSON *location_local_JSON = location_convertToJSON(overledger_transaction_response_schema->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // overledger_transaction_response_schema->transaction_history
    if(overledger_transaction_response_schema->transaction_history) { 
    cJSON *transaction_history = cJSON_AddArrayToObject(item, "transactionHistory");
    if(transaction_history == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *transaction_historyListEntry;
    if (overledger_transaction_response_schema->transaction_history) {
    list_ForEach(transaction_historyListEntry, overledger_transaction_response_schema->transaction_history) {
    cJSON *itemLocal = status_convertToJSON(transaction_historyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(transaction_history, itemLocal);
    }
    }
     } 


    // overledger_transaction_response_schema->type
    if(overledger_transaction_response_schema->type) { 
    if(cJSON_AddStringToObject(item, "type", overledger_transaction_response_schema->type) == NULL) {
    goto fail; //String
    }
     } 


    // overledger_transaction_response_schema->transaction_id
    if(overledger_transaction_response_schema->transaction_id) { 
    if(cJSON_AddStringToObject(item, "transactionId", overledger_transaction_response_schema->transaction_id) == NULL) {
    goto fail; //String
    }
     } 


    // overledger_transaction_response_schema->status
    if(overledger_transaction_response_schema->status) { 
    cJSON *status_local_JSON = status_convertToJSON(overledger_transaction_response_schema->status);
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

overledger_transaction_response_schema_t *overledger_transaction_response_schema_parseFromJSON(cJSON *overledger_transaction_response_schemaJSON){

    overledger_transaction_response_schema_t *overledger_transaction_response_schema_local_var = NULL;

    // overledger_transaction_response_schema->client_id
    cJSON *client_id = cJSON_GetObjectItemCaseSensitive(overledger_transaction_response_schemaJSON, "clientId");
    if (client_id) { 
    if(!cJSON_IsString(client_id))
    {
    goto end; //String
    }
    }

    // overledger_transaction_response_schema->request_id
    cJSON *request_id = cJSON_GetObjectItemCaseSensitive(overledger_transaction_response_schemaJSON, "requestId");
    if (request_id) { 
    if(!cJSON_IsString(request_id))
    {
    goto end; //String
    }
    }

    // overledger_transaction_response_schema->overledger_transaction_id
    cJSON *overledger_transaction_id = cJSON_GetObjectItemCaseSensitive(overledger_transaction_response_schemaJSON, "overledgerTransactionId");
    if (overledger_transaction_id) { 
    if(!cJSON_IsString(overledger_transaction_id))
    {
    goto end; //String
    }
    }

    // overledger_transaction_response_schema->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(overledger_transaction_response_schemaJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // overledger_transaction_response_schema->transaction_history
    cJSON *transaction_history = cJSON_GetObjectItemCaseSensitive(overledger_transaction_response_schemaJSON, "transactionHistory");
    list_t *transaction_historyList;
    if (transaction_history) { 
    cJSON *transaction_history_local_nonprimitive;
    if(!cJSON_IsArray(transaction_history)){
        goto end; //nonprimitive container
    }

    transaction_historyList = list_create();

    cJSON_ArrayForEach(transaction_history_local_nonprimitive,transaction_history )
    {
        if(!cJSON_IsObject(transaction_history_local_nonprimitive)){
            goto end;
        }
        status_t *transaction_historyItem = status_parseFromJSON(transaction_history_local_nonprimitive);

        list_addElement(transaction_historyList, transaction_historyItem);
    }
    }

    // overledger_transaction_response_schema->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(overledger_transaction_response_schemaJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // overledger_transaction_response_schema->transaction_id
    cJSON *transaction_id = cJSON_GetObjectItemCaseSensitive(overledger_transaction_response_schemaJSON, "transactionId");
    if (transaction_id) { 
    if(!cJSON_IsString(transaction_id))
    {
    goto end; //String
    }
    }

    // overledger_transaction_response_schema->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(overledger_transaction_response_schemaJSON, "status");
    status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = status_parseFromJSON(status); //nonprimitive
    }


    overledger_transaction_response_schema_local_var = overledger_transaction_response_schema_create (
        client_id ? strdup(client_id->valuestring) : NULL,
        request_id ? strdup(request_id->valuestring) : NULL,
        overledger_transaction_id ? strdup(overledger_transaction_id->valuestring) : NULL,
        location ? location_local_nonprim : NULL,
        transaction_history ? transaction_historyList : NULL,
        type ? strdup(type->valuestring) : NULL,
        transaction_id ? strdup(transaction_id->valuestring) : NULL,
        status ? status_local_nonprim : NULL
        );

    return overledger_transaction_response_schema_local_var;
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
