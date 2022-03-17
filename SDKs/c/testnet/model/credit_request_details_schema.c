#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "credit_request_details_schema.h"



credit_request_details_schema_t *credit_request_details_schema_create(
    list_t *payee,
    char *overledger_signing_type,
    char *message,
    list_t *payer
    ) {
    credit_request_details_schema_t *credit_request_details_schema_local_var = malloc(sizeof(credit_request_details_schema_t));
    if (!credit_request_details_schema_local_var) {
        return NULL;
    }
    credit_request_details_schema_local_var->payee = payee;
    credit_request_details_schema_local_var->overledger_signing_type = overledger_signing_type;
    credit_request_details_schema_local_var->message = message;
    credit_request_details_schema_local_var->payer = payer;

    return credit_request_details_schema_local_var;
}


void credit_request_details_schema_free(credit_request_details_schema_t *credit_request_details_schema) {
    if(NULL == credit_request_details_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (credit_request_details_schema->payee) {
        list_ForEach(listEntry, credit_request_details_schema->payee) {
            payee_credit_schema_free(listEntry->data);
        }
        list_free(credit_request_details_schema->payee);
        credit_request_details_schema->payee = NULL;
    }
    if (credit_request_details_schema->overledger_signing_type) {
        free(credit_request_details_schema->overledger_signing_type);
        credit_request_details_schema->overledger_signing_type = NULL;
    }
    if (credit_request_details_schema->message) {
        free(credit_request_details_schema->message);
        credit_request_details_schema->message = NULL;
    }
    if (credit_request_details_schema->payer) {
        list_ForEach(listEntry, credit_request_details_schema->payer) {
            payer_credit_schema_free(listEntry->data);
        }
        list_free(credit_request_details_schema->payer);
        credit_request_details_schema->payer = NULL;
    }
    free(credit_request_details_schema);
}

cJSON *credit_request_details_schema_convertToJSON(credit_request_details_schema_t *credit_request_details_schema) {
    cJSON *item = cJSON_CreateObject();

    // credit_request_details_schema->payee
    if(credit_request_details_schema->payee) { 
    cJSON *payee = cJSON_AddArrayToObject(item, "payee");
    if(payee == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *payeeListEntry;
    if (credit_request_details_schema->payee) {
    list_ForEach(payeeListEntry, credit_request_details_schema->payee) {
    cJSON *itemLocal = payee_credit_schema_convertToJSON(payeeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(payee, itemLocal);
    }
    }
     } 


    // credit_request_details_schema->overledger_signing_type
    if(credit_request_details_schema->overledger_signing_type) { 
    if(cJSON_AddStringToObject(item, "overledgerSigningType", credit_request_details_schema->overledger_signing_type) == NULL) {
    goto fail; //String
    }
     } 


    // credit_request_details_schema->message
    if(credit_request_details_schema->message) { 
    if(cJSON_AddStringToObject(item, "message", credit_request_details_schema->message) == NULL) {
    goto fail; //String
    }
     } 


    // credit_request_details_schema->payer
    if(credit_request_details_schema->payer) { 
    cJSON *payer = cJSON_AddArrayToObject(item, "payer");
    if(payer == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *payerListEntry;
    if (credit_request_details_schema->payer) {
    list_ForEach(payerListEntry, credit_request_details_schema->payer) {
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

credit_request_details_schema_t *credit_request_details_schema_parseFromJSON(cJSON *credit_request_details_schemaJSON){

    credit_request_details_schema_t *credit_request_details_schema_local_var = NULL;

    // credit_request_details_schema->payee
    cJSON *payee = cJSON_GetObjectItemCaseSensitive(credit_request_details_schemaJSON, "payee");
    list_t *payeeList;
    if (payee) { 
    cJSON *payee_local_nonprimitive;
    if(!cJSON_IsArray(payee)){
        goto end; //nonprimitive container
    }

    payeeList = list_create();

    cJSON_ArrayForEach(payee_local_nonprimitive,payee )
    {
        if(!cJSON_IsObject(payee_local_nonprimitive)){
            goto end;
        }
        payee_credit_schema_t *payeeItem = payee_credit_schema_parseFromJSON(payee_local_nonprimitive);

        list_addElement(payeeList, payeeItem);
    }
    }

    // credit_request_details_schema->overledger_signing_type
    cJSON *overledger_signing_type = cJSON_GetObjectItemCaseSensitive(credit_request_details_schemaJSON, "overledgerSigningType");
    if (overledger_signing_type) { 
    if(!cJSON_IsString(overledger_signing_type))
    {
    goto end; //String
    }
    }

    // credit_request_details_schema->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(credit_request_details_schemaJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // credit_request_details_schema->payer
    cJSON *payer = cJSON_GetObjectItemCaseSensitive(credit_request_details_schemaJSON, "payer");
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


    credit_request_details_schema_local_var = credit_request_details_schema_create (
        payee ? payeeList : NULL,
        overledger_signing_type ? strdup(overledger_signing_type->valuestring) : NULL,
        message ? strdup(message->valuestring) : NULL,
        payer ? payerList : NULL
        );

    return credit_request_details_schema_local_var;
end:
    return NULL;

}
