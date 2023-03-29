#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mint_request_details_schema_qrc20.h"



mint_request_details_schema_qrc20_t *mint_request_details_schema_qrc20_create(
    creator_mint_schema_t *creator,
    beneficiary_mint_schema_qrc20_t *beneficiary,
    char *message,
    char *overledger_signing_type
    ) {
    mint_request_details_schema_qrc20_t *mint_request_details_schema_qrc20_local_var = malloc(sizeof(mint_request_details_schema_qrc20_t));
    if (!mint_request_details_schema_qrc20_local_var) {
        return NULL;
    }
    mint_request_details_schema_qrc20_local_var->creator = creator;
    mint_request_details_schema_qrc20_local_var->beneficiary = beneficiary;
    mint_request_details_schema_qrc20_local_var->message = message;
    mint_request_details_schema_qrc20_local_var->overledger_signing_type = overledger_signing_type;

    return mint_request_details_schema_qrc20_local_var;
}


void mint_request_details_schema_qrc20_free(mint_request_details_schema_qrc20_t *mint_request_details_schema_qrc20) {
    if(NULL == mint_request_details_schema_qrc20){
        return ;
    }
    listEntry_t *listEntry;
    if (mint_request_details_schema_qrc20->creator) {
        creator_mint_schema_free(mint_request_details_schema_qrc20->creator);
        mint_request_details_schema_qrc20->creator = NULL;
    }
    if (mint_request_details_schema_qrc20->beneficiary) {
        beneficiary_mint_schema_qrc20_free(mint_request_details_schema_qrc20->beneficiary);
        mint_request_details_schema_qrc20->beneficiary = NULL;
    }
    if (mint_request_details_schema_qrc20->message) {
        free(mint_request_details_schema_qrc20->message);
        mint_request_details_schema_qrc20->message = NULL;
    }
    if (mint_request_details_schema_qrc20->overledger_signing_type) {
        free(mint_request_details_schema_qrc20->overledger_signing_type);
        mint_request_details_schema_qrc20->overledger_signing_type = NULL;
    }
    free(mint_request_details_schema_qrc20);
}

cJSON *mint_request_details_schema_qrc20_convertToJSON(mint_request_details_schema_qrc20_t *mint_request_details_schema_qrc20) {
    cJSON *item = cJSON_CreateObject();

    // mint_request_details_schema_qrc20->creator
    if(mint_request_details_schema_qrc20->creator) { 
    cJSON *creator_local_JSON = creator_mint_schema_convertToJSON(mint_request_details_schema_qrc20->creator);
    if(creator_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "creator", creator_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // mint_request_details_schema_qrc20->beneficiary
    if(mint_request_details_schema_qrc20->beneficiary) { 
    cJSON *beneficiary_local_JSON = beneficiary_mint_schema_qrc20_convertToJSON(mint_request_details_schema_qrc20->beneficiary);
    if(beneficiary_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "beneficiary", beneficiary_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // mint_request_details_schema_qrc20->message
    if(mint_request_details_schema_qrc20->message) { 
    if(cJSON_AddStringToObject(item, "message", mint_request_details_schema_qrc20->message) == NULL) {
    goto fail; //String
    }
     } 


    // mint_request_details_schema_qrc20->overledger_signing_type
    if(mint_request_details_schema_qrc20->overledger_signing_type) { 
    if(cJSON_AddStringToObject(item, "overledgerSigningType", mint_request_details_schema_qrc20->overledger_signing_type) == NULL) {
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

mint_request_details_schema_qrc20_t *mint_request_details_schema_qrc20_parseFromJSON(cJSON *mint_request_details_schema_qrc20JSON){

    mint_request_details_schema_qrc20_t *mint_request_details_schema_qrc20_local_var = NULL;

    // mint_request_details_schema_qrc20->creator
    cJSON *creator = cJSON_GetObjectItemCaseSensitive(mint_request_details_schema_qrc20JSON, "creator");
    creator_mint_schema_t *creator_local_nonprim = NULL;
    if (creator) { 
    creator_local_nonprim = creator_mint_schema_parseFromJSON(creator); //nonprimitive
    }

    // mint_request_details_schema_qrc20->beneficiary
    cJSON *beneficiary = cJSON_GetObjectItemCaseSensitive(mint_request_details_schema_qrc20JSON, "beneficiary");
    beneficiary_mint_schema_qrc20_t *beneficiary_local_nonprim = NULL;
    if (beneficiary) { 
    beneficiary_local_nonprim = beneficiary_mint_schema_qrc20_parseFromJSON(beneficiary); //nonprimitive
    }

    // mint_request_details_schema_qrc20->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(mint_request_details_schema_qrc20JSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // mint_request_details_schema_qrc20->overledger_signing_type
    cJSON *overledger_signing_type = cJSON_GetObjectItemCaseSensitive(mint_request_details_schema_qrc20JSON, "overledgerSigningType");
    if (overledger_signing_type) { 
    if(!cJSON_IsString(overledger_signing_type))
    {
    goto end; //String
    }
    }


    mint_request_details_schema_qrc20_local_var = mint_request_details_schema_qrc20_create (
        creator ? creator_local_nonprim : NULL,
        beneficiary ? beneficiary_local_nonprim : NULL,
        message ? strdup(message->valuestring) : NULL,
        overledger_signing_type ? strdup(overledger_signing_type->valuestring) : NULL
        );

    return mint_request_details_schema_qrc20_local_var;
end:
    if (creator_local_nonprim) {
        creator_mint_schema_free(creator_local_nonprim);
        creator_local_nonprim = NULL;
    }
    if (beneficiary_local_nonprim) {
        beneficiary_mint_schema_qrc20_free(beneficiary_local_nonprim);
        beneficiary_local_nonprim = NULL;
    }
    return NULL;

}
