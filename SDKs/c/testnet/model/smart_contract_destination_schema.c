#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "smart_contract_destination_schema.h"



smart_contract_destination_schema_t *smart_contract_destination_schema_create(
    char *destination_id,
    smart_contract_schema_t *smart_contract,
    smart_contract_payment_schema_t *payment
    ) {
    smart_contract_destination_schema_t *smart_contract_destination_schema_local_var = malloc(sizeof(smart_contract_destination_schema_t));
    if (!smart_contract_destination_schema_local_var) {
        return NULL;
    }
    smart_contract_destination_schema_local_var->destination_id = destination_id;
    smart_contract_destination_schema_local_var->smart_contract = smart_contract;
    smart_contract_destination_schema_local_var->payment = payment;

    return smart_contract_destination_schema_local_var;
}


void smart_contract_destination_schema_free(smart_contract_destination_schema_t *smart_contract_destination_schema) {
    if(NULL == smart_contract_destination_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (smart_contract_destination_schema->destination_id) {
        free(smart_contract_destination_schema->destination_id);
        smart_contract_destination_schema->destination_id = NULL;
    }
    if (smart_contract_destination_schema->smart_contract) {
        smart_contract_schema_free(smart_contract_destination_schema->smart_contract);
        smart_contract_destination_schema->smart_contract = NULL;
    }
    if (smart_contract_destination_schema->payment) {
        smart_contract_payment_schema_free(smart_contract_destination_schema->payment);
        smart_contract_destination_schema->payment = NULL;
    }
    free(smart_contract_destination_schema);
}

cJSON *smart_contract_destination_schema_convertToJSON(smart_contract_destination_schema_t *smart_contract_destination_schema) {
    cJSON *item = cJSON_CreateObject();

    // smart_contract_destination_schema->destination_id
    if(smart_contract_destination_schema->destination_id) { 
    if(cJSON_AddStringToObject(item, "destinationId", smart_contract_destination_schema->destination_id) == NULL) {
    goto fail; //String
    }
     } 


    // smart_contract_destination_schema->smart_contract
    if(smart_contract_destination_schema->smart_contract) { 
    cJSON *smart_contract_local_JSON = smart_contract_schema_convertToJSON(smart_contract_destination_schema->smart_contract);
    if(smart_contract_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "smartContract", smart_contract_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // smart_contract_destination_schema->payment
    if(smart_contract_destination_schema->payment) { 
    cJSON *payment_local_JSON = smart_contract_payment_schema_convertToJSON(smart_contract_destination_schema->payment);
    if(payment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "payment", payment_local_JSON);
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

smart_contract_destination_schema_t *smart_contract_destination_schema_parseFromJSON(cJSON *smart_contract_destination_schemaJSON){

    smart_contract_destination_schema_t *smart_contract_destination_schema_local_var = NULL;

    // smart_contract_destination_schema->destination_id
    cJSON *destination_id = cJSON_GetObjectItemCaseSensitive(smart_contract_destination_schemaJSON, "destinationId");
    if (destination_id) { 
    if(!cJSON_IsString(destination_id))
    {
    goto end; //String
    }
    }

    // smart_contract_destination_schema->smart_contract
    cJSON *smart_contract = cJSON_GetObjectItemCaseSensitive(smart_contract_destination_schemaJSON, "smartContract");
    smart_contract_schema_t *smart_contract_local_nonprim = NULL;
    if (smart_contract) { 
    smart_contract_local_nonprim = smart_contract_schema_parseFromJSON(smart_contract); //nonprimitive
    }

    // smart_contract_destination_schema->payment
    cJSON *payment = cJSON_GetObjectItemCaseSensitive(smart_contract_destination_schemaJSON, "payment");
    smart_contract_payment_schema_t *payment_local_nonprim = NULL;
    if (payment) { 
    payment_local_nonprim = smart_contract_payment_schema_parseFromJSON(payment); //nonprimitive
    }


    smart_contract_destination_schema_local_var = smart_contract_destination_schema_create (
        destination_id ? strdup(destination_id->valuestring) : NULL,
        smart_contract ? smart_contract_local_nonprim : NULL,
        payment ? payment_local_nonprim : NULL
        );

    return smart_contract_destination_schema_local_var;
end:
    if (smart_contract_local_nonprim) {
        smart_contract_schema_free(smart_contract_local_nonprim);
        smart_contract_local_nonprim = NULL;
    }
    if (payment_local_nonprim) {
        smart_contract_payment_schema_free(payment_local_nonprim);
        payment_local_nonprim = NULL;
    }
    return NULL;

}
