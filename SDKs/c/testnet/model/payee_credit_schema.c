#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payee_credit_schema.h"



payee_credit_schema_t *payee_credit_schema_create(
    payment_schema_t *payment,
    char *payee_id
    ) {
    payee_credit_schema_t *payee_credit_schema_local_var = malloc(sizeof(payee_credit_schema_t));
    if (!payee_credit_schema_local_var) {
        return NULL;
    }
    payee_credit_schema_local_var->payment = payment;
    payee_credit_schema_local_var->payee_id = payee_id;

    return payee_credit_schema_local_var;
}


void payee_credit_schema_free(payee_credit_schema_t *payee_credit_schema) {
    if(NULL == payee_credit_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (payee_credit_schema->payment) {
        payment_schema_free(payee_credit_schema->payment);
        payee_credit_schema->payment = NULL;
    }
    if (payee_credit_schema->payee_id) {
        free(payee_credit_schema->payee_id);
        payee_credit_schema->payee_id = NULL;
    }
    free(payee_credit_schema);
}

cJSON *payee_credit_schema_convertToJSON(payee_credit_schema_t *payee_credit_schema) {
    cJSON *item = cJSON_CreateObject();

    // payee_credit_schema->payment
    if(payee_credit_schema->payment) { 
    cJSON *payment_local_JSON = payment_schema_convertToJSON(payee_credit_schema->payment);
    if(payment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "payment", payment_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // payee_credit_schema->payee_id
    if(payee_credit_schema->payee_id) { 
    if(cJSON_AddStringToObject(item, "payeeId", payee_credit_schema->payee_id) == NULL) {
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

payee_credit_schema_t *payee_credit_schema_parseFromJSON(cJSON *payee_credit_schemaJSON){

    payee_credit_schema_t *payee_credit_schema_local_var = NULL;

    // payee_credit_schema->payment
    cJSON *payment = cJSON_GetObjectItemCaseSensitive(payee_credit_schemaJSON, "payment");
    payment_schema_t *payment_local_nonprim = NULL;
    if (payment) { 
    payment_local_nonprim = payment_schema_parseFromJSON(payment); //nonprimitive
    }

    // payee_credit_schema->payee_id
    cJSON *payee_id = cJSON_GetObjectItemCaseSensitive(payee_credit_schemaJSON, "payeeId");
    if (payee_id) { 
    if(!cJSON_IsString(payee_id))
    {
    goto end; //String
    }
    }


    payee_credit_schema_local_var = payee_credit_schema_create (
        payment ? payment_local_nonprim : NULL,
        payee_id ? strdup(payee_id->valuestring) : NULL
        );

    return payee_credit_schema_local_var;
end:
    if (payment_local_nonprim) {
        payment_schema_free(payment_local_nonprim);
        payment_local_nonprim = NULL;
    }
    return NULL;

}
