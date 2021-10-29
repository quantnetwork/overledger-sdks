#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "origin.h"



origin_t *origin_create(
    char *sequence,
    char *origin_id,
    smart_contract_t *smart_contract
    ) {
    origin_t *origin_local_var = malloc(sizeof(origin_t));
    if (!origin_local_var) {
        return NULL;
    }
    origin_local_var->sequence = sequence;
    origin_local_var->origin_id = origin_id;
    origin_local_var->smart_contract = smart_contract;

    return origin_local_var;
}


void origin_free(origin_t *origin) {
    if(NULL == origin){
        return ;
    }
    listEntry_t *listEntry;
    if (origin->sequence) {
        free(origin->sequence);
        origin->sequence = NULL;
    }
    if (origin->origin_id) {
        free(origin->origin_id);
        origin->origin_id = NULL;
    }
    if (origin->smart_contract) {
        smart_contract_free(origin->smart_contract);
        origin->smart_contract = NULL;
    }
    free(origin);
}

cJSON *origin_convertToJSON(origin_t *origin) {
    cJSON *item = cJSON_CreateObject();

    // origin->sequence
    if(origin->sequence) { 
    if(cJSON_AddStringToObject(item, "sequence", origin->sequence) == NULL) {
    goto fail; //String
    }
     } 


    // origin->origin_id
    if(origin->origin_id) { 
    if(cJSON_AddStringToObject(item, "originId", origin->origin_id) == NULL) {
    goto fail; //String
    }
     } 


    // origin->smart_contract
    if(origin->smart_contract) { 
    cJSON *smart_contract_local_JSON = smart_contract_convertToJSON(origin->smart_contract);
    if(smart_contract_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "smartContract", smart_contract_local_JSON);
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

origin_t *origin_parseFromJSON(cJSON *originJSON){

    origin_t *origin_local_var = NULL;

    // origin->sequence
    cJSON *sequence = cJSON_GetObjectItemCaseSensitive(originJSON, "sequence");
    if (sequence) { 
    if(!cJSON_IsString(sequence))
    {
    goto end; //String
    }
    }

    // origin->origin_id
    cJSON *origin_id = cJSON_GetObjectItemCaseSensitive(originJSON, "originId");
    if (origin_id) { 
    if(!cJSON_IsString(origin_id))
    {
    goto end; //String
    }
    }

    // origin->smart_contract
    cJSON *smart_contract = cJSON_GetObjectItemCaseSensitive(originJSON, "smartContract");
    smart_contract_t *smart_contract_local_nonprim = NULL;
    if (smart_contract) { 
    smart_contract_local_nonprim = smart_contract_parseFromJSON(smart_contract); //nonprimitive
    }


    origin_local_var = origin_create (
        sequence ? strdup(sequence->valuestring) : NULL,
        origin_id ? strdup(origin_id->valuestring) : NULL,
        smart_contract ? smart_contract_local_nonprim : NULL
        );

    return origin_local_var;
end:
    if (smart_contract_local_nonprim) {
        smart_contract_free(smart_contract_local_nonprim);
        smart_contract_local_nonprim = NULL;
    }
    return NULL;

}
