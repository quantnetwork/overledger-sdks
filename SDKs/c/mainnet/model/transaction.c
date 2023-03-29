#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transaction.h"



transaction_t *transaction_create(
    list_t *signature,
    list_t *origin,
    fee_t *fee,
    list_t *destination,
    char *_signed,
    list_t *total_payment_amount,
    char *message,
    char *transaction_id,
    list_t *encoded,
    object_t *extra_fields,
    object_t *native_data
    ) {
    transaction_t *transaction_local_var = malloc(sizeof(transaction_t));
    if (!transaction_local_var) {
        return NULL;
    }
    transaction_local_var->signature = signature;
    transaction_local_var->origin = origin;
    transaction_local_var->fee = fee;
    transaction_local_var->destination = destination;
    transaction_local_var->_signed = _signed;
    transaction_local_var->total_payment_amount = total_payment_amount;
    transaction_local_var->message = message;
    transaction_local_var->transaction_id = transaction_id;
    transaction_local_var->encoded = encoded;
    transaction_local_var->extra_fields = extra_fields;
    transaction_local_var->native_data = native_data;

    return transaction_local_var;
}


void transaction_free(transaction_t *transaction) {
    if(NULL == transaction){
        return ;
    }
    listEntry_t *listEntry;
    if (transaction->signature) {
        list_ForEach(listEntry, transaction->signature) {
            free(listEntry->data);
        }
        list_free(transaction->signature);
        transaction->signature = NULL;
    }
    if (transaction->origin) {
        list_ForEach(listEntry, transaction->origin) {
            origin_free(listEntry->data);
        }
        list_free(transaction->origin);
        transaction->origin = NULL;
    }
    if (transaction->fee) {
        fee_free(transaction->fee);
        transaction->fee = NULL;
    }
    if (transaction->destination) {
        list_ForEach(listEntry, transaction->destination) {
            destination_free(listEntry->data);
        }
        list_free(transaction->destination);
        transaction->destination = NULL;
    }
    if (transaction->_signed) {
        free(transaction->_signed);
        transaction->_signed = NULL;
    }
    if (transaction->total_payment_amount) {
        list_ForEach(listEntry, transaction->total_payment_amount) {
            payment_free(listEntry->data);
        }
        list_free(transaction->total_payment_amount);
        transaction->total_payment_amount = NULL;
    }
    if (transaction->message) {
        free(transaction->message);
        transaction->message = NULL;
    }
    if (transaction->transaction_id) {
        free(transaction->transaction_id);
        transaction->transaction_id = NULL;
    }
    if (transaction->encoded) {
        list_ForEach(listEntry, transaction->encoded) {
            free(listEntry->data);
        }
        list_free(transaction->encoded);
        transaction->encoded = NULL;
    }
    if (transaction->extra_fields) {
        object_free(transaction->extra_fields);
        transaction->extra_fields = NULL;
    }
    if (transaction->native_data) {
        object_free(transaction->native_data);
        transaction->native_data = NULL;
    }
    free(transaction);
}

cJSON *transaction_convertToJSON(transaction_t *transaction) {
    cJSON *item = cJSON_CreateObject();

    // transaction->signature
    if(transaction->signature) { 
    cJSON *signature = cJSON_AddArrayToObject(item, "signature");
    if(signature == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *signatureListEntry;
    list_ForEach(signatureListEntry, transaction->signature) {
    if(cJSON_AddStringToObject(signature, "", (char*)signatureListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // transaction->origin
    if(transaction->origin) { 
    cJSON *origin = cJSON_AddArrayToObject(item, "origin");
    if(origin == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *originListEntry;
    if (transaction->origin) {
    list_ForEach(originListEntry, transaction->origin) {
    cJSON *itemLocal = origin_convertToJSON(originListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(origin, itemLocal);
    }
    }
     } 


    // transaction->fee
    if(transaction->fee) { 
    cJSON *fee_local_JSON = fee_convertToJSON(transaction->fee);
    if(fee_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "fee", fee_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // transaction->destination
    if(transaction->destination) { 
    cJSON *destination = cJSON_AddArrayToObject(item, "destination");
    if(destination == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *destinationListEntry;
    if (transaction->destination) {
    list_ForEach(destinationListEntry, transaction->destination) {
    cJSON *itemLocal = destination_convertToJSON(destinationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(destination, itemLocal);
    }
    }
     } 


    // transaction->_signed
    if(transaction->_signed) { 
    if(cJSON_AddStringToObject(item, "signed", transaction->_signed) == NULL) {
    goto fail; //String
    }
     } 


    // transaction->total_payment_amount
    if(transaction->total_payment_amount) { 
    cJSON *total_payment_amount = cJSON_AddArrayToObject(item, "totalPaymentAmount");
    if(total_payment_amount == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *total_payment_amountListEntry;
    if (transaction->total_payment_amount) {
    list_ForEach(total_payment_amountListEntry, transaction->total_payment_amount) {
    cJSON *itemLocal = payment_convertToJSON(total_payment_amountListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(total_payment_amount, itemLocal);
    }
    }
     } 


    // transaction->message
    if(transaction->message) { 
    if(cJSON_AddStringToObject(item, "message", transaction->message) == NULL) {
    goto fail; //String
    }
     } 


    // transaction->transaction_id
    if(transaction->transaction_id) { 
    if(cJSON_AddStringToObject(item, "transactionId", transaction->transaction_id) == NULL) {
    goto fail; //String
    }
     } 


    // transaction->encoded
    if(transaction->encoded) { 
    cJSON *encoded = cJSON_AddArrayToObject(item, "encoded");
    if(encoded == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *encodedListEntry;
    list_ForEach(encodedListEntry, transaction->encoded) {
    if(cJSON_AddStringToObject(encoded, "", (char*)encodedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // transaction->extra_fields
    if(transaction->extra_fields) { 
    cJSON *extra_fields_object = object_convertToJSON(transaction->extra_fields);
    if(extra_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "extraFields", extra_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // transaction->native_data
    if(transaction->native_data) { 
    cJSON *native_data_object = object_convertToJSON(transaction->native_data);
    if(native_data_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nativeData", native_data_object);
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

transaction_t *transaction_parseFromJSON(cJSON *transactionJSON){

    transaction_t *transaction_local_var = NULL;

    // transaction->signature
    cJSON *signature = cJSON_GetObjectItemCaseSensitive(transactionJSON, "signature");
    list_t *signatureList;
    if (signature) { 
    cJSON *signature_local;
    if(!cJSON_IsArray(signature)) {
        goto end;//primitive container
    }
    signatureList = list_create();

    cJSON_ArrayForEach(signature_local, signature)
    {
        if(!cJSON_IsString(signature_local))
        {
            goto end;
        }
        list_addElement(signatureList , strdup(signature_local->valuestring));
    }
    }

    // transaction->origin
    cJSON *origin = cJSON_GetObjectItemCaseSensitive(transactionJSON, "origin");
    list_t *originList;
    if (origin) { 
    cJSON *origin_local_nonprimitive;
    if(!cJSON_IsArray(origin)){
        goto end; //nonprimitive container
    }

    originList = list_create();

    cJSON_ArrayForEach(origin_local_nonprimitive,origin )
    {
        if(!cJSON_IsObject(origin_local_nonprimitive)){
            goto end;
        }
        origin_t *originItem = origin_parseFromJSON(origin_local_nonprimitive);

        list_addElement(originList, originItem);
    }
    }

    // transaction->fee
    cJSON *fee = cJSON_GetObjectItemCaseSensitive(transactionJSON, "fee");
    fee_t *fee_local_nonprim = NULL;
    if (fee) { 
    fee_local_nonprim = fee_parseFromJSON(fee); //nonprimitive
    }

    // transaction->destination
    cJSON *destination = cJSON_GetObjectItemCaseSensitive(transactionJSON, "destination");
    list_t *destinationList;
    if (destination) { 
    cJSON *destination_local_nonprimitive;
    if(!cJSON_IsArray(destination)){
        goto end; //nonprimitive container
    }

    destinationList = list_create();

    cJSON_ArrayForEach(destination_local_nonprimitive,destination )
    {
        if(!cJSON_IsObject(destination_local_nonprimitive)){
            goto end;
        }
        destination_t *destinationItem = destination_parseFromJSON(destination_local_nonprimitive);

        list_addElement(destinationList, destinationItem);
    }
    }

    // transaction->_signed
    cJSON *_signed = cJSON_GetObjectItemCaseSensitive(transactionJSON, "signed");
    if (_signed) { 
    if(!cJSON_IsString(_signed))
    {
    goto end; //String
    }
    }

    // transaction->total_payment_amount
    cJSON *total_payment_amount = cJSON_GetObjectItemCaseSensitive(transactionJSON, "totalPaymentAmount");
    list_t *total_payment_amountList;
    if (total_payment_amount) { 
    cJSON *total_payment_amount_local_nonprimitive;
    if(!cJSON_IsArray(total_payment_amount)){
        goto end; //nonprimitive container
    }

    total_payment_amountList = list_create();

    cJSON_ArrayForEach(total_payment_amount_local_nonprimitive,total_payment_amount )
    {
        if(!cJSON_IsObject(total_payment_amount_local_nonprimitive)){
            goto end;
        }
        payment_t *total_payment_amountItem = payment_parseFromJSON(total_payment_amount_local_nonprimitive);

        list_addElement(total_payment_amountList, total_payment_amountItem);
    }
    }

    // transaction->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(transactionJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // transaction->transaction_id
    cJSON *transaction_id = cJSON_GetObjectItemCaseSensitive(transactionJSON, "transactionId");
    if (transaction_id) { 
    if(!cJSON_IsString(transaction_id))
    {
    goto end; //String
    }
    }

    // transaction->encoded
    cJSON *encoded = cJSON_GetObjectItemCaseSensitive(transactionJSON, "encoded");
    list_t *encodedList;
    if (encoded) { 
    cJSON *encoded_local;
    if(!cJSON_IsArray(encoded)) {
        goto end;//primitive container
    }
    encodedList = list_create();

    cJSON_ArrayForEach(encoded_local, encoded)
    {
        if(!cJSON_IsString(encoded_local))
        {
            goto end;
        }
        list_addElement(encodedList , strdup(encoded_local->valuestring));
    }
    }

    // transaction->extra_fields
    cJSON *extra_fields = cJSON_GetObjectItemCaseSensitive(transactionJSON, "extraFields");
    object_t *extra_fields_local_object = NULL;
    if (extra_fields) { 
    extra_fields_local_object = object_parseFromJSON(extra_fields); //object
    }

    // transaction->native_data
    cJSON *native_data = cJSON_GetObjectItemCaseSensitive(transactionJSON, "nativeData");
    object_t *native_data_local_object = NULL;
    if (native_data) { 
    native_data_local_object = object_parseFromJSON(native_data); //object
    }


    transaction_local_var = transaction_create (
        signature ? signatureList : NULL,
        origin ? originList : NULL,
        fee ? fee_local_nonprim : NULL,
        destination ? destinationList : NULL,
        _signed ? strdup(_signed->valuestring) : NULL,
        total_payment_amount ? total_payment_amountList : NULL,
        message ? strdup(message->valuestring) : NULL,
        transaction_id ? strdup(transaction_id->valuestring) : NULL,
        encoded ? encodedList : NULL,
        extra_fields ? extra_fields_local_object : NULL,
        native_data ? native_data_local_object : NULL
        );

    return transaction_local_var;
end:
    if (fee_local_nonprim) {
        fee_free(fee_local_nonprim);
        fee_local_nonprim = NULL;
    }
    return NULL;

}
