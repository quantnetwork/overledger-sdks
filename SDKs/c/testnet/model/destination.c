#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "destination.h"



destination_t *destination_create(
    transfer_t *transfer,
    smart_contract_t *smart_contract,
    payment_t *payment,
    char *destination_id
    ) {
    destination_t *destination_local_var = malloc(sizeof(destination_t));
    if (!destination_local_var) {
        return NULL;
    }
    destination_local_var->transfer = transfer;
    destination_local_var->smart_contract = smart_contract;
    destination_local_var->payment = payment;
    destination_local_var->destination_id = destination_id;

    return destination_local_var;
}


void destination_free(destination_t *destination) {
    if(NULL == destination){
        return ;
    }
    listEntry_t *listEntry;
    if (destination->transfer) {
        transfer_free(destination->transfer);
        destination->transfer = NULL;
    }
    if (destination->smart_contract) {
        smart_contract_free(destination->smart_contract);
        destination->smart_contract = NULL;
    }
    if (destination->payment) {
        payment_free(destination->payment);
        destination->payment = NULL;
    }
    if (destination->destination_id) {
        free(destination->destination_id);
        destination->destination_id = NULL;
    }
    free(destination);
}

cJSON *destination_convertToJSON(destination_t *destination) {
    cJSON *item = cJSON_CreateObject();

    // destination->transfer
    if(destination->transfer) { 
    cJSON *transfer_local_JSON = transfer_convertToJSON(destination->transfer);
    if(transfer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "transfer", transfer_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // destination->smart_contract
    if(destination->smart_contract) { 
    cJSON *smart_contract_local_JSON = smart_contract_convertToJSON(destination->smart_contract);
    if(smart_contract_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "smartContract", smart_contract_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // destination->payment
    if(destination->payment) { 
    cJSON *payment_local_JSON = payment_convertToJSON(destination->payment);
    if(payment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "payment", payment_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // destination->destination_id
    if(destination->destination_id) { 
    if(cJSON_AddStringToObject(item, "destinationId", destination->destination_id) == NULL) {
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

destination_t *destination_parseFromJSON(cJSON *destinationJSON){

    destination_t *destination_local_var = NULL;

    // destination->transfer
    cJSON *transfer = cJSON_GetObjectItemCaseSensitive(destinationJSON, "transfer");
    transfer_t *transfer_local_nonprim = NULL;
    if (transfer) { 
    transfer_local_nonprim = transfer_parseFromJSON(transfer); //nonprimitive
    }

    // destination->smart_contract
    cJSON *smart_contract = cJSON_GetObjectItemCaseSensitive(destinationJSON, "smartContract");
    smart_contract_t *smart_contract_local_nonprim = NULL;
    if (smart_contract) { 
    smart_contract_local_nonprim = smart_contract_parseFromJSON(smart_contract); //nonprimitive
    }

    // destination->payment
    cJSON *payment = cJSON_GetObjectItemCaseSensitive(destinationJSON, "payment");
    payment_t *payment_local_nonprim = NULL;
    if (payment) { 
    payment_local_nonprim = payment_parseFromJSON(payment); //nonprimitive
    }

    // destination->destination_id
    cJSON *destination_id = cJSON_GetObjectItemCaseSensitive(destinationJSON, "destinationId");
    if (destination_id) { 
    if(!cJSON_IsString(destination_id))
    {
    goto end; //String
    }
    }


    destination_local_var = destination_create (
        transfer ? transfer_local_nonprim : NULL,
        smart_contract ? smart_contract_local_nonprim : NULL,
        payment ? payment_local_nonprim : NULL,
        destination_id ? strdup(destination_id->valuestring) : NULL
        );

    return destination_local_var;
end:
    if (transfer_local_nonprim) {
        transfer_free(transfer_local_nonprim);
        transfer_local_nonprim = NULL;
    }
    if (smart_contract_local_nonprim) {
        smart_contract_free(smart_contract_local_nonprim);
        smart_contract_local_nonprim = NULL;
    }
    if (payment_local_nonprim) {
        payment_free(payment_local_nonprim);
        payment_local_nonprim = NULL;
    }
    return NULL;

}
