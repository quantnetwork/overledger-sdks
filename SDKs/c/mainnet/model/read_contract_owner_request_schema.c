#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "read_contract_owner_request_schema.h"



read_contract_owner_request_schema_t *read_contract_owner_request_schema_create(
    read_contract_owner_request_details_schema_t *request_details,
    location_t *location
    ) {
    read_contract_owner_request_schema_t *read_contract_owner_request_schema_local_var = malloc(sizeof(read_contract_owner_request_schema_t));
    if (!read_contract_owner_request_schema_local_var) {
        return NULL;
    }
    read_contract_owner_request_schema_local_var->request_details = request_details;
    read_contract_owner_request_schema_local_var->location = location;

    return read_contract_owner_request_schema_local_var;
}


void read_contract_owner_request_schema_free(read_contract_owner_request_schema_t *read_contract_owner_request_schema) {
    if(NULL == read_contract_owner_request_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (read_contract_owner_request_schema->request_details) {
        read_contract_owner_request_details_schema_free(read_contract_owner_request_schema->request_details);
        read_contract_owner_request_schema->request_details = NULL;
    }
    if (read_contract_owner_request_schema->location) {
        location_free(read_contract_owner_request_schema->location);
        read_contract_owner_request_schema->location = NULL;
    }
    free(read_contract_owner_request_schema);
}

cJSON *read_contract_owner_request_schema_convertToJSON(read_contract_owner_request_schema_t *read_contract_owner_request_schema) {
    cJSON *item = cJSON_CreateObject();

    // read_contract_owner_request_schema->request_details
    if(read_contract_owner_request_schema->request_details) { 
    cJSON *request_details_local_JSON = read_contract_owner_request_details_schema_convertToJSON(read_contract_owner_request_schema->request_details);
    if(request_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "requestDetails", request_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // read_contract_owner_request_schema->location
    if(read_contract_owner_request_schema->location) { 
    cJSON *location_local_JSON = location_convertToJSON(read_contract_owner_request_schema->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
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

read_contract_owner_request_schema_t *read_contract_owner_request_schema_parseFromJSON(cJSON *read_contract_owner_request_schemaJSON){

    read_contract_owner_request_schema_t *read_contract_owner_request_schema_local_var = NULL;

    // read_contract_owner_request_schema->request_details
    cJSON *request_details = cJSON_GetObjectItemCaseSensitive(read_contract_owner_request_schemaJSON, "requestDetails");
    read_contract_owner_request_details_schema_t *request_details_local_nonprim = NULL;
    if (request_details) { 
    request_details_local_nonprim = read_contract_owner_request_details_schema_parseFromJSON(request_details); //nonprimitive
    }

    // read_contract_owner_request_schema->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(read_contract_owner_request_schemaJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }


    read_contract_owner_request_schema_local_var = read_contract_owner_request_schema_create (
        request_details ? request_details_local_nonprim : NULL,
        location ? location_local_nonprim : NULL
        );

    return read_contract_owner_request_schema_local_var;
end:
    if (request_details_local_nonprim) {
        read_contract_owner_request_details_schema_free(request_details_local_nonprim);
        request_details_local_nonprim = NULL;
    }
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
