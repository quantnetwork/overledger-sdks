#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "smart_contract_read_function_schema.h"



smart_contract_read_function_schema_t *smart_contract_read_function_schema_create(
    char *name,
    char *function_id,
    list_t *input_parameters,
    list_t *output_parameters
    ) {
    smart_contract_read_function_schema_t *smart_contract_read_function_schema_local_var = malloc(sizeof(smart_contract_read_function_schema_t));
    if (!smart_contract_read_function_schema_local_var) {
        return NULL;
    }
    smart_contract_read_function_schema_local_var->name = name;
    smart_contract_read_function_schema_local_var->function_id = function_id;
    smart_contract_read_function_schema_local_var->input_parameters = input_parameters;
    smart_contract_read_function_schema_local_var->output_parameters = output_parameters;

    return smart_contract_read_function_schema_local_var;
}


void smart_contract_read_function_schema_free(smart_contract_read_function_schema_t *smart_contract_read_function_schema) {
    if(NULL == smart_contract_read_function_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (smart_contract_read_function_schema->name) {
        free(smart_contract_read_function_schema->name);
        smart_contract_read_function_schema->name = NULL;
    }
    if (smart_contract_read_function_schema->function_id) {
        free(smart_contract_read_function_schema->function_id);
        smart_contract_read_function_schema->function_id = NULL;
    }
    if (smart_contract_read_function_schema->input_parameters) {
        list_ForEach(listEntry, smart_contract_read_function_schema->input_parameters) {
            smart_contract_input_parameter_schema_free(listEntry->data);
        }
        list_free(smart_contract_read_function_schema->input_parameters);
        smart_contract_read_function_schema->input_parameters = NULL;
    }
    if (smart_contract_read_function_schema->output_parameters) {
        list_ForEach(listEntry, smart_contract_read_function_schema->output_parameters) {
            smart_contract_input_parameter_schema_free(listEntry->data);
        }
        list_free(smart_contract_read_function_schema->output_parameters);
        smart_contract_read_function_schema->output_parameters = NULL;
    }
    free(smart_contract_read_function_schema);
}

cJSON *smart_contract_read_function_schema_convertToJSON(smart_contract_read_function_schema_t *smart_contract_read_function_schema) {
    cJSON *item = cJSON_CreateObject();

    // smart_contract_read_function_schema->name
    if(smart_contract_read_function_schema->name) { 
    if(cJSON_AddStringToObject(item, "name", smart_contract_read_function_schema->name) == NULL) {
    goto fail; //String
    }
     } 


    // smart_contract_read_function_schema->function_id
    if(smart_contract_read_function_schema->function_id) { 
    if(cJSON_AddStringToObject(item, "functionId", smart_contract_read_function_schema->function_id) == NULL) {
    goto fail; //String
    }
     } 


    // smart_contract_read_function_schema->input_parameters
    if(smart_contract_read_function_schema->input_parameters) { 
    cJSON *input_parameters = cJSON_AddArrayToObject(item, "inputParameters");
    if(input_parameters == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *input_parametersListEntry;
    if (smart_contract_read_function_schema->input_parameters) {
    list_ForEach(input_parametersListEntry, smart_contract_read_function_schema->input_parameters) {
    cJSON *itemLocal = smart_contract_input_parameter_schema_convertToJSON(input_parametersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(input_parameters, itemLocal);
    }
    }
     } 


    // smart_contract_read_function_schema->output_parameters
    if(smart_contract_read_function_schema->output_parameters) { 
    cJSON *output_parameters = cJSON_AddArrayToObject(item, "outputParameters");
    if(output_parameters == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *output_parametersListEntry;
    if (smart_contract_read_function_schema->output_parameters) {
    list_ForEach(output_parametersListEntry, smart_contract_read_function_schema->output_parameters) {
    cJSON *itemLocal = smart_contract_input_parameter_schema_convertToJSON(output_parametersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(output_parameters, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

smart_contract_read_function_schema_t *smart_contract_read_function_schema_parseFromJSON(cJSON *smart_contract_read_function_schemaJSON){

    smart_contract_read_function_schema_t *smart_contract_read_function_schema_local_var = NULL;

    // smart_contract_read_function_schema->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(smart_contract_read_function_schemaJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // smart_contract_read_function_schema->function_id
    cJSON *function_id = cJSON_GetObjectItemCaseSensitive(smart_contract_read_function_schemaJSON, "functionId");
    if (function_id) { 
    if(!cJSON_IsString(function_id))
    {
    goto end; //String
    }
    }

    // smart_contract_read_function_schema->input_parameters
    cJSON *input_parameters = cJSON_GetObjectItemCaseSensitive(smart_contract_read_function_schemaJSON, "inputParameters");
    list_t *input_parametersList;
    if (input_parameters) { 
    cJSON *input_parameters_local_nonprimitive;
    if(!cJSON_IsArray(input_parameters)){
        goto end; //nonprimitive container
    }

    input_parametersList = list_create();

    cJSON_ArrayForEach(input_parameters_local_nonprimitive,input_parameters )
    {
        if(!cJSON_IsObject(input_parameters_local_nonprimitive)){
            goto end;
        }
        smart_contract_input_parameter_schema_t *input_parametersItem = smart_contract_input_parameter_schema_parseFromJSON(input_parameters_local_nonprimitive);

        list_addElement(input_parametersList, input_parametersItem);
    }
    }

    // smart_contract_read_function_schema->output_parameters
    cJSON *output_parameters = cJSON_GetObjectItemCaseSensitive(smart_contract_read_function_schemaJSON, "outputParameters");
    list_t *output_parametersList;
    if (output_parameters) { 
    cJSON *output_parameters_local_nonprimitive;
    if(!cJSON_IsArray(output_parameters)){
        goto end; //nonprimitive container
    }

    output_parametersList = list_create();

    cJSON_ArrayForEach(output_parameters_local_nonprimitive,output_parameters )
    {
        if(!cJSON_IsObject(output_parameters_local_nonprimitive)){
            goto end;
        }
        smart_contract_input_parameter_schema_t *output_parametersItem = smart_contract_input_parameter_schema_parseFromJSON(output_parameters_local_nonprimitive);

        list_addElement(output_parametersList, output_parametersItem);
    }
    }


    smart_contract_read_function_schema_local_var = smart_contract_read_function_schema_create (
        name ? strdup(name->valuestring) : NULL,
        function_id ? strdup(function_id->valuestring) : NULL,
        input_parameters ? input_parametersList : NULL,
        output_parameters ? output_parametersList : NULL
        );

    return smart_contract_read_function_schema_local_var;
end:
    return NULL;

}
