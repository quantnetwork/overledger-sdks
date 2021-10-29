#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_search_schema.h"



prepare_search_schema_t *prepare_search_schema_create(
    location_t *location
    ) {
    prepare_search_schema_t *prepare_search_schema_local_var = malloc(sizeof(prepare_search_schema_t));
    if (!prepare_search_schema_local_var) {
        return NULL;
    }
    prepare_search_schema_local_var->location = location;

    return prepare_search_schema_local_var;
}


void prepare_search_schema_free(prepare_search_schema_t *prepare_search_schema) {
    if(NULL == prepare_search_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_search_schema->location) {
        location_free(prepare_search_schema->location);
        prepare_search_schema->location = NULL;
    }
    free(prepare_search_schema);
}

cJSON *prepare_search_schema_convertToJSON(prepare_search_schema_t *prepare_search_schema) {
    cJSON *item = cJSON_CreateObject();

    // prepare_search_schema->location
    if(prepare_search_schema->location) { 
    cJSON *location_local_JSON = location_convertToJSON(prepare_search_schema->location);
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

prepare_search_schema_t *prepare_search_schema_parseFromJSON(cJSON *prepare_search_schemaJSON){

    prepare_search_schema_t *prepare_search_schema_local_var = NULL;

    // prepare_search_schema->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(prepare_search_schemaJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }


    prepare_search_schema_local_var = prepare_search_schema_create (
        location ? location_local_nonprim : NULL
        );

    return prepare_search_schema_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
