#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_request_details.h"



prepare_request_details_t *prepare_request_details_create(
    list_t *mandate,
    alias_details_t *alias_details,
    pagination_t *pagination,
    list_t *origin,
    list_t *destination,
    char *token_name,
    char *block_search_type,
    list_t *payer,
    collector_t *collector,
    list_t *payee,
    additional_owner_t *additional_owner,
    owner_t *owner,
    creator_t *creator,
    list_t *receiver,
    char *token_id,
    char *message,
    lock_details_t *lock_details,
    char *block_id,
    char *account_id,
    char *token_unit,
    beneficiary_t *beneficiary,
    list_t *sender,
    account_details_t *account_details,
    char *overledger_signing_type,
    payment_t *total_payment_amount,
    signer_account_t *signer_account
    ) {
    prepare_request_details_t *prepare_request_details_local_var = malloc(sizeof(prepare_request_details_t));
    if (!prepare_request_details_local_var) {
        return NULL;
    }
    prepare_request_details_local_var->mandate = mandate;
    prepare_request_details_local_var->alias_details = alias_details;
    prepare_request_details_local_var->pagination = pagination;
    prepare_request_details_local_var->origin = origin;
    prepare_request_details_local_var->destination = destination;
    prepare_request_details_local_var->token_name = token_name;
    prepare_request_details_local_var->block_search_type = block_search_type;
    prepare_request_details_local_var->payer = payer;
    prepare_request_details_local_var->collector = collector;
    prepare_request_details_local_var->payee = payee;
    prepare_request_details_local_var->additional_owner = additional_owner;
    prepare_request_details_local_var->owner = owner;
    prepare_request_details_local_var->creator = creator;
    prepare_request_details_local_var->receiver = receiver;
    prepare_request_details_local_var->token_id = token_id;
    prepare_request_details_local_var->message = message;
    prepare_request_details_local_var->lock_details = lock_details;
    prepare_request_details_local_var->block_id = block_id;
    prepare_request_details_local_var->account_id = account_id;
    prepare_request_details_local_var->token_unit = token_unit;
    prepare_request_details_local_var->beneficiary = beneficiary;
    prepare_request_details_local_var->sender = sender;
    prepare_request_details_local_var->account_details = account_details;
    prepare_request_details_local_var->overledger_signing_type = overledger_signing_type;
    prepare_request_details_local_var->total_payment_amount = total_payment_amount;
    prepare_request_details_local_var->signer_account = signer_account;

    return prepare_request_details_local_var;
}


void prepare_request_details_free(prepare_request_details_t *prepare_request_details) {
    if(NULL == prepare_request_details){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_request_details->mandate) {
        list_ForEach(listEntry, prepare_request_details->mandate) {
            mandate_free(listEntry->data);
        }
        list_free(prepare_request_details->mandate);
        prepare_request_details->mandate = NULL;
    }
    if (prepare_request_details->alias_details) {
        alias_details_free(prepare_request_details->alias_details);
        prepare_request_details->alias_details = NULL;
    }
    if (prepare_request_details->pagination) {
        pagination_free(prepare_request_details->pagination);
        prepare_request_details->pagination = NULL;
    }
    if (prepare_request_details->origin) {
        list_ForEach(listEntry, prepare_request_details->origin) {
            origin_free(listEntry->data);
        }
        list_free(prepare_request_details->origin);
        prepare_request_details->origin = NULL;
    }
    if (prepare_request_details->destination) {
        list_ForEach(listEntry, prepare_request_details->destination) {
            destination_free(listEntry->data);
        }
        list_free(prepare_request_details->destination);
        prepare_request_details->destination = NULL;
    }
    if (prepare_request_details->token_name) {
        free(prepare_request_details->token_name);
        prepare_request_details->token_name = NULL;
    }
    if (prepare_request_details->block_search_type) {
        free(prepare_request_details->block_search_type);
        prepare_request_details->block_search_type = NULL;
    }
    if (prepare_request_details->payer) {
        list_ForEach(listEntry, prepare_request_details->payer) {
            payer_free(listEntry->data);
        }
        list_free(prepare_request_details->payer);
        prepare_request_details->payer = NULL;
    }
    if (prepare_request_details->collector) {
        collector_free(prepare_request_details->collector);
        prepare_request_details->collector = NULL;
    }
    if (prepare_request_details->payee) {
        list_ForEach(listEntry, prepare_request_details->payee) {
            payee_free(listEntry->data);
        }
        list_free(prepare_request_details->payee);
        prepare_request_details->payee = NULL;
    }
    if (prepare_request_details->additional_owner) {
        additional_owner_free(prepare_request_details->additional_owner);
        prepare_request_details->additional_owner = NULL;
    }
    if (prepare_request_details->owner) {
        owner_free(prepare_request_details->owner);
        prepare_request_details->owner = NULL;
    }
    if (prepare_request_details->creator) {
        creator_free(prepare_request_details->creator);
        prepare_request_details->creator = NULL;
    }
    if (prepare_request_details->receiver) {
        list_ForEach(listEntry, prepare_request_details->receiver) {
            receiver_free(listEntry->data);
        }
        list_free(prepare_request_details->receiver);
        prepare_request_details->receiver = NULL;
    }
    if (prepare_request_details->token_id) {
        free(prepare_request_details->token_id);
        prepare_request_details->token_id = NULL;
    }
    if (prepare_request_details->message) {
        free(prepare_request_details->message);
        prepare_request_details->message = NULL;
    }
    if (prepare_request_details->lock_details) {
        lock_details_free(prepare_request_details->lock_details);
        prepare_request_details->lock_details = NULL;
    }
    if (prepare_request_details->block_id) {
        free(prepare_request_details->block_id);
        prepare_request_details->block_id = NULL;
    }
    if (prepare_request_details->account_id) {
        free(prepare_request_details->account_id);
        prepare_request_details->account_id = NULL;
    }
    if (prepare_request_details->token_unit) {
        free(prepare_request_details->token_unit);
        prepare_request_details->token_unit = NULL;
    }
    if (prepare_request_details->beneficiary) {
        beneficiary_free(prepare_request_details->beneficiary);
        prepare_request_details->beneficiary = NULL;
    }
    if (prepare_request_details->sender) {
        list_ForEach(listEntry, prepare_request_details->sender) {
            sender_free(listEntry->data);
        }
        list_free(prepare_request_details->sender);
        prepare_request_details->sender = NULL;
    }
    if (prepare_request_details->account_details) {
        account_details_free(prepare_request_details->account_details);
        prepare_request_details->account_details = NULL;
    }
    if (prepare_request_details->overledger_signing_type) {
        free(prepare_request_details->overledger_signing_type);
        prepare_request_details->overledger_signing_type = NULL;
    }
    if (prepare_request_details->total_payment_amount) {
        payment_free(prepare_request_details->total_payment_amount);
        prepare_request_details->total_payment_amount = NULL;
    }
    if (prepare_request_details->signer_account) {
        signer_account_free(prepare_request_details->signer_account);
        prepare_request_details->signer_account = NULL;
    }
    free(prepare_request_details);
}

cJSON *prepare_request_details_convertToJSON(prepare_request_details_t *prepare_request_details) {
    cJSON *item = cJSON_CreateObject();

    // prepare_request_details->mandate
    if(prepare_request_details->mandate) { 
    cJSON *mandate = cJSON_AddArrayToObject(item, "mandate");
    if(mandate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *mandateListEntry;
    if (prepare_request_details->mandate) {
    list_ForEach(mandateListEntry, prepare_request_details->mandate) {
    cJSON *itemLocal = mandate_convertToJSON(mandateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(mandate, itemLocal);
    }
    }
     } 


    // prepare_request_details->alias_details
    if(prepare_request_details->alias_details) { 
    cJSON *alias_details_local_JSON = alias_details_convertToJSON(prepare_request_details->alias_details);
    if(alias_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "aliasDetails", alias_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_request_details->pagination
    if(prepare_request_details->pagination) { 
    cJSON *pagination_local_JSON = pagination_convertToJSON(prepare_request_details->pagination);
    if(pagination_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pagination", pagination_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_request_details->origin
    if(prepare_request_details->origin) { 
    cJSON *origin = cJSON_AddArrayToObject(item, "origin");
    if(origin == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *originListEntry;
    if (prepare_request_details->origin) {
    list_ForEach(originListEntry, prepare_request_details->origin) {
    cJSON *itemLocal = origin_convertToJSON(originListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(origin, itemLocal);
    }
    }
     } 


    // prepare_request_details->destination
    if(prepare_request_details->destination) { 
    cJSON *destination = cJSON_AddArrayToObject(item, "destination");
    if(destination == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *destinationListEntry;
    if (prepare_request_details->destination) {
    list_ForEach(destinationListEntry, prepare_request_details->destination) {
    cJSON *itemLocal = destination_convertToJSON(destinationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(destination, itemLocal);
    }
    }
     } 


    // prepare_request_details->token_name
    if(prepare_request_details->token_name) { 
    if(cJSON_AddStringToObject(item, "tokenName", prepare_request_details->token_name) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_request_details->block_search_type
    if(prepare_request_details->block_search_type) { 
    if(cJSON_AddStringToObject(item, "blockSearchType", prepare_request_details->block_search_type) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_request_details->payer
    if(prepare_request_details->payer) { 
    cJSON *payer = cJSON_AddArrayToObject(item, "payer");
    if(payer == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *payerListEntry;
    if (prepare_request_details->payer) {
    list_ForEach(payerListEntry, prepare_request_details->payer) {
    cJSON *itemLocal = payer_convertToJSON(payerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(payer, itemLocal);
    }
    }
     } 


    // prepare_request_details->collector
    if(prepare_request_details->collector) { 
    cJSON *collector_local_JSON = collector_convertToJSON(prepare_request_details->collector);
    if(collector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "collector", collector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_request_details->payee
    if(prepare_request_details->payee) { 
    cJSON *payee = cJSON_AddArrayToObject(item, "payee");
    if(payee == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *payeeListEntry;
    if (prepare_request_details->payee) {
    list_ForEach(payeeListEntry, prepare_request_details->payee) {
    cJSON *itemLocal = payee_convertToJSON(payeeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(payee, itemLocal);
    }
    }
     } 


    // prepare_request_details->additional_owner
    if(prepare_request_details->additional_owner) { 
    cJSON *additional_owner_local_JSON = additional_owner_convertToJSON(prepare_request_details->additional_owner);
    if(additional_owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additionalOwner", additional_owner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_request_details->owner
    if(prepare_request_details->owner) { 
    cJSON *owner_local_JSON = owner_convertToJSON(prepare_request_details->owner);
    if(owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "owner", owner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_request_details->creator
    if(prepare_request_details->creator) { 
    cJSON *creator_local_JSON = creator_convertToJSON(prepare_request_details->creator);
    if(creator_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "creator", creator_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_request_details->receiver
    if(prepare_request_details->receiver) { 
    cJSON *receiver = cJSON_AddArrayToObject(item, "receiver");
    if(receiver == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *receiverListEntry;
    if (prepare_request_details->receiver) {
    list_ForEach(receiverListEntry, prepare_request_details->receiver) {
    cJSON *itemLocal = receiver_convertToJSON(receiverListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(receiver, itemLocal);
    }
    }
     } 


    // prepare_request_details->token_id
    if(prepare_request_details->token_id) { 
    if(cJSON_AddStringToObject(item, "tokenId", prepare_request_details->token_id) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_request_details->message
    if(prepare_request_details->message) { 
    if(cJSON_AddStringToObject(item, "message", prepare_request_details->message) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_request_details->lock_details
    if(prepare_request_details->lock_details) { 
    cJSON *lock_details_local_JSON = lock_details_convertToJSON(prepare_request_details->lock_details);
    if(lock_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "lockDetails", lock_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_request_details->block_id
    if(prepare_request_details->block_id) { 
    if(cJSON_AddStringToObject(item, "blockId", prepare_request_details->block_id) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_request_details->account_id
    if(prepare_request_details->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", prepare_request_details->account_id) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_request_details->token_unit
    if(prepare_request_details->token_unit) { 
    if(cJSON_AddStringToObject(item, "tokenUnit", prepare_request_details->token_unit) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_request_details->beneficiary
    if(prepare_request_details->beneficiary) { 
    cJSON *beneficiary_local_JSON = beneficiary_convertToJSON(prepare_request_details->beneficiary);
    if(beneficiary_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "beneficiary", beneficiary_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_request_details->sender
    if(prepare_request_details->sender) { 
    cJSON *sender = cJSON_AddArrayToObject(item, "sender");
    if(sender == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *senderListEntry;
    if (prepare_request_details->sender) {
    list_ForEach(senderListEntry, prepare_request_details->sender) {
    cJSON *itemLocal = sender_convertToJSON(senderListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(sender, itemLocal);
    }
    }
     } 


    // prepare_request_details->account_details
    if(prepare_request_details->account_details) { 
    cJSON *account_details_local_JSON = account_details_convertToJSON(prepare_request_details->account_details);
    if(account_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "accountDetails", account_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_request_details->overledger_signing_type
    if(prepare_request_details->overledger_signing_type) { 
    if(cJSON_AddStringToObject(item, "overledgerSigningType", prepare_request_details->overledger_signing_type) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_request_details->total_payment_amount
    if(prepare_request_details->total_payment_amount) { 
    cJSON *total_payment_amount_local_JSON = payment_convertToJSON(prepare_request_details->total_payment_amount);
    if(total_payment_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalPaymentAmount", total_payment_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_request_details->signer_account
    if(prepare_request_details->signer_account) { 
    cJSON *signer_account_local_JSON = signer_account_convertToJSON(prepare_request_details->signer_account);
    if(signer_account_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "signerAccount", signer_account_local_JSON);
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

prepare_request_details_t *prepare_request_details_parseFromJSON(cJSON *prepare_request_detailsJSON){

    prepare_request_details_t *prepare_request_details_local_var = NULL;

    // prepare_request_details->mandate
    cJSON *mandate = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "mandate");
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
        mandate_t *mandateItem = mandate_parseFromJSON(mandate_local_nonprimitive);

        list_addElement(mandateList, mandateItem);
    }
    }

    // prepare_request_details->alias_details
    cJSON *alias_details = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "aliasDetails");
    alias_details_t *alias_details_local_nonprim = NULL;
    if (alias_details) { 
    alias_details_local_nonprim = alias_details_parseFromJSON(alias_details); //nonprimitive
    }

    // prepare_request_details->pagination
    cJSON *pagination = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "pagination");
    pagination_t *pagination_local_nonprim = NULL;
    if (pagination) { 
    pagination_local_nonprim = pagination_parseFromJSON(pagination); //nonprimitive
    }

    // prepare_request_details->origin
    cJSON *origin = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "origin");
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

    // prepare_request_details->destination
    cJSON *destination = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "destination");
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

    // prepare_request_details->token_name
    cJSON *token_name = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "tokenName");
    if (token_name) { 
    if(!cJSON_IsString(token_name))
    {
    goto end; //String
    }
    }

    // prepare_request_details->block_search_type
    cJSON *block_search_type = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "blockSearchType");
    if (block_search_type) { 
    if(!cJSON_IsString(block_search_type))
    {
    goto end; //String
    }
    }

    // prepare_request_details->payer
    cJSON *payer = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "payer");
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
        payer_t *payerItem = payer_parseFromJSON(payer_local_nonprimitive);

        list_addElement(payerList, payerItem);
    }
    }

    // prepare_request_details->collector
    cJSON *collector = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "collector");
    collector_t *collector_local_nonprim = NULL;
    if (collector) { 
    collector_local_nonprim = collector_parseFromJSON(collector); //nonprimitive
    }

    // prepare_request_details->payee
    cJSON *payee = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "payee");
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
        payee_t *payeeItem = payee_parseFromJSON(payee_local_nonprimitive);

        list_addElement(payeeList, payeeItem);
    }
    }

    // prepare_request_details->additional_owner
    cJSON *additional_owner = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "additionalOwner");
    additional_owner_t *additional_owner_local_nonprim = NULL;
    if (additional_owner) { 
    additional_owner_local_nonprim = additional_owner_parseFromJSON(additional_owner); //nonprimitive
    }

    // prepare_request_details->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "owner");
    owner_t *owner_local_nonprim = NULL;
    if (owner) { 
    owner_local_nonprim = owner_parseFromJSON(owner); //nonprimitive
    }

    // prepare_request_details->creator
    cJSON *creator = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "creator");
    creator_t *creator_local_nonprim = NULL;
    if (creator) { 
    creator_local_nonprim = creator_parseFromJSON(creator); //nonprimitive
    }

    // prepare_request_details->receiver
    cJSON *receiver = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "receiver");
    list_t *receiverList;
    if (receiver) { 
    cJSON *receiver_local_nonprimitive;
    if(!cJSON_IsArray(receiver)){
        goto end; //nonprimitive container
    }

    receiverList = list_create();

    cJSON_ArrayForEach(receiver_local_nonprimitive,receiver )
    {
        if(!cJSON_IsObject(receiver_local_nonprimitive)){
            goto end;
        }
        receiver_t *receiverItem = receiver_parseFromJSON(receiver_local_nonprimitive);

        list_addElement(receiverList, receiverItem);
    }
    }

    // prepare_request_details->token_id
    cJSON *token_id = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "tokenId");
    if (token_id) { 
    if(!cJSON_IsString(token_id))
    {
    goto end; //String
    }
    }

    // prepare_request_details->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // prepare_request_details->lock_details
    cJSON *lock_details = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "lockDetails");
    lock_details_t *lock_details_local_nonprim = NULL;
    if (lock_details) { 
    lock_details_local_nonprim = lock_details_parseFromJSON(lock_details); //nonprimitive
    }

    // prepare_request_details->block_id
    cJSON *block_id = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "blockId");
    if (block_id) { 
    if(!cJSON_IsString(block_id))
    {
    goto end; //String
    }
    }

    // prepare_request_details->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }

    // prepare_request_details->token_unit
    cJSON *token_unit = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "tokenUnit");
    if (token_unit) { 
    if(!cJSON_IsString(token_unit))
    {
    goto end; //String
    }
    }

    // prepare_request_details->beneficiary
    cJSON *beneficiary = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "beneficiary");
    beneficiary_t *beneficiary_local_nonprim = NULL;
    if (beneficiary) { 
    beneficiary_local_nonprim = beneficiary_parseFromJSON(beneficiary); //nonprimitive
    }

    // prepare_request_details->sender
    cJSON *sender = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "sender");
    list_t *senderList;
    if (sender) { 
    cJSON *sender_local_nonprimitive;
    if(!cJSON_IsArray(sender)){
        goto end; //nonprimitive container
    }

    senderList = list_create();

    cJSON_ArrayForEach(sender_local_nonprimitive,sender )
    {
        if(!cJSON_IsObject(sender_local_nonprimitive)){
            goto end;
        }
        sender_t *senderItem = sender_parseFromJSON(sender_local_nonprimitive);

        list_addElement(senderList, senderItem);
    }
    }

    // prepare_request_details->account_details
    cJSON *account_details = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "accountDetails");
    account_details_t *account_details_local_nonprim = NULL;
    if (account_details) { 
    account_details_local_nonprim = account_details_parseFromJSON(account_details); //nonprimitive
    }

    // prepare_request_details->overledger_signing_type
    cJSON *overledger_signing_type = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "overledgerSigningType");
    if (overledger_signing_type) { 
    if(!cJSON_IsString(overledger_signing_type))
    {
    goto end; //String
    }
    }

    // prepare_request_details->total_payment_amount
    cJSON *total_payment_amount = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "totalPaymentAmount");
    payment_t *total_payment_amount_local_nonprim = NULL;
    if (total_payment_amount) { 
    total_payment_amount_local_nonprim = payment_parseFromJSON(total_payment_amount); //nonprimitive
    }

    // prepare_request_details->signer_account
    cJSON *signer_account = cJSON_GetObjectItemCaseSensitive(prepare_request_detailsJSON, "signerAccount");
    signer_account_t *signer_account_local_nonprim = NULL;
    if (signer_account) { 
    signer_account_local_nonprim = signer_account_parseFromJSON(signer_account); //nonprimitive
    }


    prepare_request_details_local_var = prepare_request_details_create (
        mandate ? mandateList : NULL,
        alias_details ? alias_details_local_nonprim : NULL,
        pagination ? pagination_local_nonprim : NULL,
        origin ? originList : NULL,
        destination ? destinationList : NULL,
        token_name ? strdup(token_name->valuestring) : NULL,
        block_search_type ? strdup(block_search_type->valuestring) : NULL,
        payer ? payerList : NULL,
        collector ? collector_local_nonprim : NULL,
        payee ? payeeList : NULL,
        additional_owner ? additional_owner_local_nonprim : NULL,
        owner ? owner_local_nonprim : NULL,
        creator ? creator_local_nonprim : NULL,
        receiver ? receiverList : NULL,
        token_id ? strdup(token_id->valuestring) : NULL,
        message ? strdup(message->valuestring) : NULL,
        lock_details ? lock_details_local_nonprim : NULL,
        block_id ? strdup(block_id->valuestring) : NULL,
        account_id ? strdup(account_id->valuestring) : NULL,
        token_unit ? strdup(token_unit->valuestring) : NULL,
        beneficiary ? beneficiary_local_nonprim : NULL,
        sender ? senderList : NULL,
        account_details ? account_details_local_nonprim : NULL,
        overledger_signing_type ? strdup(overledger_signing_type->valuestring) : NULL,
        total_payment_amount ? total_payment_amount_local_nonprim : NULL,
        signer_account ? signer_account_local_nonprim : NULL
        );

    return prepare_request_details_local_var;
end:
    if (alias_details_local_nonprim) {
        alias_details_free(alias_details_local_nonprim);
        alias_details_local_nonprim = NULL;
    }
    if (pagination_local_nonprim) {
        pagination_free(pagination_local_nonprim);
        pagination_local_nonprim = NULL;
    }
    if (collector_local_nonprim) {
        collector_free(collector_local_nonprim);
        collector_local_nonprim = NULL;
    }
    if (additional_owner_local_nonprim) {
        additional_owner_free(additional_owner_local_nonprim);
        additional_owner_local_nonprim = NULL;
    }
    if (owner_local_nonprim) {
        owner_free(owner_local_nonprim);
        owner_local_nonprim = NULL;
    }
    if (creator_local_nonprim) {
        creator_free(creator_local_nonprim);
        creator_local_nonprim = NULL;
    }
    if (lock_details_local_nonprim) {
        lock_details_free(lock_details_local_nonprim);
        lock_details_local_nonprim = NULL;
    }
    if (beneficiary_local_nonprim) {
        beneficiary_free(beneficiary_local_nonprim);
        beneficiary_local_nonprim = NULL;
    }
    if (account_details_local_nonprim) {
        account_details_free(account_details_local_nonprim);
        account_details_local_nonprim = NULL;
    }
    if (total_payment_amount_local_nonprim) {
        payment_free(total_payment_amount_local_nonprim);
        total_payment_amount_local_nonprim = NULL;
    }
    if (signer_account_local_nonprim) {
        signer_account_free(signer_account_local_nonprim);
        signer_account_local_nonprim = NULL;
    }
    return NULL;

}
