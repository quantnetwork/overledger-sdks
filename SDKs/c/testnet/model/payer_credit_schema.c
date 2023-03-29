#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payer_credit_schema.h"



payer_credit_schema_t *payer_credit_schema_create(
    char *payer_id
    ) {
    payer_credit_schema_t *payer_credit_schema_local_var = malloc(sizeof(payer_credit_schema_t));
    if (!payer_credit_schema_local_var) {
        return NULL;
    }
    payer_credit_schema_local_var->payer_id = payer_id;

    return payer_credit_schema_local_var;
}


void payer_credit_schema_free(payer_credit_schema_t *payer_credit_schema) {
    if(NULL == payer_credit_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (payer_credit_schema->payer_id) {
        free(payer_credit_schema->payer_id);
        payer_credit_schema->payer_id = NULL;
    }
    free(payer_credit_schema);
}

cJSON *payer_credit_schema_convertToJSON(payer_credit_schema_t *payer_credit_schema) {
    cJSON *item = cJSON_CreateObject();

    // payer_credit_schema->payer_id
    if(payer_credit_schema->payer_id) { 
    if(cJSON_AddStringToObject(item, "payerId", payer_credit_schema->payer_id) == NULL) {
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

payer_credit_schema_t *payer_credit_schema_parseFromJSON(cJSON *payer_credit_schemaJSON){

    payer_credit_schema_t *payer_credit_schema_local_var = NULL;

    // payer_credit_schema->payer_id
    cJSON *payer_id = cJSON_GetObjectItemCaseSensitive(payer_credit_schemaJSON, "payerId");
    if (payer_id) { 
    if(!cJSON_IsString(payer_id))
    {
    goto end; //String
    }
    }


    payer_credit_schema_local_var = payer_credit_schema_create (
        payer_id ? strdup(payer_id->valuestring) : NULL
        );

    return payer_credit_schema_local_var;
end:
    return NULL;

}
