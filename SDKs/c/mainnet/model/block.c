#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "block.h"



block_t *block_create(
    char *block_id,
    int number,
    list_t *transaction_ids,
    list_t *size,
    list_t *hashes,
    linked_blocks_t *linked_blocks,
    int number_of_transactions,
    char *message,
    int timestamp,
    object_t *native_data
    ) {
    block_t *block_local_var = malloc(sizeof(block_t));
    if (!block_local_var) {
        return NULL;
    }
    block_local_var->block_id = block_id;
    block_local_var->number = number;
    block_local_var->transaction_ids = transaction_ids;
    block_local_var->size = size;
    block_local_var->hashes = hashes;
    block_local_var->linked_blocks = linked_blocks;
    block_local_var->number_of_transactions = number_of_transactions;
    block_local_var->message = message;
    block_local_var->timestamp = timestamp;
    block_local_var->native_data = native_data;

    return block_local_var;
}


void block_free(block_t *block) {
    if(NULL == block){
        return ;
    }
    listEntry_t *listEntry;
    if (block->block_id) {
        free(block->block_id);
        block->block_id = NULL;
    }
    if (block->transaction_ids) {
        list_ForEach(listEntry, block->transaction_ids) {
            free(listEntry->data);
        }
        list_free(block->transaction_ids);
        block->transaction_ids = NULL;
    }
    if (block->size) {
        list_ForEach(listEntry, block->size) {
            block_size_free(listEntry->data);
        }
        list_free(block->size);
        block->size = NULL;
    }
    if (block->hashes) {
        list_ForEach(listEntry, block->hashes) {
            block_hash_free(listEntry->data);
        }
        list_free(block->hashes);
        block->hashes = NULL;
    }
    if (block->linked_blocks) {
        linked_blocks_free(block->linked_blocks);
        block->linked_blocks = NULL;
    }
    if (block->message) {
        free(block->message);
        block->message = NULL;
    }
    if (block->native_data) {
        object_free(block->native_data);
        block->native_data = NULL;
    }
    free(block);
}

cJSON *block_convertToJSON(block_t *block) {
    cJSON *item = cJSON_CreateObject();

    // block->block_id
    if(block->block_id) { 
    if(cJSON_AddStringToObject(item, "blockId", block->block_id) == NULL) {
    goto fail; //String
    }
     } 


    // block->number
    if(block->number) { 
    if(cJSON_AddNumberToObject(item, "number", block->number) == NULL) {
    goto fail; //Numeric
    }
     } 


    // block->transaction_ids
    if(block->transaction_ids) { 
    cJSON *transaction_ids = cJSON_AddArrayToObject(item, "transactionIds");
    if(transaction_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *transaction_idsListEntry;
    list_ForEach(transaction_idsListEntry, block->transaction_ids) {
    if(cJSON_AddStringToObject(transaction_ids, "", (char*)transaction_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // block->size
    if(block->size) { 
    cJSON *size = cJSON_AddArrayToObject(item, "size");
    if(size == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *sizeListEntry;
    if (block->size) {
    list_ForEach(sizeListEntry, block->size) {
    cJSON *itemLocal = block_size_convertToJSON(sizeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(size, itemLocal);
    }
    }
     } 


    // block->hashes
    if(block->hashes) { 
    cJSON *hashes = cJSON_AddArrayToObject(item, "hashes");
    if(hashes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *hashesListEntry;
    if (block->hashes) {
    list_ForEach(hashesListEntry, block->hashes) {
    cJSON *itemLocal = block_hash_convertToJSON(hashesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(hashes, itemLocal);
    }
    }
     } 


    // block->linked_blocks
    if(block->linked_blocks) { 
    cJSON *linked_blocks_local_JSON = linked_blocks_convertToJSON(block->linked_blocks);
    if(linked_blocks_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "linkedBlocks", linked_blocks_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // block->number_of_transactions
    if(block->number_of_transactions) { 
    if(cJSON_AddNumberToObject(item, "numberOfTransactions", block->number_of_transactions) == NULL) {
    goto fail; //Numeric
    }
     } 


    // block->message
    if(block->message) { 
    if(cJSON_AddStringToObject(item, "message", block->message) == NULL) {
    goto fail; //String
    }
     } 


    // block->timestamp
    if(block->timestamp) { 
    if(cJSON_AddNumberToObject(item, "timestamp", block->timestamp) == NULL) {
    goto fail; //Numeric
    }
     } 


    // block->native_data
    if(block->native_data) { 
    cJSON *native_data_object = object_convertToJSON(block->native_data);
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

block_t *block_parseFromJSON(cJSON *blockJSON){

    block_t *block_local_var = NULL;

    // block->block_id
    cJSON *block_id = cJSON_GetObjectItemCaseSensitive(blockJSON, "blockId");
    if (block_id) { 
    if(!cJSON_IsString(block_id))
    {
    goto end; //String
    }
    }

    // block->number
    cJSON *number = cJSON_GetObjectItemCaseSensitive(blockJSON, "number");
    if (number) { 
    if(!cJSON_IsNumber(number))
    {
    goto end; //Numeric
    }
    }

    // block->transaction_ids
    cJSON *transaction_ids = cJSON_GetObjectItemCaseSensitive(blockJSON, "transactionIds");
    list_t *transaction_idsList;
    if (transaction_ids) { 
    cJSON *transaction_ids_local;
    if(!cJSON_IsArray(transaction_ids)) {
        goto end;//primitive container
    }
    transaction_idsList = list_create();

    cJSON_ArrayForEach(transaction_ids_local, transaction_ids)
    {
        if(!cJSON_IsString(transaction_ids_local))
        {
            goto end;
        }
        list_addElement(transaction_idsList , strdup(transaction_ids_local->valuestring));
    }
    }

    // block->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(blockJSON, "size");
    list_t *sizeList;
    if (size) { 
    cJSON *size_local_nonprimitive;
    if(!cJSON_IsArray(size)){
        goto end; //nonprimitive container
    }

    sizeList = list_create();

    cJSON_ArrayForEach(size_local_nonprimitive,size )
    {
        if(!cJSON_IsObject(size_local_nonprimitive)){
            goto end;
        }
        block_size_t *sizeItem = block_size_parseFromJSON(size_local_nonprimitive);

        list_addElement(sizeList, sizeItem);
    }
    }

    // block->hashes
    cJSON *hashes = cJSON_GetObjectItemCaseSensitive(blockJSON, "hashes");
    list_t *hashesList;
    if (hashes) { 
    cJSON *hashes_local_nonprimitive;
    if(!cJSON_IsArray(hashes)){
        goto end; //nonprimitive container
    }

    hashesList = list_create();

    cJSON_ArrayForEach(hashes_local_nonprimitive,hashes )
    {
        if(!cJSON_IsObject(hashes_local_nonprimitive)){
            goto end;
        }
        block_hash_t *hashesItem = block_hash_parseFromJSON(hashes_local_nonprimitive);

        list_addElement(hashesList, hashesItem);
    }
    }

    // block->linked_blocks
    cJSON *linked_blocks = cJSON_GetObjectItemCaseSensitive(blockJSON, "linkedBlocks");
    linked_blocks_t *linked_blocks_local_nonprim = NULL;
    if (linked_blocks) { 
    linked_blocks_local_nonprim = linked_blocks_parseFromJSON(linked_blocks); //nonprimitive
    }

    // block->number_of_transactions
    cJSON *number_of_transactions = cJSON_GetObjectItemCaseSensitive(blockJSON, "numberOfTransactions");
    if (number_of_transactions) { 
    if(!cJSON_IsNumber(number_of_transactions))
    {
    goto end; //Numeric
    }
    }

    // block->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(blockJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // block->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(blockJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsNumber(timestamp))
    {
    goto end; //Numeric
    }
    }

    // block->native_data
    cJSON *native_data = cJSON_GetObjectItemCaseSensitive(blockJSON, "nativeData");
    object_t *native_data_local_object = NULL;
    if (native_data) { 
    native_data_local_object = object_parseFromJSON(native_data); //object
    }


    block_local_var = block_create (
        block_id ? strdup(block_id->valuestring) : NULL,
        number ? number->valuedouble : 0,
        transaction_ids ? transaction_idsList : NULL,
        size ? sizeList : NULL,
        hashes ? hashesList : NULL,
        linked_blocks ? linked_blocks_local_nonprim : NULL,
        number_of_transactions ? number_of_transactions->valuedouble : 0,
        message ? strdup(message->valuestring) : NULL,
        timestamp ? timestamp->valuedouble : 0,
        native_data ? native_data_local_object : NULL
        );

    return block_local_var;
end:
    if (linked_blocks_local_nonprim) {
        linked_blocks_free(linked_blocks_local_nonprim);
        linked_blocks_local_nonprim = NULL;
    }
    return NULL;

}
