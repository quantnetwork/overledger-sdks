#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_mint_transaction_request_schema_qrc721.h"


char* typeprepare_mint_transaction_request_schema_qrc721_ToString(quant_overledger_api_prepare_mint_transaction_request_schema_qrc721_TYPE_e type) {
    char* typeArray[] =  { "NULL", "Payment", "Transfer", "Contract Invoke" };
	return typeArray[type];
}

quant_overledger_api_prepare_mint_transaction_request_schema_qrc721_TYPE_e typeprepare_mint_transaction_request_schema_qrc721_FromString(char* type){
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
char* urgencyprepare_mint_transaction_request_schema_qrc721_ToString(quant_overledger_api_prepare_mint_transaction_request_schema_qrc721_URGENCY_e urgency) {
    char* urgencyArray[] =  { "NULL", "Normal", "Fast", "Urgent" };
	return urgencyArray[urgency];
}

quant_overledger_api_prepare_mint_transaction_request_schema_qrc721_URGENCY_e urgencyprepare_mint_transaction_request_schema_qrc721_FromString(char* urgency){
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

prepare_mint_transaction_request_schema_qrc721_t *prepare_mint_transaction_request_schema_qrc721_create(
    location_t *location,
    quant_overledger_api_prepare_mint_transaction_request_schema_qrc721_TYPE_e type,
    quant_overledger_api_prepare_mint_transaction_request_schema_qrc721_URGENCY_e urgency,
    mint_request_details_schema_qrc721_t *request_details
    ) {
    prepare_mint_transaction_request_schema_qrc721_t *prepare_mint_transaction_request_schema_qrc721_local_var = malloc(sizeof(prepare_mint_transaction_request_schema_qrc721_t));
    if (!prepare_mint_transaction_request_schema_qrc721_local_var) {
        return NULL;
    }
    prepare_mint_transaction_request_schema_qrc721_local_var->location = location;
    prepare_mint_transaction_request_schema_qrc721_local_var->type = type;
    prepare_mint_transaction_request_schema_qrc721_local_var->urgency = urgency;
    prepare_mint_transaction_request_schema_qrc721_local_var->request_details = request_details;

    return prepare_mint_transaction_request_schema_qrc721_local_var;
}


void prepare_mint_transaction_request_schema_qrc721_free(prepare_mint_transaction_request_schema_qrc721_t *prepare_mint_transaction_request_schema_qrc721) {
    if(NULL == prepare_mint_transaction_request_schema_qrc721){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_mint_transaction_request_schema_qrc721->location) {
        location_free(prepare_mint_transaction_request_schema_qrc721->location);
        prepare_mint_transaction_request_schema_qrc721->location = NULL;
    }
    if (prepare_mint_transaction_request_schema_qrc721->request_details) {
        mint_request_details_schema_qrc721_free(prepare_mint_transaction_request_schema_qrc721->request_details);
        prepare_mint_transaction_request_schema_qrc721->request_details = NULL;
    }
    free(prepare_mint_transaction_request_schema_qrc721);
}

cJSON *prepare_mint_transaction_request_schema_qrc721_convertToJSON(prepare_mint_transaction_request_schema_qrc721_t *prepare_mint_transaction_request_schema_qrc721) {
    cJSON *item = cJSON_CreateObject();

    // prepare_mint_transaction_request_schema_qrc721->location
    if (!prepare_mint_transaction_request_schema_qrc721->location) {
        goto fail;
    }
    
    cJSON *location_local_JSON = location_convertToJSON(prepare_mint_transaction_request_schema_qrc721->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // prepare_mint_transaction_request_schema_qrc721->type
    
    if(cJSON_AddStringToObject(item, "type", typeprepare_mint_transaction_request_schema_qrc721_ToString(prepare_mint_transaction_request_schema_qrc721->type)) == NULL)
    {
    goto fail; //Enum
    }


    // prepare_mint_transaction_request_schema_qrc721->urgency
    
    if(cJSON_AddStringToObject(item, "urgency", urgencyprepare_mint_transaction_request_schema_qrc721_ToString(prepare_mint_transaction_request_schema_qrc721->urgency)) == NULL)
    {
    goto fail; //Enum
    }


    // prepare_mint_transaction_request_schema_qrc721->request_details
    if(prepare_mint_transaction_request_schema_qrc721->request_details) { 
    cJSON *request_details_local_JSON = mint_request_details_schema_qrc721_convertToJSON(prepare_mint_transaction_request_schema_qrc721->request_details);
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

prepare_mint_transaction_request_schema_qrc721_t *prepare_mint_transaction_request_schema_qrc721_parseFromJSON(cJSON *prepare_mint_transaction_request_schema_qrc721JSON){

    prepare_mint_transaction_request_schema_qrc721_t *prepare_mint_transaction_request_schema_qrc721_local_var = NULL;

    // prepare_mint_transaction_request_schema_qrc721->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(prepare_mint_transaction_request_schema_qrc721JSON, "location");
    if (!location) {
        goto end;
    }

    location_t *location_local_nonprim = NULL;
    
    location_local_nonprim = location_parseFromJSON(location); //nonprimitive

    // prepare_mint_transaction_request_schema_qrc721->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(prepare_mint_transaction_request_schema_qrc721JSON, "type");
    if (!type) {
        goto end;
    }

    quant_overledger_api_prepare_mint_transaction_request_schema_qrc721_TYPE_e typeVariable;
    
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = typeprepare_mint_transaction_request_schema_qrc721_FromString(type->valuestring);

    // prepare_mint_transaction_request_schema_qrc721->urgency
    cJSON *urgency = cJSON_GetObjectItemCaseSensitive(prepare_mint_transaction_request_schema_qrc721JSON, "urgency");
    if (!urgency) {
        goto end;
    }

    quant_overledger_api_prepare_mint_transaction_request_schema_qrc721_URGENCY_e urgencyVariable;
    
    if(!cJSON_IsString(urgency))
    {
    goto end; //Enum
    }
    urgencyVariable = urgencyprepare_mint_transaction_request_schema_qrc721_FromString(urgency->valuestring);

    // prepare_mint_transaction_request_schema_qrc721->request_details
    cJSON *request_details = cJSON_GetObjectItemCaseSensitive(prepare_mint_transaction_request_schema_qrc721JSON, "requestDetails");
    mint_request_details_schema_qrc721_t *request_details_local_nonprim = NULL;
    if (request_details) { 
    request_details_local_nonprim = mint_request_details_schema_qrc721_parseFromJSON(request_details); //nonprimitive
    }


    prepare_mint_transaction_request_schema_qrc721_local_var = prepare_mint_transaction_request_schema_qrc721_create (
        location_local_nonprim,
        typeVariable,
        urgencyVariable,
        request_details ? request_details_local_nonprim : NULL
        );

    return prepare_mint_transaction_request_schema_qrc721_local_var;
end:
    if (location_local_nonprim) {
        location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    if (request_details_local_nonprim) {
        mint_request_details_schema_qrc721_free(request_details_local_nonprim);
        request_details_local_nonprim = NULL;
    }
    return NULL;

}
