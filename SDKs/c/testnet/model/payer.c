#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payer.h"



payer_t *payer_create(
    char *payer_id
    ) {
    payer_t *payer_local_var = malloc(sizeof(payer_t));
    if (!payer_local_var) {
        return NULL;
    }
    payer_local_var->payer_id = payer_id;

    return payer_local_var;
}


void payer_free(payer_t *payer) {
    if(NULL == payer){
        return ;
    }
    listEntry_t *listEntry;
    if (payer->payer_id) {
        free(payer->payer_id);
        payer->payer_id = NULL;
    }
    free(payer);
}

cJSON *payer_convertToJSON(payer_t *payer) {
    cJSON *item = cJSON_CreateObject();

    // payer->payer_id
    if(payer->payer_id) { 
    if(cJSON_AddStringToObject(item, "payerId", payer->payer_id) == NULL) {
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

payer_t *payer_parseFromJSON(cJSON *payerJSON){

    payer_t *payer_local_var = NULL;

    // payer->payer_id
    cJSON *payer_id = cJSON_GetObjectItemCaseSensitive(payerJSON, "payerId");
    if (payer_id) { 
    if(!cJSON_IsString(payer_id))
    {
    goto end; //String
    }
    }


    payer_local_var = payer_create (
        payer_id ? strdup(payer_id->valuestring) : NULL
        );

    return payer_local_var;
end:
    return NULL;

}
