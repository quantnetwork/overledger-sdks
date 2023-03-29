#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mint_schema_qrc20.h"



mint_schema_qrc20_t *mint_schema_qrc20_create(
    char *amount,
    char *unit
    ) {
    mint_schema_qrc20_t *mint_schema_qrc20_local_var = malloc(sizeof(mint_schema_qrc20_t));
    if (!mint_schema_qrc20_local_var) {
        return NULL;
    }
    mint_schema_qrc20_local_var->amount = amount;
    mint_schema_qrc20_local_var->unit = unit;

    return mint_schema_qrc20_local_var;
}


void mint_schema_qrc20_free(mint_schema_qrc20_t *mint_schema_qrc20) {
    if(NULL == mint_schema_qrc20){
        return ;
    }
    listEntry_t *listEntry;
    if (mint_schema_qrc20->amount) {
        free(mint_schema_qrc20->amount);
        mint_schema_qrc20->amount = NULL;
    }
    if (mint_schema_qrc20->unit) {
        free(mint_schema_qrc20->unit);
        mint_schema_qrc20->unit = NULL;
    }
    free(mint_schema_qrc20);
}

cJSON *mint_schema_qrc20_convertToJSON(mint_schema_qrc20_t *mint_schema_qrc20) {
    cJSON *item = cJSON_CreateObject();

    // mint_schema_qrc20->amount
    if (!mint_schema_qrc20->amount) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "amount", mint_schema_qrc20->amount) == NULL) {
    goto fail; //String
    }


    // mint_schema_qrc20->unit
    if(mint_schema_qrc20->unit) { 
    if(cJSON_AddStringToObject(item, "unit", mint_schema_qrc20->unit) == NULL) {
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

mint_schema_qrc20_t *mint_schema_qrc20_parseFromJSON(cJSON *mint_schema_qrc20JSON){

    mint_schema_qrc20_t *mint_schema_qrc20_local_var = NULL;

    // mint_schema_qrc20->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(mint_schema_qrc20JSON, "amount");
    if (!amount) {
        goto end;
    }

    
    if(!cJSON_IsString(amount))
    {
    goto end; //String
    }

    // mint_schema_qrc20->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(mint_schema_qrc20JSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit))
    {
    goto end; //String
    }
    }


    mint_schema_qrc20_local_var = mint_schema_qrc20_create (
        strdup(amount->valuestring),
        unit ? strdup(unit->valuestring) : NULL
        );

    return mint_schema_qrc20_local_var;
end:
    return NULL;

}
