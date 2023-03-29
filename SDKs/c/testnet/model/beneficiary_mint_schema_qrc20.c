#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "beneficiary_mint_schema_qrc20.h"



beneficiary_mint_schema_qrc20_t *beneficiary_mint_schema_qrc20_create(
    char *account_id,
    mint_schema_qrc20_t *mint
    ) {
    beneficiary_mint_schema_qrc20_t *beneficiary_mint_schema_qrc20_local_var = malloc(sizeof(beneficiary_mint_schema_qrc20_t));
    if (!beneficiary_mint_schema_qrc20_local_var) {
        return NULL;
    }
    beneficiary_mint_schema_qrc20_local_var->account_id = account_id;
    beneficiary_mint_schema_qrc20_local_var->mint = mint;

    return beneficiary_mint_schema_qrc20_local_var;
}


void beneficiary_mint_schema_qrc20_free(beneficiary_mint_schema_qrc20_t *beneficiary_mint_schema_qrc20) {
    if(NULL == beneficiary_mint_schema_qrc20){
        return ;
    }
    listEntry_t *listEntry;
    if (beneficiary_mint_schema_qrc20->account_id) {
        free(beneficiary_mint_schema_qrc20->account_id);
        beneficiary_mint_schema_qrc20->account_id = NULL;
    }
    if (beneficiary_mint_schema_qrc20->mint) {
        mint_schema_qrc20_free(beneficiary_mint_schema_qrc20->mint);
        beneficiary_mint_schema_qrc20->mint = NULL;
    }
    free(beneficiary_mint_schema_qrc20);
}

cJSON *beneficiary_mint_schema_qrc20_convertToJSON(beneficiary_mint_schema_qrc20_t *beneficiary_mint_schema_qrc20) {
    cJSON *item = cJSON_CreateObject();

    // beneficiary_mint_schema_qrc20->account_id
    if(beneficiary_mint_schema_qrc20->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", beneficiary_mint_schema_qrc20->account_id) == NULL) {
    goto fail; //String
    }
     } 


    // beneficiary_mint_schema_qrc20->mint
    if(beneficiary_mint_schema_qrc20->mint) { 
    cJSON *mint_local_JSON = mint_schema_qrc20_convertToJSON(beneficiary_mint_schema_qrc20->mint);
    if(mint_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mint", mint_local_JSON);
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

beneficiary_mint_schema_qrc20_t *beneficiary_mint_schema_qrc20_parseFromJSON(cJSON *beneficiary_mint_schema_qrc20JSON){

    beneficiary_mint_schema_qrc20_t *beneficiary_mint_schema_qrc20_local_var = NULL;

    // beneficiary_mint_schema_qrc20->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(beneficiary_mint_schema_qrc20JSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }

    // beneficiary_mint_schema_qrc20->mint
    cJSON *mint = cJSON_GetObjectItemCaseSensitive(beneficiary_mint_schema_qrc20JSON, "mint");
    mint_schema_qrc20_t *mint_local_nonprim = NULL;
    if (mint) { 
    mint_local_nonprim = mint_schema_qrc20_parseFromJSON(mint); //nonprimitive
    }


    beneficiary_mint_schema_qrc20_local_var = beneficiary_mint_schema_qrc20_create (
        account_id ? strdup(account_id->valuestring) : NULL,
        mint ? mint_local_nonprim : NULL
        );

    return beneficiary_mint_schema_qrc20_local_var;
end:
    if (mint_local_nonprim) {
        mint_schema_qrc20_free(mint_local_nonprim);
        mint_local_nonprim = NULL;
    }
    return NULL;

}
