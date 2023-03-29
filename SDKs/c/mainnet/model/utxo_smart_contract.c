#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "utxo_smart_contract.h"



utxo_smart_contract_t *utxo_smart_contract_create(
    char *type,
    char *detail,
    extra_fields_t *extra_fields
    ) {
    utxo_smart_contract_t *utxo_smart_contract_local_var = malloc(sizeof(utxo_smart_contract_t));
    if (!utxo_smart_contract_local_var) {
        return NULL;
    }
    utxo_smart_contract_local_var->type = type;
    utxo_smart_contract_local_var->detail = detail;
    utxo_smart_contract_local_var->extra_fields = extra_fields;

    return utxo_smart_contract_local_var;
}


void utxo_smart_contract_free(utxo_smart_contract_t *utxo_smart_contract) {
    if(NULL == utxo_smart_contract){
        return ;
    }
    listEntry_t *listEntry;
    if (utxo_smart_contract->type) {
        free(utxo_smart_contract->type);
        utxo_smart_contract->type = NULL;
    }
    if (utxo_smart_contract->detail) {
        free(utxo_smart_contract->detail);
        utxo_smart_contract->detail = NULL;
    }
    if (utxo_smart_contract->extra_fields) {
        extra_fields_free(utxo_smart_contract->extra_fields);
        utxo_smart_contract->extra_fields = NULL;
    }
    free(utxo_smart_contract);
}

cJSON *utxo_smart_contract_convertToJSON(utxo_smart_contract_t *utxo_smart_contract) {
    cJSON *item = cJSON_CreateObject();

    // utxo_smart_contract->type
    if(utxo_smart_contract->type) { 
    if(cJSON_AddStringToObject(item, "type", utxo_smart_contract->type) == NULL) {
    goto fail; //String
    }
     } 


    // utxo_smart_contract->detail
    if(utxo_smart_contract->detail) { 
    if(cJSON_AddStringToObject(item, "detail", utxo_smart_contract->detail) == NULL) {
    goto fail; //String
    }
     } 


    // utxo_smart_contract->extra_fields
    if(utxo_smart_contract->extra_fields) { 
    cJSON *extra_fields_local_JSON = extra_fields_convertToJSON(utxo_smart_contract->extra_fields);
    if(extra_fields_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "extraFields", extra_fields_local_JSON);
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

utxo_smart_contract_t *utxo_smart_contract_parseFromJSON(cJSON *utxo_smart_contractJSON){

    utxo_smart_contract_t *utxo_smart_contract_local_var = NULL;

    // utxo_smart_contract->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(utxo_smart_contractJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // utxo_smart_contract->detail
    cJSON *detail = cJSON_GetObjectItemCaseSensitive(utxo_smart_contractJSON, "detail");
    if (detail) { 
    if(!cJSON_IsString(detail))
    {
    goto end; //String
    }
    }

    // utxo_smart_contract->extra_fields
    cJSON *extra_fields = cJSON_GetObjectItemCaseSensitive(utxo_smart_contractJSON, "extraFields");
    extra_fields_t *extra_fields_local_nonprim = NULL;
    if (extra_fields) { 
    extra_fields_local_nonprim = extra_fields_parseFromJSON(extra_fields); //nonprimitive
    }


    utxo_smart_contract_local_var = utxo_smart_contract_create (
        type ? strdup(type->valuestring) : NULL,
        detail ? strdup(detail->valuestring) : NULL,
        extra_fields ? extra_fields_local_nonprim : NULL
        );

    return utxo_smart_contract_local_var;
end:
    if (extra_fields_local_nonprim) {
        extra_fields_free(extra_fields_local_nonprim);
        extra_fields_local_nonprim = NULL;
    }
    return NULL;

}
