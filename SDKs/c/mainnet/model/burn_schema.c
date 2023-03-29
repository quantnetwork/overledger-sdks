#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "burn_schema.h"



burn_schema_t *burn_schema_create(
    char *amount,
    char *unit
    ) {
    burn_schema_t *burn_schema_local_var = malloc(sizeof(burn_schema_t));
    if (!burn_schema_local_var) {
        return NULL;
    }
    burn_schema_local_var->amount = amount;
    burn_schema_local_var->unit = unit;

    return burn_schema_local_var;
}


void burn_schema_free(burn_schema_t *burn_schema) {
    if(NULL == burn_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (burn_schema->amount) {
        free(burn_schema->amount);
        burn_schema->amount = NULL;
    }
    if (burn_schema->unit) {
        free(burn_schema->unit);
        burn_schema->unit = NULL;
    }
    free(burn_schema);
}

cJSON *burn_schema_convertToJSON(burn_schema_t *burn_schema) {
    cJSON *item = cJSON_CreateObject();

    // burn_schema->amount
    if (!burn_schema->amount) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "amount", burn_schema->amount) == NULL) {
    goto fail; //String
    }


    // burn_schema->unit
    if(burn_schema->unit) { 
    if(cJSON_AddStringToObject(item, "unit", burn_schema->unit) == NULL) {
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

burn_schema_t *burn_schema_parseFromJSON(cJSON *burn_schemaJSON){

    burn_schema_t *burn_schema_local_var = NULL;

    // burn_schema->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(burn_schemaJSON, "amount");
    if (!amount) {
        goto end;
    }

    
    if(!cJSON_IsString(amount))
    {
    goto end; //String
    }

    // burn_schema->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(burn_schemaJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit))
    {
    goto end; //String
    }
    }


    burn_schema_local_var = burn_schema_create (
        strdup(amount->valuestring),
        unit ? strdup(unit->valuestring) : NULL
        );

    return burn_schema_local_var;
end:
    return NULL;

}
