#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_native_transaction_request_schema.h"



prepare_native_transaction_request_schema_t *prepare_native_transaction_request_schema_create(
    location_t *location,
    char *type
    ) {
    prepare_native_transaction_request_schema_t *prepare_native_transaction_request_schema_local_var = malloc(sizeof(prepare_native_transaction_request_schema_t));
    if (!prepare_native_transaction_request_schema_local_var) {
        return NULL;
    }
    prepare_native_transaction_request_schema_local_var->location = location;
    prepare_native_transaction_request_schema_local_var->type = type;

    return prepare_native_transaction_request_schema_local_var;
}


void prepare_native_transaction_request_schema_free(prepare_native_transaction_request_schema_t *prepare_native_transaction_request_schema) {
    if(NULL == prepare_native_transaction_request_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_native_transaction_request_schema->location) {
        location_free(prepare_native_transaction_request_schema->location);
        prepare_native_transaction_request_schema->location = NULL;
    }
    if (prepare_native_transaction_request_schema->type) {
        free(prepare_native_transaction_request_schema->type);
        prepare_native_transaction_request_schema->type = NULL;
    }
    free(prepare_native_transaction_request_schema);
}

cJSON *prepare_native_transaction_request_schema_convertToJSON(prepare_native_transaction_request_schema_t *prepare_native_transaction_request_schema) {
    cJSON *item = cJSON_CreateObject();

    // prepare_native_transaction_request_schema->location
    if(prepare_native_transaction_request_schema->location) { 
    cJSON *location_local_JSON = location_convertToJSON(prepare_native_transaction_request_schema->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_native_transaction_request_schema->type
    if(prepare_native_transaction_request_schema->type) { 
    if(cJSON_AddStringToObject(item, "type", prepare_native_transaction_request_schema->type) == NULL) {
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

prepare_native_transaction_request_schema_t *prepare_native_transaction_request_schema_parseFromJSON(cJSON *prepare_native_transaction_request_schemaJSON){

    prepare_native_transaction_request_schema_t *prepare_native_transaction_request_schema_local_var = NULL;

    // prepare_native_transaction_request_schema->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(prepare_native_transaction_request_schemaJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // prepare_native_transaction_request_schema->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(prepare_native_transaction_request_schemaJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }


    prepare_native_transaction_request_schema_local_var = prepare_native_transaction_request_schema_create (
        location ? location_local_nonprim : NULL,
        type ? strdup(type->valuestring) : NULL
        );

    return prepare_native_transaction_request_schema_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
