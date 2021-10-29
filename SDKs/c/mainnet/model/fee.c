#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fee.h"



fee_t *fee_create(
    char *amount,
    char *unit
    ) {
    fee_t *fee_local_var = malloc(sizeof(fee_t));
    if (!fee_local_var) {
        return NULL;
    }
    fee_local_var->amount = amount;
    fee_local_var->unit = unit;

    return fee_local_var;
}


void fee_free(fee_t *fee) {
    if(NULL == fee){
        return ;
    }
    listEntry_t *listEntry;
    if (fee->amount) {
        free(fee->amount);
        fee->amount = NULL;
    }
    if (fee->unit) {
        free(fee->unit);
        fee->unit = NULL;
    }
    free(fee);
}

cJSON *fee_convertToJSON(fee_t *fee) {
    cJSON *item = cJSON_CreateObject();

    // fee->amount
    if (!fee->amount) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "amount", fee->amount) == NULL) {
    goto fail; //String
    }


    // fee->unit
    if(fee->unit) { 
    if(cJSON_AddStringToObject(item, "unit", fee->unit) == NULL) {
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

fee_t *fee_parseFromJSON(cJSON *feeJSON){

    fee_t *fee_local_var = NULL;

    // fee->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(feeJSON, "amount");
    if (!amount) {
        goto end;
    }

    
    if(!cJSON_IsString(amount))
    {
    goto end; //String
    }

    // fee->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(feeJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit))
    {
    goto end; //String
    }
    }


    fee_local_var = fee_create (
        strdup(amount->valuestring),
        unit ? strdup(unit->valuestring) : NULL
        );

    return fee_local_var;
end:
    return NULL;

}
