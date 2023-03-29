#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_credit_transaction_request_schema.h"


char* typeprepare_credit_transaction_request_schema_ToString(quant_overledger_api_prepare_credit_transaction_request_schema_TYPE_e type) {
    char* typeArray[] =  { "NULL", "Payment", "Transfer", "Contract Invoke" };
	return typeArray[type];
}

quant_overledger_api_prepare_credit_transaction_request_schema_TYPE_e typeprepare_credit_transaction_request_schema_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "Payment", "Transfer", "Contract Invoke" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* urgencyprepare_credit_transaction_request_schema_ToString(quant_overledger_api_prepare_credit_transaction_request_schema_URGENCY_e urgency) {
    char* urgencyArray[] =  { "NULL", "Normal", "Fast", "Urgent" };
	return urgencyArray[urgency];
}

quant_overledger_api_prepare_credit_transaction_request_schema_URGENCY_e urgencyprepare_credit_transaction_request_schema_FromString(char* urgency){
    int stringToReturn = 0;
    char *urgencyArray[] =  { "NULL", "Normal", "Fast", "Urgent" };
    size_t sizeofArray = sizeof(urgencyArray) / sizeof(urgencyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(urgency, urgencyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

prepare_credit_transaction_request_schema_t *prepare_credit_transaction_request_schema_create(
    location_t *location,
    quant_overledger_api_prepare_credit_transaction_request_schema_TYPE_e type,
    quant_overledger_api_prepare_credit_transaction_request_schema_URGENCY_e urgency,
    credit_request_details_schema_t *request_details
    ) {
    prepare_credit_transaction_request_schema_t *prepare_credit_transaction_request_schema_local_var = malloc(sizeof(prepare_credit_transaction_request_schema_t));
    if (!prepare_credit_transaction_request_schema_local_var) {
        return NULL;
    }
    prepare_credit_transaction_request_schema_local_var->location = location;
    prepare_credit_transaction_request_schema_local_var->type = type;
    prepare_credit_transaction_request_schema_local_var->urgency = urgency;
    prepare_credit_transaction_request_schema_local_var->request_details = request_details;

    return prepare_credit_transaction_request_schema_local_var;
}


void prepare_credit_transaction_request_schema_free(prepare_credit_transaction_request_schema_t *prepare_credit_transaction_request_schema) {
    if(NULL == prepare_credit_transaction_request_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_credit_transaction_request_schema->location) {
        location_free(prepare_credit_transaction_request_schema->location);
        prepare_credit_transaction_request_schema->location = NULL;
    }
    if (prepare_credit_transaction_request_schema->request_details) {
        credit_request_details_schema_free(prepare_credit_transaction_request_schema->request_details);
        prepare_credit_transaction_request_schema->request_details = NULL;
    }
    free(prepare_credit_transaction_request_schema);
}

cJSON *prepare_credit_transaction_request_schema_convertToJSON(prepare_credit_transaction_request_schema_t *prepare_credit_transaction_request_schema) {
    cJSON *item = cJSON_CreateObject();

    // prepare_credit_transaction_request_schema->location
    if (!prepare_credit_transaction_request_schema->location) {
        goto fail;
    }
    
    cJSON *location_local_JSON = location_convertToJSON(prepare_credit_transaction_request_schema->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // prepare_credit_transaction_request_schema->type
    
    if(cJSON_AddStringToObject(item, "type", typeprepare_credit_transaction_request_schema_ToString(prepare_credit_transaction_request_schema->type)) == NULL)
    {
    goto fail; //Enum
    }


    // prepare_credit_transaction_request_schema->urgency
    
    if(cJSON_AddStringToObject(item, "urgency", urgencyprepare_credit_transaction_request_schema_ToString(prepare_credit_transaction_request_schema->urgency)) == NULL)
    {
    goto fail; //Enum
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

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

prepare_credit_transaction_request_schema_t *prepare_credit_transaction_request_schema_parseFromJSON(cJSON *prepare_credit_transaction_request_schemaJSON){

    prepare_credit_transaction_request_schema_t *prepare_credit_transaction_request_schema_local_var = NULL;

    // prepare_credit_transaction_request_schema->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(prepare_credit_transaction_request_schemaJSON, "location");
    if (!location) {
        goto end;
    }

    location_t *location_local_nonprim = NULL;
    
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive

    // prepare_credit_transaction_request_schema->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(prepare_credit_transaction_request_schemaJSON, "type");
    if (!type) {
        goto end;
    }

    quant_overledger_api_prepare_credit_transaction_request_schema_TYPE_e typeVariable;
    
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = typeprepare_credit_transaction_request_schema_FromString(type->valuestring);

    // prepare_credit_transaction_request_schema->urgency
    cJSON *urgency = cJSON_GetObjectItemCaseSensitive(prepare_credit_transaction_request_schemaJSON, "urgency");
    if (!urgency) {
        goto end;
    }

    quant_overledger_api_prepare_credit_transaction_request_schema_URGENCY_e urgencyVariable;
    
    if(!cJSON_IsString(urgency))
    {
    goto end; //Enum
    }
    urgencyVariable = urgencyprepare_credit_transaction_request_schema_FromString(urgency->valuestring);

    // prepare_credit_transaction_request_schema->request_details
    cJSON *request_details = cJSON_GetObjectItemCaseSensitive(prepare_credit_transaction_request_schemaJSON, "requestDetails");
    credit_request_details_schema_t *request_details_local_nonprim = NULL;
    if (request_details) { 
    request_details_local_nonprim = credit_request_details_schema_parseFromJSON(request_details); //nonprimitive
    }


    prepare_credit_transaction_request_schema_local_var = prepare_credit_transaction_request_schema_create (
        location_local_nonprim,
        typeVariable,
        urgencyVariable,
        request_details ? request_details_local_nonprim : NULL
        );

    return prepare_credit_transaction_request_schema_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    if (request_details_local_nonprim) {
        credit_request_details_schema_free(request_details_local_nonprim);
        request_details_local_nonprim = NULL;
    }
    return NULL;

}
