#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "extra_fields.h"



extra_fields_t *extra_fields_create(
    double required_signatures
    ) {
    extra_fields_t *extra_fields_local_var = malloc(sizeof(extra_fields_t));
    if (!extra_fields_local_var) {
        return NULL;
    }
    extra_fields_local_var->required_signatures = required_signatures;

    return extra_fields_local_var;
}


void extra_fields_free(extra_fields_t *extra_fields) {
    if(NULL == extra_fields){
        return ;
    }
    listEntry_t *listEntry;
    free(extra_fields);
}

cJSON *extra_fields_convertToJSON(extra_fields_t *extra_fields) {
    cJSON *item = cJSON_CreateObject();

    // extra_fields->required_signatures
    if(extra_fields->required_signatures) { 
    if(cJSON_AddNumberToObject(item, "requiredSignatures", extra_fields->required_signatures) == NULL) {
    goto fail; //Numeric
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

extra_fields_t *extra_fields_parseFromJSON(cJSON *extra_fieldsJSON){

    extra_fields_t *extra_fields_local_var = NULL;

    // extra_fields->required_signatures
    cJSON *required_signatures = cJSON_GetObjectItemCaseSensitive(extra_fieldsJSON, "requiredSignatures");
    if (required_signatures) { 
    if(!cJSON_IsNumber(required_signatures))
    {
    goto end; //Numeric
    }
    }


    extra_fields_local_var = extra_fields_create (
        required_signatures ? required_signatures->valuedouble : 0
        );

    return extra_fields_local_var;
end:
    return NULL;

}
