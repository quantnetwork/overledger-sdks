#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mandate.h"



mandate_t *mandate_create(
    payment_t *payment,
    char *payee_id
    ) {
    mandate_t *mandate_local_var = malloc(sizeof(mandate_t));
    if (!mandate_local_var) {
        return NULL;
    }
    mandate_local_var->payment = payment;
    mandate_local_var->payee_id = payee_id;

    return mandate_local_var;
}


void mandate_free(mandate_t *mandate) {
    if(NULL == mandate){
        return ;
    }
    listEntry_t *listEntry;
    if (mandate->payment) {
        payment_free(mandate->payment);
        mandate->payment = NULL;
    }
    if (mandate->payee_id) {
        free(mandate->payee_id);
        mandate->payee_id = NULL;
    }
    free(mandate);
}

cJSON *mandate_convertToJSON(mandate_t *mandate) {
    cJSON *item = cJSON_CreateObject();

    // mandate->payment
    if(mandate->payment) { 
    cJSON *payment_local_JSON = payment_convertToJSON(mandate->payment);
    if(payment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "payment", payment_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // mandate->payee_id
    if(mandate->payee_id) { 
    if(cJSON_AddStringToObject(item, "payeeId", mandate->payee_id) == NULL) {
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

mandate_t *mandate_parseFromJSON(cJSON *mandateJSON){

    mandate_t *mandate_local_var = NULL;

    // mandate->payment
    cJSON *payment = cJSON_GetObjectItemCaseSensitive(mandateJSON, "payment");
    payment_t *payment_local_nonprim = NULL;
    if (payment) { 
    payment_local_nonprim = payment_parseFromJSON(payment); //nonprimitive
    }

    // mandate->payee_id
    cJSON *payee_id = cJSON_GetObjectItemCaseSensitive(mandateJSON, "payeeId");
    if (payee_id) { 
    if(!cJSON_IsString(payee_id))
    {
    goto end; //String
    }
    }


    mandate_local_var = mandate_create (
        payment ? payment_local_nonprim : NULL,
        payee_id ? strdup(payee_id->valuestring) : NULL
        );

    return mandate_local_var;
end:
    if (payment_local_nonprim) {
        payment_free(payment_local_nonprim);
        payment_local_nonprim = NULL;
    }
    return NULL;

}
