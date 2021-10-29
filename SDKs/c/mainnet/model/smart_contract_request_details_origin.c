#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "smart_contract_request_details_origin.h"



smart_contract_request_details_origin_t *smart_contract_request_details_origin_create(
    char *origin_id
    ) {
    smart_contract_request_details_origin_t *smart_contract_request_details_origin_local_var = malloc(sizeof(smart_contract_request_details_origin_t));
    if (!smart_contract_request_details_origin_local_var) {
        return NULL;
    }
    smart_contract_request_details_origin_local_var->origin_id = origin_id;

    return smart_contract_request_details_origin_local_var;
}


void smart_contract_request_details_origin_free(smart_contract_request_details_origin_t *smart_contract_request_details_origin) {
    if(NULL == smart_contract_request_details_origin){
        return ;
    }
    listEntry_t *listEntry;
    if (smart_contract_request_details_origin->origin_id) {
        free(smart_contract_request_details_origin->origin_id);
        smart_contract_request_details_origin->origin_id = NULL;
    }
    free(smart_contract_request_details_origin);
}

cJSON *smart_contract_request_details_origin_convertToJSON(smart_contract_request_details_origin_t *smart_contract_request_details_origin) {
    cJSON *item = cJSON_CreateObject();

    // smart_contract_request_details_origin->origin_id
    if(smart_contract_request_details_origin->origin_id) { 
    if(cJSON_AddStringToObject(item, "originId", smart_contract_request_details_origin->origin_id) == NULL) {
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

smart_contract_request_details_origin_t *smart_contract_request_details_origin_parseFromJSON(cJSON *smart_contract_request_details_originJSON){

    smart_contract_request_details_origin_t *smart_contract_request_details_origin_local_var = NULL;

    // smart_contract_request_details_origin->origin_id
    cJSON *origin_id = cJSON_GetObjectItemCaseSensitive(smart_contract_request_details_originJSON, "originId");
    if (origin_id) { 
    if(!cJSON_IsString(origin_id))
    {
    goto end; //String
    }
    }


    smart_contract_request_details_origin_local_var = smart_contract_request_details_origin_create (
        origin_id ? strdup(origin_id->valuestring) : NULL
        );

    return smart_contract_request_details_origin_local_var;
end:
    return NULL;

}
