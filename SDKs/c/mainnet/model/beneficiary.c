#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "beneficiary.h"



beneficiary_t *beneficiary_create(
    char *account_id,
    mint_t *mint
    ) {
    beneficiary_t *beneficiary_local_var = malloc(sizeof(beneficiary_t));
    if (!beneficiary_local_var) {
        return NULL;
    }
    beneficiary_local_var->account_id = account_id;
    beneficiary_local_var->mint = mint;

    return beneficiary_local_var;
}


void beneficiary_free(beneficiary_t *beneficiary) {
    if(NULL == beneficiary){
        return ;
    }
    listEntry_t *listEntry;
    if (beneficiary->account_id) {
        free(beneficiary->account_id);
        beneficiary->account_id = NULL;
    }
    if (beneficiary->mint) {
        mint_free(beneficiary->mint);
        beneficiary->mint = NULL;
    }
    free(beneficiary);
}

cJSON *beneficiary_convertToJSON(beneficiary_t *beneficiary) {
    cJSON *item = cJSON_CreateObject();

    // beneficiary->account_id
    if(beneficiary->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", beneficiary->account_id) == NULL) {
    goto fail; //String
    }
     } 


    // beneficiary->mint
    if(beneficiary->mint) { 
    cJSON *mint_local_JSON = mint_convertToJSON(beneficiary->mint);
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

beneficiary_t *beneficiary_parseFromJSON(cJSON *beneficiaryJSON){

    beneficiary_t *beneficiary_local_var = NULL;

    // beneficiary->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(beneficiaryJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }

    // beneficiary->mint
    cJSON *mint = cJSON_GetObjectItemCaseSensitive(beneficiaryJSON, "mint");
    mint_t *mint_local_nonprim = NULL;
    if (mint) { 
    mint_local_nonprim = mint_parseFromJSON(mint); //nonprimitive
    }


    beneficiary_local_var = beneficiary_create (
        account_id ? strdup(account_id->valuestring) : NULL,
        mint ? mint_local_nonprim : NULL
        );

    return beneficiary_local_var;
end:
    if (mint_local_nonprim) {
        mint_free(mint_local_nonprim);
        mint_local_nonprim = NULL;
    }
    return NULL;

}
