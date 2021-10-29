#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "smart_contract_payment_schema.h"



smart_contract_payment_schema_t *smart_contract_payment_schema_create(
    char *amount,
    char *unit
    ) {
    smart_contract_payment_schema_t *smart_contract_payment_schema_local_var = malloc(sizeof(smart_contract_payment_schema_t));
    if (!smart_contract_payment_schema_local_var) {
        return NULL;
    }
    smart_contract_payment_schema_local_var->amount = amount;
    smart_contract_payment_schema_local_var->unit = unit;

    return smart_contract_payment_schema_local_var;
}


void smart_contract_payment_schema_free(smart_contract_payment_schema_t *smart_contract_payment_schema) {
    if(NULL == smart_contract_payment_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (smart_contract_payment_schema->amount) {
        free(smart_contract_payment_schema->amount);
        smart_contract_payment_schema->amount = NULL;
    }
    if (smart_contract_payment_schema->unit) {
        free(smart_contract_payment_schema->unit);
        smart_contract_payment_schema->unit = NULL;
    }
    free(smart_contract_payment_schema);
}

cJSON *smart_contract_payment_schema_convertToJSON(smart_contract_payment_schema_t *smart_contract_payment_schema) {
    cJSON *item = cJSON_CreateObject();

    // smart_contract_payment_schema->amount
    if(smart_contract_payment_schema->amount) { 
    if(cJSON_AddStringToObject(item, "amount", smart_contract_payment_schema->amount) == NULL) {
    goto fail; //String
    }
     } 


    // smart_contract_payment_schema->unit
    if(smart_contract_payment_schema->unit) { 
    if(cJSON_AddStringToObject(item, "unit", smart_contract_payment_schema->unit) == NULL) {
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

smart_contract_payment_schema_t *smart_contract_payment_schema_parseFromJSON(cJSON *smart_contract_payment_schemaJSON){

    smart_contract_payment_schema_t *smart_contract_payment_schema_local_var = NULL;

    // smart_contract_payment_schema->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(smart_contract_payment_schemaJSON, "amount");
    if (amount) { 
    if(!cJSON_IsString(amount))
    {
    goto end; //String
    }
    }

    // smart_contract_payment_schema->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(smart_contract_payment_schemaJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit))
    {
    goto end; //String
    }
    }


    smart_contract_payment_schema_local_var = smart_contract_payment_schema_create (
        amount ? strdup(amount->valuestring) : NULL,
        unit ? strdup(unit->valuestring) : NULL
        );

    return smart_contract_payment_schema_local_var;
end:
    return NULL;

}
