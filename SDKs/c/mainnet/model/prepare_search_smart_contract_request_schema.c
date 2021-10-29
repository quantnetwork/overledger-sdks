#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_search_smart_contract_request_schema.h"



prepare_search_smart_contract_request_schema_t *prepare_search_smart_contract_request_schema_create(
    smart_contract_search_request_details_t *request_details,
    location_t *location
    ) {
    prepare_search_smart_contract_request_schema_t *prepare_search_smart_contract_request_schema_local_var = malloc(sizeof(prepare_search_smart_contract_request_schema_t));
    if (!prepare_search_smart_contract_request_schema_local_var) {
        return NULL;
    }
    prepare_search_smart_contract_request_schema_local_var->request_details = request_details;
    prepare_search_smart_contract_request_schema_local_var->location = location;

    return prepare_search_smart_contract_request_schema_local_var;
}


void prepare_search_smart_contract_request_schema_free(prepare_search_smart_contract_request_schema_t *prepare_search_smart_contract_request_schema) {
    if(NULL == prepare_search_smart_contract_request_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_search_smart_contract_request_schema->request_details) {
        smart_contract_search_request_details_free(prepare_search_smart_contract_request_schema->request_details);
        prepare_search_smart_contract_request_schema->request_details = NULL;
    }
    if (prepare_search_smart_contract_request_schema->location) {
        location_free(prepare_search_smart_contract_request_schema->location);
        prepare_search_smart_contract_request_schema->location = NULL;
    }
    free(prepare_search_smart_contract_request_schema);
}

cJSON *prepare_search_smart_contract_request_schema_convertToJSON(prepare_search_smart_contract_request_schema_t *prepare_search_smart_contract_request_schema) {
    cJSON *item = cJSON_CreateObject();

    // prepare_search_smart_contract_request_schema->request_details
    if(prepare_search_smart_contract_request_schema->request_details) { 
    cJSON *request_details_local_JSON = smart_contract_search_request_details_convertToJSON(prepare_search_smart_contract_request_schema->request_details);
    if(request_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "requestDetails", request_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_search_smart_contract_request_schema->location
    if(prepare_search_smart_contract_request_schema->location) { 
    cJSON *location_local_JSON = location_convertToJSON(prepare_search_smart_contract_request_schema->location);
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

prepare_search_smart_contract_request_schema_t *prepare_search_smart_contract_request_schema_parseFromJSON(cJSON *prepare_search_smart_contract_request_schemaJSON){

    prepare_search_smart_contract_request_schema_t *prepare_search_smart_contract_request_schema_local_var = NULL;

    // prepare_search_smart_contract_request_schema->request_details
    cJSON *request_details = cJSON_GetObjectItemCaseSensitive(prepare_search_smart_contract_request_schemaJSON, "requestDetails");
    smart_contract_search_request_details_t *request_details_local_nonprim = NULL;
    if (request_details) { 
    request_details_local_nonprim = smart_contract_search_request_details_parseFromJSON(request_details); //nonprimitive
    }

    // prepare_search_smart_contract_request_schema->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(prepare_search_smart_contract_request_schemaJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }


    prepare_search_smart_contract_request_schema_local_var = prepare_search_smart_contract_request_schema_create (
        request_details ? request_details_local_nonprim : NULL,
        location ? location_local_nonprim : NULL
        );

    return prepare_search_smart_contract_request_schema_local_var;
end:
    if (request_details_local_nonprim) {
        smart_contract_search_request_details_free(request_details_local_nonprim);
        request_details_local_nonprim = NULL;
    }
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
