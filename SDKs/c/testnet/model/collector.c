#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "collector.h"



collector_t *collector_create(
    char *account_id,
    transfer_t *transfer
    ) {
    collector_t *collector_local_var = malloc(sizeof(collector_t));
    if (!collector_local_var) {
        return NULL;
    }
    collector_local_var->account_id = account_id;
    collector_local_var->transfer = transfer;

    return collector_local_var;
}


void collector_free(collector_t *collector) {
    if(NULL == collector){
        return ;
    }
    listEntry_t *listEntry;
    if (collector->account_id) {
        free(collector->account_id);
        collector->account_id = NULL;
    }
    if (collector->transfer) {
        transfer_free(collector->transfer);
        collector->transfer = NULL;
    }
    free(collector);
}

cJSON *collector_convertToJSON(collector_t *collector) {
    cJSON *item = cJSON_CreateObject();

    // collector->account_id
    if(collector->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", collector->account_id) == NULL) {
    goto fail; //String
    }
     } 


    // collector->transfer
    if(collector->transfer) { 
    cJSON *transfer_local_JSON = transfer_convertToJSON(collector->transfer);
    if(transfer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "transfer", transfer_local_JSON);
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

collector_t *collector_parseFromJSON(cJSON *collectorJSON){

    collector_t *collector_local_var = NULL;

    // collector->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(collectorJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }

    // collector->transfer
    cJSON *transfer = cJSON_GetObjectItemCaseSensitive(collectorJSON, "transfer");
    transfer_t *transfer_local_nonprim = NULL;
    if (transfer) { 
    transfer_local_nonprim = transfer_parseFromJSON(transfer); //nonprimitive
    }


    collector_local_var = collector_create (
        account_id ? strdup(account_id->valuestring) : NULL,
        transfer ? transfer_local_nonprim : NULL
        );

    return collector_local_var;
end:
    if (transfer_local_nonprim) {
        transfer_free(transfer_local_nonprim);
        transfer_local_nonprim = NULL;
    }
    return NULL;

}
