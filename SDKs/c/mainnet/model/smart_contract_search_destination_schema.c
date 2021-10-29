#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "smart_contract_search_destination_schema.h"



smart_contract_search_destination_schema_t *smart_contract_search_destination_schema_create(
    smart_contract_search_schema_t *smart_contract
    ) {
    smart_contract_search_destination_schema_t *smart_contract_search_destination_schema_local_var = malloc(sizeof(smart_contract_search_destination_schema_t));
    if (!smart_contract_search_destination_schema_local_var) {
        return NULL;
    }
    smart_contract_search_destination_schema_local_var->smart_contract = smart_contract;

    return smart_contract_search_destination_schema_local_var;
}


void smart_contract_search_destination_schema_free(smart_contract_search_destination_schema_t *smart_contract_search_destination_schema) {
    if(NULL == smart_contract_search_destination_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (smart_contract_search_destination_schema->smart_contract) {
        smart_contract_search_schema_free(smart_contract_search_destination_schema->smart_contract);
        smart_contract_search_destination_schema->smart_contract = NULL;
    }
    free(smart_contract_search_destination_schema);
}

cJSON *smart_contract_search_destination_schema_convertToJSON(smart_contract_search_destination_schema_t *smart_contract_search_destination_schema) {
    cJSON *item = cJSON_CreateObject();

    // smart_contract_search_destination_schema->smart_contract
    if(smart_contract_search_destination_schema->smart_contract) { 
    cJSON *smart_contract_local_JSON = smart_contract_search_schema_convertToJSON(smart_contract_search_destination_schema->smart_contract);
    if(smart_contract_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "smartContract", smart_contract_local_JSON);
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

smart_contract_search_destination_schema_t *smart_contract_search_destination_schema_parseFromJSON(cJSON *smart_contract_search_destination_schemaJSON){

    smart_contract_search_destination_schema_t *smart_contract_search_destination_schema_local_var = NULL;

    // smart_contract_search_destination_schema->smart_contract
    cJSON *smart_contract = cJSON_GetObjectItemCaseSensitive(smart_contract_search_destination_schemaJSON, "smartContract");
    smart_contract_search_schema_t *smart_contract_local_nonprim = NULL;
    if (smart_contract) { 
    smart_contract_local_nonprim = smart_contract_search_schema_parseFromJSON(smart_contract); //nonprimitive
    }


    smart_contract_search_destination_schema_local_var = smart_contract_search_destination_schema_create (
        smart_contract ? smart_contract_local_nonprim : NULL
        );

    return smart_contract_search_destination_schema_local_var;
end:
    if (smart_contract_local_nonprim) {
        smart_contract_search_schema_free(smart_contract_local_nonprim);
        smart_contract_local_nonprim = NULL;
    }
    return NULL;

}
