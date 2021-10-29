#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_transaction_response.h"



prepare_transaction_response_t *prepare_transaction_response_create(
    fee_t *gateway_fee,
    char *request_id,
    fee_t *dlt_fee,
    object_t *native_data
    ) {
    prepare_transaction_response_t *prepare_transaction_response_local_var = malloc(sizeof(prepare_transaction_response_t));
    if (!prepare_transaction_response_local_var) {
        return NULL;
    }
    prepare_transaction_response_local_var->gateway_fee = gateway_fee;
    prepare_transaction_response_local_var->request_id = request_id;
    prepare_transaction_response_local_var->dlt_fee = dlt_fee;
    prepare_transaction_response_local_var->native_data = native_data;

    return prepare_transaction_response_local_var;
}


void prepare_transaction_response_free(prepare_transaction_response_t *prepare_transaction_response) {
    if(NULL == prepare_transaction_response){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_transaction_response->gateway_fee) {
        fee_free(prepare_transaction_response->gateway_fee);
        prepare_transaction_response->gateway_fee = NULL;
    }
    if (prepare_transaction_response->request_id) {
        free(prepare_transaction_response->request_id);
        prepare_transaction_response->request_id = NULL;
    }
    if (prepare_transaction_response->dlt_fee) {
        fee_free(prepare_transaction_response->dlt_fee);
        prepare_transaction_response->dlt_fee = NULL;
    }
    if (prepare_transaction_response->native_data) {
        object_free(prepare_transaction_response->native_data);
        prepare_transaction_response->native_data = NULL;
    }
    free(prepare_transaction_response);
}

cJSON *prepare_transaction_response_convertToJSON(prepare_transaction_response_t *prepare_transaction_response) {
    cJSON *item = cJSON_CreateObject();

    // prepare_transaction_response->gateway_fee
    if(prepare_transaction_response->gateway_fee) { 
    cJSON *gateway_fee_local_JSON = fee_convertToJSON(prepare_transaction_response->gateway_fee);
    if(gateway_fee_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "gatewayFee", gateway_fee_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_transaction_response->request_id
    if(prepare_transaction_response->request_id) { 
    if(cJSON_AddStringToObject(item, "requestId", prepare_transaction_response->request_id) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_transaction_response->dlt_fee
    if(prepare_transaction_response->dlt_fee) { 
    cJSON *dlt_fee_local_JSON = fee_convertToJSON(prepare_transaction_response->dlt_fee);
    if(dlt_fee_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "dltFee", dlt_fee_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_transaction_response->native_data
    if(prepare_transaction_response->native_data) { 
    cJSON *native_data_object = object_convertToJSON(prepare_transaction_response->native_data);
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

prepare_transaction_response_t *prepare_transaction_response_parseFromJSON(cJSON *prepare_transaction_responseJSON){

    prepare_transaction_response_t *prepare_transaction_response_local_var = NULL;

    // prepare_transaction_response->gateway_fee
    cJSON *gateway_fee = cJSON_GetObjectItemCaseSensitive(prepare_transaction_responseJSON, "gatewayFee");
    fee_t *gateway_fee_local_nonprim = NULL;
    if (gateway_fee) { 
    gateway_fee_local_nonprim = fee_parseFromJSON(gateway_fee); //nonprimitive
    }

    // prepare_transaction_response->request_id
    cJSON *request_id = cJSON_GetObjectItemCaseSensitive(prepare_transaction_responseJSON, "requestId");
    if (request_id) { 
    if(!cJSON_IsString(request_id))
    {
    goto end; //String
    }
    }

    // prepare_transaction_response->dlt_fee
    cJSON *dlt_fee = cJSON_GetObjectItemCaseSensitive(prepare_transaction_responseJSON, "dltFee");
    fee_t *dlt_fee_local_nonprim = NULL;
    if (dlt_fee) { 
    dlt_fee_local_nonprim = fee_parseFromJSON(dlt_fee); //nonprimitive
    }

    // prepare_transaction_response->native_data
    cJSON *native_data = cJSON_GetObjectItemCaseSensitive(prepare_transaction_responseJSON, "nativeData");
    object_t *native_data_local_object = NULL;
    if (native_data) { 
    native_data_local_object = object_parseFromJSON(native_data); //object
    }


    prepare_transaction_response_local_var = prepare_transaction_response_create (
        gateway_fee ? gateway_fee_local_nonprim : NULL,
        request_id ? strdup(request_id->valuestring) : NULL,
        dlt_fee ? dlt_fee_local_nonprim : NULL,
        native_data ? native_data_local_object : NULL
        );

    return prepare_transaction_response_local_var;
end:
    if (gateway_fee_local_nonprim) {
        fee_free(gateway_fee_local_nonprim);
        gateway_fee_local_nonprim = NULL;
    }
    if (dlt_fee_local_nonprim) {
        fee_free(dlt_fee_local_nonprim);
        dlt_fee_local_nonprim = NULL;
    }
    return NULL;

}
