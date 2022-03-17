#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_credit_transaction_request_schema.h"



prepare_credit_transaction_request_schema_t *prepare_credit_transaction_request_schema_create(
    char *urgency,
    credit_request_details_schema_t *request_details,
    location_t *location,
    char *type
    ) {
    prepare_credit_transaction_request_schema_t *prepare_credit_transaction_request_schema_local_var = malloc(sizeof(prepare_credit_transaction_request_schema_t));
    if (!prepare_credit_transaction_request_schema_local_var) {
        return NULL;
    }
    prepare_credit_transaction_request_schema_local_var->urgency = urgency;
    prepare_credit_transaction_request_schema_local_var->request_details = request_details;
    prepare_credit_transaction_request_schema_local_var->location = location;
    prepare_credit_transaction_request_schema_local_var->type = type;

    return prepare_credit_transaction_request_schema_local_var;
}


void prepare_credit_transaction_request_schema_free(prepare_credit_transaction_request_schema_t *prepare_credit_transaction_request_schema) {
    if(NULL == prepare_credit_transaction_request_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_credit_transaction_request_schema->urgency) {
        free(prepare_credit_transaction_request_schema->urgency);
        prepare_credit_transaction_request_schema->urgency = NULL;
    }
    if (prepare_credit_transaction_request_schema->request_details) {
        credit_request_details_schema_free(prepare_credit_transaction_request_schema->request_details);
        prepare_credit_transaction_request_schema->request_details = NULL;
    }
    if (prepare_credit_transaction_request_schema->location) {
        location_free(prepare_credit_transaction_request_schema->location);
        prepare_credit_transaction_request_schema->location = NULL;
    }
    if (prepare_credit_transaction_request_schema->type) {
        free(prepare_credit_transaction_request_schema->type);
        prepare_credit_transaction_request_schema->type = NULL;
    }
    free(prepare_credit_transaction_request_schema);
}

cJSON *prepare_credit_transaction_request_schema_convertToJSON(prepare_credit_transaction_request_schema_t *prepare_credit_transaction_request_schema) {
    cJSON *item = cJSON_CreateObject();

    // prepare_credit_transaction_request_schema->urgency
    if(prepare_credit_transaction_request_schema->urgency) { 
    if(cJSON_AddStringToObject(item, "urgency", prepare_credit_transaction_request_schema->urgency) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_credit_transaction_request_schema->request_details
    if(prepare_credit_transaction_request_schema->request_details) { 
    cJSON *request_details_local_JSON = credit_request_details_schema_convertToJSON(prepare_credit_transaction_request_schema->request_details);
    if(request_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "requestDetails", request_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_credit_transaction_request_schema->location
    if(prepare_credit_transaction_request_schema->location) { 
    cJSON *location_local_JSON = location_convertToJSON(prepare_credit_transaction_request_schema->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // prepare_credit_transaction_request_schema->type
    if(prepare_credit_transaction_request_schema->type) { 
    if(cJSON_AddStringToObject(item, "type", prepare_credit_transaction_request_schema->type) == NULL) {
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

prepare_credit_transaction_request_schema_t *prepare_credit_transaction_request_schema_parseFromJSON(cJSON *prepare_credit_transaction_request_schemaJSON){

    prepare_credit_transaction_request_schema_t *prepare_credit_transaction_request_schema_local_var = NULL;

    // prepare_credit_transaction_request_schema->urgency
    cJSON *urgency = cJSON_GetObjectItemCaseSensitive(prepare_credit_transaction_request_schemaJSON, "urgency");
    if (urgency) { 
    if(!cJSON_IsString(urgency))
    {
    goto end; //String
    }
    }

    // prepare_credit_transaction_request_schema->request_details
    cJSON *request_details = cJSON_GetObjectItemCaseSensitive(prepare_credit_transaction_request_schemaJSON, "requestDetails");
    credit_request_details_schema_t *request_details_local_nonprim = NULL;
    if (request_details) { 
    request_details_local_nonprim = credit_request_details_schema_parseFromJSON(request_details); //nonprimitive
    }

    // prepare_credit_transaction_request_schema->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(prepare_credit_transaction_request_schemaJSON, "location");
    location_t *location_local_nonprim = NULL;
    if (location) { 
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive
    }

    // prepare_credit_transaction_request_schema->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(prepare_credit_transaction_request_schemaJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }


    prepare_credit_transaction_request_schema_local_var = prepare_credit_transaction_request_schema_create (
        urgency ? strdup(urgency->valuestring) : NULL,
        request_details ? request_details_local_nonprim : NULL,
        location ? location_local_nonprim : NULL,
        type ? strdup(type->valuestring) : NULL
        );

    return prepare_credit_transaction_request_schema_local_var;
end:
    if (request_details_local_nonprim) {
        credit_request_details_schema_free(request_details_local_nonprim);
        request_details_local_nonprim = NULL;
    }
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    return NULL;

}
