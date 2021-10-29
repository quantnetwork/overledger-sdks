#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "smart_contract_event_history.h"



smart_contract_event_history_t *smart_contract_event_history_create(
    char *event_id,
    char *event_name,
    char *event_parameters,
    char *transaction_id,
    char *timestamp
    ) {
    smart_contract_event_history_t *smart_contract_event_history_local_var = malloc(sizeof(smart_contract_event_history_t));
    if (!smart_contract_event_history_local_var) {
        return NULL;
    }
    smart_contract_event_history_local_var->event_id = event_id;
    smart_contract_event_history_local_var->event_name = event_name;
    smart_contract_event_history_local_var->event_parameters = event_parameters;
    smart_contract_event_history_local_var->transaction_id = transaction_id;
    smart_contract_event_history_local_var->timestamp = timestamp;

    return smart_contract_event_history_local_var;
}


void smart_contract_event_history_free(smart_contract_event_history_t *smart_contract_event_history) {
    if(NULL == smart_contract_event_history){
        return ;
    }
    listEntry_t *listEntry;
    if (smart_contract_event_history->event_id) {
        free(smart_contract_event_history->event_id);
        smart_contract_event_history->event_id = NULL;
    }
    if (smart_contract_event_history->event_name) {
        free(smart_contract_event_history->event_name);
        smart_contract_event_history->event_name = NULL;
    }
    if (smart_contract_event_history->event_parameters) {
        free(smart_contract_event_history->event_parameters);
        smart_contract_event_history->event_parameters = NULL;
    }
    if (smart_contract_event_history->transaction_id) {
        free(smart_contract_event_history->transaction_id);
        smart_contract_event_history->transaction_id = NULL;
    }
    if (smart_contract_event_history->timestamp) {
        free(smart_contract_event_history->timestamp);
        smart_contract_event_history->timestamp = NULL;
    }
    free(smart_contract_event_history);
}

cJSON *smart_contract_event_history_convertToJSON(smart_contract_event_history_t *smart_contract_event_history) {
    cJSON *item = cJSON_CreateObject();

    // smart_contract_event_history->event_id
    if(smart_contract_event_history->event_id) { 
    if(cJSON_AddStringToObject(item, "eventId", smart_contract_event_history->event_id) == NULL) {
    goto fail; //String
    }
     } 


    // smart_contract_event_history->event_name
    if(smart_contract_event_history->event_name) { 
    if(cJSON_AddStringToObject(item, "eventName", smart_contract_event_history->event_name) == NULL) {
    goto fail; //String
    }
     } 


    // smart_contract_event_history->event_parameters
    if(smart_contract_event_history->event_parameters) { 
    if(cJSON_AddStringToObject(item, "eventParameters", smart_contract_event_history->event_parameters) == NULL) {
    goto fail; //String
    }
     } 


    // smart_contract_event_history->transaction_id
    if(smart_contract_event_history->transaction_id) { 
    if(cJSON_AddStringToObject(item, "transactionId", smart_contract_event_history->transaction_id) == NULL) {
    goto fail; //String
    }
     } 


    // smart_contract_event_history->timestamp
    if(smart_contract_event_history->timestamp) { 
    if(cJSON_AddStringToObject(item, "timestamp", smart_contract_event_history->timestamp) == NULL) {
    goto fail; //Date-Time
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

smart_contract_event_history_t *smart_contract_event_history_parseFromJSON(cJSON *smart_contract_event_historyJSON){

    smart_contract_event_history_t *smart_contract_event_history_local_var = NULL;

    // smart_contract_event_history->event_id
    cJSON *event_id = cJSON_GetObjectItemCaseSensitive(smart_contract_event_historyJSON, "eventId");
    if (event_id) { 
    if(!cJSON_IsString(event_id))
    {
    goto end; //String
    }
    }

    // smart_contract_event_history->event_name
    cJSON *event_name = cJSON_GetObjectItemCaseSensitive(smart_contract_event_historyJSON, "eventName");
    if (event_name) { 
    if(!cJSON_IsString(event_name))
    {
    goto end; //String
    }
    }

    // smart_contract_event_history->event_parameters
    cJSON *event_parameters = cJSON_GetObjectItemCaseSensitive(smart_contract_event_historyJSON, "eventParameters");
    if (event_parameters) { 
    if(!cJSON_IsString(event_parameters))
    {
    goto end; //String
    }
    }

    // smart_contract_event_history->transaction_id
    cJSON *transaction_id = cJSON_GetObjectItemCaseSensitive(smart_contract_event_historyJSON, "transactionId");
    if (transaction_id) { 
    if(!cJSON_IsString(transaction_id))
    {
    goto end; //String
    }
    }

    // smart_contract_event_history->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(smart_contract_event_historyJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp))
    {
    goto end; //DateTime
    }
    }


    smart_contract_event_history_local_var = smart_contract_event_history_create (
        event_id ? strdup(event_id->valuestring) : NULL,
        event_name ? strdup(event_name->valuestring) : NULL,
        event_parameters ? strdup(event_parameters->valuestring) : NULL,
        transaction_id ? strdup(transaction_id->valuestring) : NULL,
        timestamp ? strdup(timestamp->valuestring) : NULL
        );

    return smart_contract_event_history_local_var;
end:
    return NULL;

}
