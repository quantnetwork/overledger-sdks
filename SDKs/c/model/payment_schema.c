#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_schema.h"



payment_schema_t *payment_schema_create(
    char *amount,
    char *unit
    ) {
    payment_schema_t *payment_schema_local_var = malloc(sizeof(payment_schema_t));
    if (!payment_schema_local_var) {
        return NULL;
    }
    payment_schema_local_var->amount = amount;
    payment_schema_local_var->unit = unit;

    return payment_schema_local_var;
}


void payment_schema_free(payment_schema_t *payment_schema) {
    if(NULL == payment_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_schema->amount) {
        free(payment_schema->amount);
        payment_schema->amount = NULL;
    }
    if (payment_schema->unit) {
        free(payment_schema->unit);
        payment_schema->unit = NULL;
    }
    free(payment_schema);
}

cJSON *payment_schema_convertToJSON(payment_schema_t *payment_schema) {
    cJSON *item = cJSON_CreateObject();

    // payment_schema->amount
    if (!payment_schema->amount) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "amount", payment_schema->amount) == NULL) {
    goto fail; //String
    }


    // payment_schema->unit
    if(payment_schema->unit) { 
    if(cJSON_AddStringToObject(item, "unit", payment_schema->unit) == NULL) {
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

payment_schema_t *payment_schema_parseFromJSON(cJSON *payment_schemaJSON){

    payment_schema_t *payment_schema_local_var = NULL;

    // payment_schema->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(payment_schemaJSON, "amount");
    if (!amount) {
        goto end;
    }

    
    if(!cJSON_IsString(amount))
    {
    goto end; //String
    }

    // payment_schema->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(payment_schemaJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit))
    {
    goto end; //String
    }
    }


    payment_schema_local_var = payment_schema_create (
        strdup(amount->valuestring),
        unit ? strdup(unit->valuestring) : NULL
        );

    return payment_schema_local_var;
end:
    return NULL;

}
