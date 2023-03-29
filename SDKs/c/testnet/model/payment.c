#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment.h"



payment_t *payment_create(
    char *amount,
    char *unit,
    char *issuer
    ) {
    payment_t *payment_local_var = malloc(sizeof(payment_t));
    if (!payment_local_var) {
        return NULL;
    }
    payment_local_var->amount = amount;
    payment_local_var->unit = unit;
    payment_local_var->issuer = issuer;

    return payment_local_var;
}


void payment_free(payment_t *payment) {
    if(NULL == payment){
        return ;
    }
    listEntry_t *listEntry;
    if (payment->amount) {
        free(payment->amount);
        payment->amount = NULL;
    }
    if (payment->unit) {
        free(payment->unit);
        payment->unit = NULL;
    }
    if (payment->issuer) {
        free(payment->issuer);
        payment->issuer = NULL;
    }
    free(payment);
}

cJSON *payment_convertToJSON(payment_t *payment) {
    cJSON *item = cJSON_CreateObject();

    // payment->amount
    if(payment->amount) { 
    if(cJSON_AddStringToObject(item, "amount", payment->amount) == NULL) {
    goto fail; //String
    }
     } 


    // payment->unit
    if(payment->unit) { 
    if(cJSON_AddStringToObject(item, "unit", payment->unit) == NULL) {
    goto fail; //String
    }
     } 


    // payment->issuer
    if(payment->issuer) { 
    if(cJSON_AddStringToObject(item, "issuer", payment->issuer) == NULL) {
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

payment_t *payment_parseFromJSON(cJSON *paymentJSON){

    payment_t *payment_local_var = NULL;

    // payment->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(paymentJSON, "amount");
    if (amount) { 
    if(!cJSON_IsString(amount))
    {
    goto end; //String
    }
    }

    // payment->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(paymentJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit))
    {
    goto end; //String
    }
    }

    // payment->issuer
    cJSON *issuer = cJSON_GetObjectItemCaseSensitive(paymentJSON, "issuer");
    if (issuer) { 
    if(!cJSON_IsString(issuer))
    {
    goto end; //String
    }
    }


    payment_local_var = payment_create (
        amount ? strdup(amount->valuestring) : NULL,
        unit ? strdup(unit->valuestring) : NULL,
        issuer ? strdup(issuer->valuestring) : NULL
        );

    return payment_local_var;
end:
    return NULL;

}
