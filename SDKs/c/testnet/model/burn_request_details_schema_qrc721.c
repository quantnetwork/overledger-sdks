#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "burn_request_details_schema_qrc721.h"



burn_request_details_schema_qrc721_t *burn_request_details_schema_qrc721_create(
    owner_burn_schema_t *owner,
    char *overledger_signing_type
    ) {
    burn_request_details_schema_qrc721_t *burn_request_details_schema_qrc721_local_var = malloc(sizeof(burn_request_details_schema_qrc721_t));
    if (!burn_request_details_schema_qrc721_local_var) {
        return NULL;
    }
    burn_request_details_schema_qrc721_local_var->owner = owner;
    burn_request_details_schema_qrc721_local_var->overledger_signing_type = overledger_signing_type;

    return burn_request_details_schema_qrc721_local_var;
}


void burn_request_details_schema_qrc721_free(burn_request_details_schema_qrc721_t *burn_request_details_schema_qrc721) {
    if(NULL == burn_request_details_schema_qrc721){
        return ;
    }
    listEntry_t *listEntry;
    if (burn_request_details_schema_qrc721->owner) {
        owner_burn_schema_free(burn_request_details_schema_qrc721->owner);
        burn_request_details_schema_qrc721->owner = NULL;
    }
    if (burn_request_details_schema_qrc721->overledger_signing_type) {
        free(burn_request_details_schema_qrc721->overledger_signing_type);
        burn_request_details_schema_qrc721->overledger_signing_type = NULL;
    }
    free(burn_request_details_schema_qrc721);
}

cJSON *burn_request_details_schema_qrc721_convertToJSON(burn_request_details_schema_qrc721_t *burn_request_details_schema_qrc721) {
    cJSON *item = cJSON_CreateObject();

    // burn_request_details_schema_qrc721->owner
    if(burn_request_details_schema_qrc721->owner) { 
    cJSON *owner_local_JSON = owner_burn_schema_convertToJSON(burn_request_details_schema_qrc721->owner);
    if(owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "owner", owner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // burn_request_details_schema_qrc721->overledger_signing_type
    if(burn_request_details_schema_qrc721->overledger_signing_type) { 
    if(cJSON_AddStringToObject(item, "overledgerSigningType", burn_request_details_schema_qrc721->overledger_signing_type) == NULL) {
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

burn_request_details_schema_qrc721_t *burn_request_details_schema_qrc721_parseFromJSON(cJSON *burn_request_details_schema_qrc721JSON){

    burn_request_details_schema_qrc721_t *burn_request_details_schema_qrc721_local_var = NULL;

    // burn_request_details_schema_qrc721->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(burn_request_details_schema_qrc721JSON, "owner");
    owner_burn_schema_t *owner_local_nonprim = NULL;
    if (owner) { 
    owner_local_nonprim = owner_burn_schema_parseFromJSON(owner); //nonprimitive
    }

    // burn_request_details_schema_qrc721->overledger_signing_type
    cJSON *overledger_signing_type = cJSON_GetObjectItemCaseSensitive(burn_request_details_schema_qrc721JSON, "overledgerSigningType");
    if (overledger_signing_type) { 
    if(!cJSON_IsString(overledger_signing_type))
    {
    goto end; //String
    }
    }


    burn_request_details_schema_qrc721_local_var = burn_request_details_schema_qrc721_create (
        owner ? owner_local_nonprim : NULL,
        overledger_signing_type ? strdup(overledger_signing_type->valuestring) : NULL
        );

    return burn_request_details_schema_qrc721_local_var;
end:
    if (owner_local_nonprim) {
        owner_burn_schema_free(owner_local_nonprim);
        owner_local_nonprim = NULL;
    }
    return NULL;

}
