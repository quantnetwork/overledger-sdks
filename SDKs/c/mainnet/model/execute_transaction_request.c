#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "execute_transaction_request.h"



execute_transaction_request_t *execute_transaction_request_create(
    char *request_id,
    char *_signed
    ) {
    execute_transaction_request_t *execute_transaction_request_local_var = malloc(sizeof(execute_transaction_request_t));
    if (!execute_transaction_request_local_var) {
        return NULL;
    }
    execute_transaction_request_local_var->request_id = request_id;
    execute_transaction_request_local_var->_signed = _signed;

    return execute_transaction_request_local_var;
}


void execute_transaction_request_free(execute_transaction_request_t *execute_transaction_request) {
    if(NULL == execute_transaction_request){
        return ;
    }
    listEntry_t *listEntry;
    if (execute_transaction_request->request_id) {
        free(execute_transaction_request->request_id);
        execute_transaction_request->request_id = NULL;
    }
    if (execute_transaction_request->_signed) {
        free(execute_transaction_request->_signed);
        execute_transaction_request->_signed = NULL;
    }
    free(execute_transaction_request);
}

cJSON *execute_transaction_request_convertToJSON(execute_transaction_request_t *execute_transaction_request) {
    cJSON *item = cJSON_CreateObject();

    // execute_transaction_request->request_id
    if (!execute_transaction_request->request_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "requestId", execute_transaction_request->request_id) == NULL) {
    goto fail; //String
    }


    // execute_transaction_request->_signed
    if (!execute_transaction_request->_signed) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "signed", execute_transaction_request->_signed) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

execute_transaction_request_t *execute_transaction_request_parseFromJSON(cJSON *execute_transaction_requestJSON){

    execute_transaction_request_t *execute_transaction_request_local_var = NULL;

    // execute_transaction_request->request_id
    cJSON *request_id = cJSON_GetObjectItemCaseSensitive(execute_transaction_requestJSON, "requestId");
    if (!request_id) {
        goto end;
    }

    
    if(!cJSON_IsString(request_id))
    {
    goto end; //String
    }

    // execute_transaction_request->_signed
    cJSON *_signed = cJSON_GetObjectItemCaseSensitive(execute_transaction_requestJSON, "signed");
    if (!_signed) {
        goto end;
    }

    
    if(!cJSON_IsString(_signed))
    {
    goto end; //String
    }


    execute_transaction_request_local_var = execute_transaction_request_create (
        strdup(request_id->valuestring),
        strdup(_signed->valuestring)
        );

    return execute_transaction_request_local_var;
end:
    return NULL;

}
