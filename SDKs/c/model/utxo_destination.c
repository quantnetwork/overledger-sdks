#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "utxo_destination.h"



utxo_destination_t *utxo_destination_create(
    utxo_smart_contract_t *smart_contract,
    payment_t *payment,
    char *destination_id
    ) {
    utxo_destination_t *utxo_destination_local_var = malloc(sizeof(utxo_destination_t));
    if (!utxo_destination_local_var) {
        return NULL;
    }
    utxo_destination_local_var->smart_contract = smart_contract;
    utxo_destination_local_var->payment = payment;
    utxo_destination_local_var->destination_id = destination_id;

    return utxo_destination_local_var;
}


void utxo_destination_free(utxo_destination_t *utxo_destination) {
    if(NULL == utxo_destination){
        return ;
    }
    listEntry_t *listEntry;
    if (utxo_destination->smart_contract) {
        utxo_smart_contract_free(utxo_destination->smart_contract);
        utxo_destination->smart_contract = NULL;
    }
    if (utxo_destination->payment) {
        payment_free(utxo_destination->payment);
        utxo_destination->payment = NULL;
    }
    if (utxo_destination->destination_id) {
        free(utxo_destination->destination_id);
        utxo_destination->destination_id = NULL;
    }
    free(utxo_destination);
}

cJSON *utxo_destination_convertToJSON(utxo_destination_t *utxo_destination) {
    cJSON *item = cJSON_CreateObject();

    // utxo_destination->smart_contract
    if(utxo_destination->smart_contract) { 
    cJSON *smart_contract_local_JSON = utxo_smart_contract_convertToJSON(utxo_destination->smart_contract);
    if(smart_contract_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "smartContract", smart_contract_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // utxo_destination->payment
    if(utxo_destination->payment) { 
    cJSON *payment_local_JSON = payment_convertToJSON(utxo_destination->payment);
    if(payment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "payment", payment_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // utxo_destination->destination_id
    if(utxo_destination->destination_id) { 
    if(cJSON_AddStringToObject(item, "destinationId", utxo_destination->destination_id) == NULL) {
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

utxo_destination_t *utxo_destination_parseFromJSON(cJSON *utxo_destinationJSON){

    utxo_destination_t *utxo_destination_local_var = NULL;

    // utxo_destination->smart_contract
    cJSON *smart_contract = cJSON_GetObjectItemCaseSensitive(utxo_destinationJSON, "smartContract");
    utxo_smart_contract_t *smart_contract_local_nonprim = NULL;
    if (smart_contract) { 
    smart_contract_local_nonprim = utxo_smart_contract_parseFromJSON(smart_contract); //nonprimitive
    }

    // utxo_destination->payment
    cJSON *payment = cJSON_GetObjectItemCaseSensitive(utxo_destinationJSON, "payment");
    payment_t *payment_local_nonprim = NULL;
    if (payment) { 
    payment_local_nonprim = payment_parseFromJSON(payment); //nonprimitive
    }

    // utxo_destination->destination_id
    cJSON *destination_id = cJSON_GetObjectItemCaseSensitive(utxo_destinationJSON, "destinationId");
    if (destination_id) { 
    if(!cJSON_IsString(destination_id))
    {
    goto end; //String
    }
    }


    utxo_destination_local_var = utxo_destination_create (
        smart_contract ? smart_contract_local_nonprim : NULL,
        payment ? payment_local_nonprim : NULL,
        destination_id ? strdup(destination_id->valuestring) : NULL
        );

    return utxo_destination_local_var;
end:
    if (smart_contract_local_nonprim) {
        utxo_smart_contract_free(smart_contract_local_nonprim);
        smart_contract_local_nonprim = NULL;
    }
    if (payment_local_nonprim) {
        payment_free(payment_local_nonprim);
        payment_local_nonprim = NULL;
    }
    return NULL;

}
