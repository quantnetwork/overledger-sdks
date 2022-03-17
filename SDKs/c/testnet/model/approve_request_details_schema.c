#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "approve_request_details_schema.h"



approve_request_details_schema_t *approve_request_details_schema_create(
    list_t *mandate,
    char *overledger_signing_type,
    list_t *payer
    ) {
    approve_request_details_schema_t *approve_request_details_schema_local_var = malloc(sizeof(approve_request_details_schema_t));
    if (!approve_request_details_schema_local_var) {
        return NULL;
    }
    approve_request_details_schema_local_var->mandate = mandate;
    approve_request_details_schema_local_var->overledger_signing_type = overledger_signing_type;
    approve_request_details_schema_local_var->payer = payer;

    return approve_request_details_schema_local_var;
}


void approve_request_details_schema_free(approve_request_details_schema_t *approve_request_details_schema) {
    if(NULL == approve_request_details_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (approve_request_details_schema->mandate) {
        list_ForEach(listEntry, approve_request_details_schema->mandate) {
            payee_credit_schema_free(listEntry->data);
        }
        list_free(approve_request_details_schema->mandate);
        approve_request_details_schema->mandate = NULL;
    }
    if (approve_request_details_schema->overledger_signing_type) {
        free(approve_request_details_schema->overledger_signing_type);
        approve_request_details_schema->overledger_signing_type = NULL;
    }
    if (approve_request_details_schema->payer) {
        list_ForEach(listEntry, approve_request_details_schema->payer) {
            payer_credit_schema_free(listEntry->data);
        }
        list_free(approve_request_details_schema->payer);
        approve_request_details_schema->payer = NULL;
    }
    free(approve_request_details_schema);
}

cJSON *approve_request_details_schema_convertToJSON(approve_request_details_schema_t *approve_request_details_schema) {
    cJSON *item = cJSON_CreateObject();

    // approve_request_details_schema->mandate
    if(approve_request_details_schema->mandate) { 
    cJSON *mandate = cJSON_AddArrayToObject(item, "mandate");
    if(mandate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *mandateListEntry;
    if (approve_request_details_schema->mandate) {
    list_ForEach(mandateListEntry, approve_request_details_schema->mandate) {
    cJSON *itemLocal = payee_credit_schema_convertToJSON(mandateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(mandate, itemLocal);
    }
    }
     } 


    // approve_request_details_schema->overledger_signing_type
    if(approve_request_details_schema->overledger_signing_type) { 
    if(cJSON_AddStringToObject(item, "overledgerSigningType", approve_request_details_schema->overledger_signing_type) == NULL) {
    goto fail; //String
    }
     } 


    // approve_request_details_schema->payer
    if(approve_request_details_schema->payer) { 
    cJSON *payer = cJSON_AddArrayToObject(item, "payer");
    if(payer == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *payerListEntry;
    if (approve_request_details_schema->payer) {
    list_ForEach(payerListEntry, approve_request_details_schema->payer) {
    cJSON *itemLocal = payer_credit_schema_convertToJSON(payerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(payer, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

approve_request_details_schema_t *approve_request_details_schema_parseFromJSON(cJSON *approve_request_details_schemaJSON){

    approve_request_details_schema_t *approve_request_details_schema_local_var = NULL;

    // approve_request_details_schema->mandate
    cJSON *mandate = cJSON_GetObjectItemCaseSensitive(approve_request_details_schemaJSON, "mandate");
    list_t *mandateList;
    if (mandate) { 
    cJSON *mandate_local_nonprimitive;
    if(!cJSON_IsArray(mandate)){
        goto end; //nonprimitive container
    }

    mandateList = list_create();

    cJSON_ArrayForEach(mandate_local_nonprimitive,mandate )
    {
        if(!cJSON_IsObject(mandate_local_nonprimitive)){
            goto end;
        }
        payee_credit_schema_t *mandateItem = payee_credit_schema_parseFromJSON(mandate_local_nonprimitive);

        list_addElement(mandateList, mandateItem);
    }
    }

    // approve_request_details_schema->overledger_signing_type
    cJSON *overledger_signing_type = cJSON_GetObjectItemCaseSensitive(approve_request_details_schemaJSON, "overledgerSigningType");
    if (overledger_signing_type) { 
    if(!cJSON_IsString(overledger_signing_type))
    {
    goto end; //String
    }
    }

    // approve_request_details_schema->payer
    cJSON *payer = cJSON_GetObjectItemCaseSensitive(approve_request_details_schemaJSON, "payer");
    list_t *payerList;
    if (payer) { 
    cJSON *payer_local_nonprimitive;
    if(!cJSON_IsArray(payer)){
        goto end; //nonprimitive container
    }

    payerList = list_create();

    cJSON_ArrayForEach(payer_local_nonprimitive,payer )
    {
        if(!cJSON_IsObject(payer_local_nonprimitive)){
            goto end;
        }
        payer_credit_schema_t *payerItem = payer_credit_schema_parseFromJSON(payer_local_nonprimitive);

        list_addElement(payerList, payerItem);
    }
    }


    approve_request_details_schema_local_var = approve_request_details_schema_create (
        mandate ? mandateList : NULL,
        overledger_signing_type ? strdup(overledger_signing_type->valuestring) : NULL,
        payer ? payerList : NULL
        );

    return approve_request_details_schema_local_var;
end:
    return NULL;

}
