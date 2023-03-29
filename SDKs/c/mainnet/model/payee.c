#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payee.h"



payee_t *payee_create(
    payment_t *payment,
    char *payee_id
    ) {
    payee_t *payee_local_var = malloc(sizeof(payee_t));
    if (!payee_local_var) {
        return NULL;
    }
    payee_local_var->payment = payment;
    payee_local_var->payee_id = payee_id;

    return payee_local_var;
}


void payee_free(payee_t *payee) {
    if(NULL == payee){
        return ;
    }
    listEntry_t *listEntry;
    if (payee->payment) {
        payment_free(payee->payment);
        payee->payment = NULL;
    }
    if (payee->payee_id) {
        free(payee->payee_id);
        payee->payee_id = NULL;
    }
    free(payee);
}

cJSON *payee_convertToJSON(payee_t *payee) {
    cJSON *item = cJSON_CreateObject();

    // payee->payment
    if(payee->payment) { 
    cJSON *payment_local_JSON = payment_convertToJSON(payee->payment);
    if(payment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "payment", payment_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // payee->payee_id
    if(payee->payee_id) { 
    if(cJSON_AddStringToObject(item, "payeeId", payee->payee_id) == NULL) {
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

payee_t *payee_parseFromJSON(cJSON *payeeJSON){

    payee_t *payee_local_var = NULL;

    // payee->payment
    cJSON *payment = cJSON_GetObjectItemCaseSensitive(payeeJSON, "payment");
    payment_t *payment_local_nonprim = NULL;
    if (payment) { 
    payment_local_nonprim = payment_parseFromJSON(payment); //nonprimitive
    }

    // payee->payee_id
    cJSON *payee_id = cJSON_GetObjectItemCaseSensitive(payeeJSON, "payeeId");
    if (payee_id) { 
    if(!cJSON_IsString(payee_id))
    {
    goto end; //String
    }
    }


    payee_local_var = payee_create (
        payment ? payment_local_nonprim : NULL,
        payee_id ? strdup(payee_id->valuestring) : NULL
        );

    return payee_local_var;
end:
    if (payment_local_nonprim) {
        payment_free(payment_local_nonprim);
        payment_local_nonprim = NULL;
    }
    return NULL;

}
