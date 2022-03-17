#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "execute_search_transaction_response.h"



execute_search_transaction_response_t *execute_search_transaction_response_create(
    location_t *location,
    char *type,
    transaction_t *transaction,
    char *timestamp,
    status_t *status,
    object_t *extra_fields
    ) {
    execute_search_transaction_response_t *execute_search_transaction_response_local_var = malloc(sizeof(execute_search_transaction_response_t));
    if (!execute_search_transaction_response_local_var) {
        return NULL;
    }
    execute_search_transaction_response_local_var->location = location;
    execute_search_transaction_response_local_var->type = type;
    execute_search_transaction_response_local_var->transaction = transaction;
    execute_search_transaction_response_local_var->timestamp = timestamp;
    execute_search_transaction_response_local_var->status = status;
    execute_search_transaction_response_local_var->extra_fields = extra_fields;

    return execute_search_transaction_response_local_var;
}


void execute_search_transaction_response_free(execute_search_transaction_response_t *execute_search_transaction_response) {
    if(NULL == execute_search_transaction_response){
        return ;
    }
    listEntry_t *listEntry;
    if (execute_search_transaction_response->location) {
        location_free(execute_search_transaction_response->location);
        execute_search_transaction_response->location = NULL;
    }
    if (execute_search_transaction_response->type) {
        free(execute_search_transaction_response->type);
        execute_search_transaction_response->type = NULL;
    }
    if (execute_search_transaction_response->transaction) {
        transaction_free(execute_search_transaction_response->transaction);
        execute_search_transaction_response->transaction = NULL;
    }
    if (execute_search_transaction_response->timestamp) {
        free(execute_search_transaction_response->timestamp);
        execute_search_transaction_response->timestamp = NULL;
    }
    if (execute_search_transaction_response->status) {
        status_free(execute_search_transaction_response->status);
        execute_search_transaction_response->status = NULL;
    }
    if (execute_search_transaction_response->extra_fields) {
        object_free(execute_search_transaction_response->extra_fields);
        execute_search_transaction_response->extra_fields = NULL;
    }
    free(execute_search_transaction_response);
}

cJSON *execute_search_transaction_response_convertToJSON(execute_search_transaction_response_t *execute_search_transaction_response) {
    cJSON *item = cJSON_CreateObject();

    // execute_search_transaction_response->location
    if(execute_search_transaction_response->location) { 
    cJSON *location_local_JSON = location_convertToJSON(execute_search_transaction_response->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // execute_search_transaction_response->type
    if(execute_search_transaction_response->type) { 
    if(cJSON_AddStringToObject(item, "type", execute_search_transaction_response->type) == NULL) {
    goto fail; //String
    }
     } 


    // execute_search_transaction_response->transaction
    if(execute_search_transaction_response->transaction) { 
    cJSON *transaction_local_JSON = transaction_convertToJSON(execute_search_transaction_response->transaction);
    if(transaction_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "transaction", transaction_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // execute_search_transaction_response->timestamp
    if(execute_search_transaction_response->timestamp) { 
    if(cJSON_AddStringToObject(item, "timestamp", execute_search_transaction_response->timestamp) == NULL) {
    goto fail; //String
    }
     } 


    // execute_search_transaction_response->status
    if(execute_search_transaction_response->status) { 
    cJSON *status_local_JSON = status_convertToJSON(execute_search_transaction_response->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // execute_search_transaction_response->extra_fields
    if(execute_search_transaction_response->extra_fields) { 
    cJSON *extra_fields_object = object_convertToJSON(execute_search_transaction_response->extra_fields);
    if(extra_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "extraFields", extra_fields_object);
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

execute_search_transaction_response_t *execute_search_transaction_response_parseFromJSON(cJSON *execute_search_transaction_responseJSON){

    execute_search_transaction_response_t *execute_search_transaction_response_local_var = NULL;

    // execute_search_transaction_response->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(execute_search_transaction_responseJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // execute_search_transaction_response->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(execute_search_transaction_responseJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // execute_search_transaction_response->transaction
    cJSON *transaction = cJSON_GetObjectItemCaseSensitive(execute_search_transaction_responseJSON, "transaction");
    transaction_t *transaction_local_nonprim = NULL;
    if (transaction) { 
    transaction_local_nonprim = transaction_parseFromJSON(transaction); //nonprimitive
    }

    // execute_search_transaction_response->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(execute_search_transaction_responseJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp))
    {
    goto end; //String
    }
    }

    // execute_search_transaction_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(execute_search_transaction_responseJSON, "status");
    status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = status_parseFromJSON(status); //nonprimitive
    }

    // execute_search_transaction_response->extra_fields
    cJSON *extra_fields = cJSON_GetObjectItemCaseSensitive(execute_search_transaction_responseJSON, "extraFields");
    object_t *extra_fields_local_object = NULL;
    if (extra_fields) { 
    extra_fields_local_object = object_parseFromJSON(extra_fields); //object
    }


    execute_search_transaction_response_local_var = execute_search_transaction_response_create (
        location ? location_local_nonprim : NULL,
        type ? strdup(type->valuestring) : NULL,
        transaction ? transaction_local_nonprim : NULL,
        timestamp ? strdup(timestamp->valuestring) : NULL,
        status ? status_local_nonprim : NULL,
        extra_fields ? extra_fields_local_object : NULL
        );

    return execute_search_transaction_response_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    if (transaction_local_nonprim) {
        transaction_free(transaction_local_nonprim);
        transaction_local_nonprim = NULL;
    }
    if (status_local_nonprim) {
        status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
