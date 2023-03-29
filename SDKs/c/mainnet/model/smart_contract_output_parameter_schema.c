#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "smart_contract_output_parameter_schema.h"



smart_contract_output_parameter_schema_t *smart_contract_output_parameter_schema_create(
    char *type
    ) {
    smart_contract_output_parameter_schema_t *smart_contract_output_parameter_schema_local_var = malloc(sizeof(smart_contract_output_parameter_schema_t));
    if (!smart_contract_output_parameter_schema_local_var) {
        return NULL;
    }
    smart_contract_output_parameter_schema_local_var->type = type;

    return smart_contract_output_parameter_schema_local_var;
}


void smart_contract_output_parameter_schema_free(smart_contract_output_parameter_schema_t *smart_contract_output_parameter_schema) {
    if(NULL == smart_contract_output_parameter_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (smart_contract_output_parameter_schema->type) {
        free(smart_contract_output_parameter_schema->type);
        smart_contract_output_parameter_schema->type = NULL;
    }
    free(smart_contract_output_parameter_schema);
}

cJSON *smart_contract_output_parameter_schema_convertToJSON(smart_contract_output_parameter_schema_t *smart_contract_output_parameter_schema) {
    cJSON *item = cJSON_CreateObject();

    // smart_contract_output_parameter_schema->type
    if(smart_contract_output_parameter_schema->type) { 
    if(cJSON_AddStringToObject(item, "type", smart_contract_output_parameter_schema->type) == NULL) {
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

smart_contract_output_parameter_schema_t *smart_contract_output_parameter_schema_parseFromJSON(cJSON *smart_contract_output_parameter_schemaJSON){

    smart_contract_output_parameter_schema_t *smart_contract_output_parameter_schema_local_var = NULL;

    // smart_contract_output_parameter_schema->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(smart_contract_output_parameter_schemaJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }


    smart_contract_output_parameter_schema_local_var = smart_contract_output_parameter_schema_create (
        type ? strdup(type->valuestring) : NULL
        );

    return smart_contract_output_parameter_schema_local_var;
end:
    return NULL;

}
