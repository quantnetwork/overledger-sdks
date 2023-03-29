#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "destination_transfer_schema.h"



destination_transfer_schema_t *destination_transfer_schema_create(
    char *destination_id,
    transfer_schema_t *transfer
    ) {
    destination_transfer_schema_t *destination_transfer_schema_local_var = malloc(sizeof(destination_transfer_schema_t));
    if (!destination_transfer_schema_local_var) {
        return NULL;
    }
    destination_transfer_schema_local_var->destination_id = destination_id;
    destination_transfer_schema_local_var->transfer = transfer;

    return destination_transfer_schema_local_var;
}


void destination_transfer_schema_free(destination_transfer_schema_t *destination_transfer_schema) {
    if(NULL == destination_transfer_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (destination_transfer_schema->destination_id) {
        free(destination_transfer_schema->destination_id);
        destination_transfer_schema->destination_id = NULL;
    }
    if (destination_transfer_schema->transfer) {
        transfer_schema_free(destination_transfer_schema->transfer);
        destination_transfer_schema->transfer = NULL;
    }
    free(destination_transfer_schema);
}

cJSON *destination_transfer_schema_convertToJSON(destination_transfer_schema_t *destination_transfer_schema) {
    cJSON *item = cJSON_CreateObject();

    // destination_transfer_schema->destination_id
    if(destination_transfer_schema->destination_id) { 
    if(cJSON_AddStringToObject(item, "destinationId", destination_transfer_schema->destination_id) == NULL) {
    goto fail; //String
    }
     } 


    // destination_transfer_schema->transfer
    if(destination_transfer_schema->transfer) { 
    cJSON *transfer_local_JSON = transfer_schema_convertToJSON(destination_transfer_schema->transfer);
    if(transfer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "transfer", transfer_local_JSON);
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

destination_transfer_schema_t *destination_transfer_schema_parseFromJSON(cJSON *destination_transfer_schemaJSON){

    destination_transfer_schema_t *destination_transfer_schema_local_var = NULL;

    // destination_transfer_schema->destination_id
    cJSON *destination_id = cJSON_GetObjectItemCaseSensitive(destination_transfer_schemaJSON, "destinationId");
    if (destination_id) { 
    if(!cJSON_IsString(destination_id))
    {
    goto end; //String
    }
    }

    // destination_transfer_schema->transfer
    cJSON *transfer = cJSON_GetObjectItemCaseSensitive(destination_transfer_schemaJSON, "transfer");
    transfer_schema_t *transfer_local_nonprim = NULL;
    if (transfer) { 
    transfer_local_nonprim = transfer_schema_parseFromJSON(transfer); //nonprimitive
    }


    destination_transfer_schema_local_var = destination_transfer_schema_create (
        destination_id ? strdup(destination_id->valuestring) : NULL,
        transfer ? transfer_local_nonprim : NULL
        );

    return destination_transfer_schema_local_var;
end:
    if (transfer_local_nonprim) {
        transfer_schema_free(transfer_local_nonprim);
        transfer_local_nonprim = NULL;
    }
    return NULL;

}
