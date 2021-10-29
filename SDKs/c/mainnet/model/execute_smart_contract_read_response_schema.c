#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "execute_smart_contract_read_response_schema.h"



execute_smart_contract_read_response_schema_t *execute_smart_contract_read_response_schema_create(
    smart_contract_read_schema_t *smart_contract,
    location_t *location
    ) {
    execute_smart_contract_read_response_schema_t *execute_smart_contract_read_response_schema_local_var = malloc(sizeof(execute_smart_contract_read_response_schema_t));
    if (!execute_smart_contract_read_response_schema_local_var) {
        return NULL;
    }
    execute_smart_contract_read_response_schema_local_var->smart_contract = smart_contract;
    execute_smart_contract_read_response_schema_local_var->location = location;

    return execute_smart_contract_read_response_schema_local_var;
}


void execute_smart_contract_read_response_schema_free(execute_smart_contract_read_response_schema_t *execute_smart_contract_read_response_schema) {
    if(NULL == execute_smart_contract_read_response_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (execute_smart_contract_read_response_schema->smart_contract) {
        smart_contract_read_schema_free(execute_smart_contract_read_response_schema->smart_contract);
        execute_smart_contract_read_response_schema->smart_contract = NULL;
    }
    if (execute_smart_contract_read_response_schema->location) {
        location_free(execute_smart_contract_read_response_schema->location);
        execute_smart_contract_read_response_schema->location = NULL;
    }
    free(execute_smart_contract_read_response_schema);
}

cJSON *execute_smart_contract_read_response_schema_convertToJSON(execute_smart_contract_read_response_schema_t *execute_smart_contract_read_response_schema) {
    cJSON *item = cJSON_CreateObject();

    // execute_smart_contract_read_response_schema->smart_contract
    if(execute_smart_contract_read_response_schema->smart_contract) { 
    cJSON *smart_contract_local_JSON = smart_contract_read_schema_convertToJSON(execute_smart_contract_read_response_schema->smart_contract);
    if(smart_contract_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "smartContract", smart_contract_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // execute_smart_contract_read_response_schema->location
    if(execute_smart_contract_read_response_schema->location) { 
    cJSON *location_local_JSON = location_convertToJSON(execute_smart_contract_read_response_schema->location);
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

execute_smart_contract_read_response_schema_t *execute_smart_contract_read_response_schema_parseFromJSON(cJSON *execute_smart_contract_read_response_schemaJSON){

    execute_smart_contract_read_response_schema_t *execute_smart_contract_read_response_schema_local_var = NULL;

    // execute_smart_contract_read_response_schema->smart_contract
    cJSON *smart_contract = cJSON_GetObjectItemCaseSensitive(execute_smart_contract_read_response_schemaJSON, "smartContract");
    smart_contract_read_schema_t *smart_contract_local_nonprim = NULL;
    if (smart_contract) { 
    smart_contract_local_nonprim = smart_contract_read_schema_parseFromJSON(smart_contract); //nonprimitive
    }

    // execute_smart_contract_read_response_schema->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(execute_smart_contract_read_response_schemaJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }


    execute_smart_contract_read_response_schema_local_var = execute_smart_contract_read_response_schema_create (
        smart_contract ? smart_contract_local_nonprim : NULL,
        location ? location_local_nonprim : NULL
        );

    return execute_smart_contract_read_response_schema_local_var;
end:
    if (smart_contract_local_nonprim) {
        smart_contract_read_schema_free(smart_contract_local_nonprim);
        smart_contract_local_nonprim = NULL;
    }
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
