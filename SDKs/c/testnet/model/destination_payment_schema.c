#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "destination_payment_schema.h"



destination_payment_schema_t *destination_payment_schema_create(
    char *destination_id,
    payment_schema_t *payment
    ) {
    destination_payment_schema_t *destination_payment_schema_local_var = malloc(sizeof(destination_payment_schema_t));
    if (!destination_payment_schema_local_var) {
        return NULL;
    }
    destination_payment_schema_local_var->destination_id = destination_id;
    destination_payment_schema_local_var->payment = payment;

    return destination_payment_schema_local_var;
}


void destination_payment_schema_free(destination_payment_schema_t *destination_payment_schema) {
    if(NULL == destination_payment_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (destination_payment_schema->destination_id) {
        free(destination_payment_schema->destination_id);
        destination_payment_schema->destination_id = NULL;
    }
    if (destination_payment_schema->payment) {
        payment_schema_free(destination_payment_schema->payment);
        destination_payment_schema->payment = NULL;
    }
    free(destination_payment_schema);
}

cJSON *destination_payment_schema_convertToJSON(destination_payment_schema_t *destination_payment_schema) {
    cJSON *item = cJSON_CreateObject();

    // destination_payment_schema->destination_id
    if (!destination_payment_schema->destination_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "destinationId", destination_payment_schema->destination_id) == NULL) {
    goto fail; //String
    }


    // destination_payment_schema->payment
    if (!destination_payment_schema->payment) {
        goto fail;
    }
    
    cJSON *payment_local_JSON = payment_schema_convertToJSON(destination_payment_schema->payment);
    if(payment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "payment", payment_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

destination_payment_schema_t *destination_payment_schema_parseFromJSON(cJSON *destination_payment_schemaJSON){

    destination_payment_schema_t *destination_payment_schema_local_var = NULL;

    // destination_payment_schema->destination_id
    cJSON *destination_id = cJSON_GetObjectItemCaseSensitive(destination_payment_schemaJSON, "destinationId");
    if (!destination_id) {
        goto end;
    }

    
    if(!cJSON_IsString(destination_id))
    {
    goto end; //String
    }

    // destination_payment_schema->payment
    cJSON *payment = cJSON_GetObjectItemCaseSensitive(destination_payment_schemaJSON, "payment");
    if (!payment) {
        goto end;
    }

    payment_schema_t *payment_local_nonprim = NULL;
    
    payment_local_nonprim = payment_schema_parseFromJSON(payment); //nonprimitive


    destination_payment_schema_local_var = destination_payment_schema_create (
        strdup(destination_id->valuestring),
        payment_local_nonprim
        );

    return destination_payment_schema_local_var;
end:
    if (payment_local_nonprim) {
        payment_schema_free(payment_local_nonprim);
        payment_local_nonprim = NULL;
    }
    return NULL;

}
