#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_search_response_schema.h"



prepare_search_response_schema_t *prepare_search_response_schema_create(
    fee_t *gateway_fee,
    char *request_id
    ) {
    prepare_search_response_schema_t *prepare_search_response_schema_local_var = malloc(sizeof(prepare_search_response_schema_t));
    if (!prepare_search_response_schema_local_var) {
        return NULL;
    }
    prepare_search_response_schema_local_var->gateway_fee = gateway_fee;
    prepare_search_response_schema_local_var->request_id = request_id;

    return prepare_search_response_schema_local_var;
}


void prepare_search_response_schema_free(prepare_search_response_schema_t *prepare_search_response_schema) {
    if(NULL == prepare_search_response_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_search_response_schema->gateway_fee) {
        fee_free(prepare_search_response_schema->gateway_fee);
        prepare_search_response_schema->gateway_fee = NULL;
    }
    if (prepare_search_response_schema->request_id) {
        free(prepare_search_response_schema->request_id);
        prepare_search_response_schema->request_id = NULL;
    }
    free(prepare_search_response_schema);
}

cJSON *prepare_search_response_schema_convertToJSON(prepare_search_response_schema_t *prepare_search_response_schema) {
    cJSON *item = cJSON_CreateObject();

    // prepare_search_response_schema->gateway_fee
    if(prepare_search_response_schema->gateway_fee) { 
    cJSON *gateway_fee_local_JSON = fee_convertToJSON(prepare_search_response_schema->gateway_fee);
    if(gateway_fee_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "gatewayFee", gateway_fee_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_search_response_schema->request_id
    if(prepare_search_response_schema->request_id) { 
    if(cJSON_AddStringToObject(item, "requestId", prepare_search_response_schema->request_id) == NULL) {
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

prepare_search_response_schema_t *prepare_search_response_schema_parseFromJSON(cJSON *prepare_search_response_schemaJSON){

    prepare_search_response_schema_t *prepare_search_response_schema_local_var = NULL;

    // prepare_search_response_schema->gateway_fee
    cJSON *gateway_fee = cJSON_GetObjectItemCaseSensitive(prepare_search_response_schemaJSON, "gatewayFee");
    fee_t *gateway_fee_local_nonprim = NULL;
    if (gateway_fee) { 
    gateway_fee_local_nonprim = fee_parseFromJSON(gateway_fee); //nonprimitive
    }

    // prepare_search_response_schema->request_id
    cJSON *request_id = cJSON_GetObjectItemCaseSensitive(prepare_search_response_schemaJSON, "requestId");
    if (request_id) { 
    if(!cJSON_IsString(request_id))
    {
    goto end; //String
    }
    }


    prepare_search_response_schema_local_var = prepare_search_response_schema_create (
        gateway_fee ? gateway_fee_local_nonprim : NULL,
        request_id ? strdup(request_id->valuestring) : NULL
        );

    return prepare_search_response_schema_local_var;
end:
    if (gateway_fee_local_nonprim) {
        fee_free(gateway_fee_local_nonprim);
        gateway_fee_local_nonprim = NULL;
    }
    return NULL;

}
