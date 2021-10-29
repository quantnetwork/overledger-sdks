#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "function.h"



function_t *function_create(
    char *function_id,
    char *code,
    char *name,
    list_t *input_parameters,
    list_t *output_parameters
    ) {
    function_t *function_local_var = malloc(sizeof(function_t));
    if (!function_local_var) {
        return NULL;
    }
    function_local_var->function_id = function_id;
    function_local_var->code = code;
    function_local_var->name = name;
    function_local_var->input_parameters = input_parameters;
    function_local_var->output_parameters = output_parameters;

    return function_local_var;
}


void function_free(function_t *function) {
    if(NULL == function){
        return ;
    }
    listEntry_t *listEntry;
    if (function->function_id) {
        free(function->function_id);
        function->function_id = NULL;
    }
    if (function->code) {
        free(function->code);
        function->code = NULL;
    }
    if (function->name) {
        free(function->name);
        function->name = NULL;
    }
    if (function->input_parameters) {
        list_ForEach(listEntry, function->input_parameters) {
            parameter_free(listEntry->data);
        }
        list_free(function->input_parameters);
        function->input_parameters = NULL;
    }
    if (function->output_parameters) {
        list_ForEach(listEntry, function->output_parameters) {
            parameter_free(listEntry->data);
        }
        list_free(function->output_parameters);
        function->output_parameters = NULL;
    }
    free(function);
}

cJSON *function_convertToJSON(function_t *function) {
    cJSON *item = cJSON_CreateObject();

    // function->function_id
    if(function->function_id) { 
    if(cJSON_AddStringToObject(item, "functionId", function->function_id) == NULL) {
    goto fail; //String
    }
     } 


    // function->code
    if(function->code) { 
    if(cJSON_AddStringToObject(item, "code", function->code) == NULL) {
    goto fail; //String
    }
     } 


    // function->name
    if(function->name) { 
    if(cJSON_AddStringToObject(item, "name", function->name) == NULL) {
    goto fail; //String
    }
     } 


    // function->input_parameters
    if(function->input_parameters) { 
    cJSON *input_parameters = cJSON_AddArrayToObject(item, "inputParameters");
    if(input_parameters == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *input_parametersListEntry;
    if (function->input_parameters) {
    list_ForEach(input_parametersListEntry, function->input_parameters) {
    cJSON *itemLocal = parameter_convertToJSON(input_parametersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(input_parameters, itemLocal);
    }
    }
     } 


    // function->output_parameters
    if(function->output_parameters) { 
    cJSON *output_parameters = cJSON_AddArrayToObject(item, "outputParameters");
    if(output_parameters == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *output_parametersListEntry;
    if (function->output_parameters) {
    list_ForEach(output_parametersListEntry, function->output_parameters) {
    cJSON *itemLocal = parameter_convertToJSON(output_parametersListEntry->data);
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

function_t *function_parseFromJSON(cJSON *functionJSON){

    function_t *function_local_var = NULL;

    // function->function_id
    cJSON *function_id = cJSON_GetObjectItemCaseSensitive(functionJSON, "functionId");
    if (function_id) { 
    if(!cJSON_IsString(function_id))
    {
    goto end; //String
    }
    }

    // function->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(functionJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code))
    {
    goto end; //String
    }
    }

    // function->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(functionJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // function->input_parameters
    cJSON *input_parameters = cJSON_GetObjectItemCaseSensitive(functionJSON, "inputParameters");
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
        parameter_t *input_parametersItem = parameter_parseFromJSON(input_parameters_local_nonprimitive);

        list_addElement(input_parametersList, input_parametersItem);
    }
    }

    // function->output_parameters
    cJSON *output_parameters = cJSON_GetObjectItemCaseSensitive(functionJSON, "outputParameters");
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
        parameter_t *output_parametersItem = parameter_parseFromJSON(output_parameters_local_nonprimitive);

        list_addElement(output_parametersList, output_parametersItem);
    }
    }


    function_local_var = function_create (
        function_id ? strdup(function_id->valuestring) : NULL,
        code ? strdup(code->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        input_parameters ? input_parametersList : NULL,
        output_parameters ? output_parametersList : NULL
        );

    return function_local_var;
end:
    return NULL;

}
