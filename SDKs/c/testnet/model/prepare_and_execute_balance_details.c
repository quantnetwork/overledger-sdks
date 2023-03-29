#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_and_execute_balance_details.h"



prepare_and_execute_balance_details_t *prepare_and_execute_balance_details_create(
    char *unit,
    char *amount
    ) {
    prepare_and_execute_balance_details_t *prepare_and_execute_balance_details_local_var = malloc(sizeof(prepare_and_execute_balance_details_t));
    if (!prepare_and_execute_balance_details_local_var) {
        return NULL;
    }
    prepare_and_execute_balance_details_local_var->unit = unit;
    prepare_and_execute_balance_details_local_var->amount = amount;

    return prepare_and_execute_balance_details_local_var;
}


void prepare_and_execute_balance_details_free(prepare_and_execute_balance_details_t *prepare_and_execute_balance_details) {
    if(NULL == prepare_and_execute_balance_details){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_and_execute_balance_details->unit) {
        free(prepare_and_execute_balance_details->unit);
        prepare_and_execute_balance_details->unit = NULL;
    }
    if (prepare_and_execute_balance_details->amount) {
        free(prepare_and_execute_balance_details->amount);
        prepare_and_execute_balance_details->amount = NULL;
    }
    free(prepare_and_execute_balance_details);
}

cJSON *prepare_and_execute_balance_details_convertToJSON(prepare_and_execute_balance_details_t *prepare_and_execute_balance_details) {
    cJSON *item = cJSON_CreateObject();

    // prepare_and_execute_balance_details->unit
    if(prepare_and_execute_balance_details->unit) { 
    if(cJSON_AddStringToObject(item, "unit", prepare_and_execute_balance_details->unit) == NULL) {
    goto fail; //String
    }
     } 


    // prepare_and_execute_balance_details->amount
    if(prepare_and_execute_balance_details->amount) { 
    if(cJSON_AddStringToObject(item, "amount", prepare_and_execute_balance_details->amount) == NULL) {
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

prepare_and_execute_balance_details_t *prepare_and_execute_balance_details_parseFromJSON(cJSON *prepare_and_execute_balance_detailsJSON){

    prepare_and_execute_balance_details_t *prepare_and_execute_balance_details_local_var = NULL;

    // prepare_and_execute_balance_details->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(prepare_and_execute_balance_detailsJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit))
    {
    goto end; //String
    }
    }

    // prepare_and_execute_balance_details->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(prepare_and_execute_balance_detailsJSON, "amount");
    if (amount) { 
    if(!cJSON_IsString(amount))
    {
    goto end; //String
    }
    }


    prepare_and_execute_balance_details_local_var = prepare_and_execute_balance_details_create (
        unit ? strdup(unit->valuestring) : NULL,
        amount ? strdup(amount->valuestring) : NULL
        );

    return prepare_and_execute_balance_details_local_var;
end:
    return NULL;

}
