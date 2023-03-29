#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monitor_smart_contract_event_param.h"



monitor_smart_contract_event_param_t *monitor_smart_contract_event_param_create(
    char *selected_integer_length,
    char *type,
    char *value
    ) {
    monitor_smart_contract_event_param_t *monitor_smart_contract_event_param_local_var = malloc(sizeof(monitor_smart_contract_event_param_t));
    if (!monitor_smart_contract_event_param_local_var) {
        return NULL;
    }
    monitor_smart_contract_event_param_local_var->selected_integer_length = selected_integer_length;
    monitor_smart_contract_event_param_local_var->type = type;
    monitor_smart_contract_event_param_local_var->value = value;

    return monitor_smart_contract_event_param_local_var;
}


void monitor_smart_contract_event_param_free(monitor_smart_contract_event_param_t *monitor_smart_contract_event_param) {
    if(NULL == monitor_smart_contract_event_param){
        return ;
    }
    listEntry_t *listEntry;
    if (monitor_smart_contract_event_param->selected_integer_length) {
        free(monitor_smart_contract_event_param->selected_integer_length);
        monitor_smart_contract_event_param->selected_integer_length = NULL;
    }
    if (monitor_smart_contract_event_param->type) {
        free(monitor_smart_contract_event_param->type);
        monitor_smart_contract_event_param->type = NULL;
    }
    if (monitor_smart_contract_event_param->value) {
        free(monitor_smart_contract_event_param->value);
        monitor_smart_contract_event_param->value = NULL;
    }
    free(monitor_smart_contract_event_param);
}

cJSON *monitor_smart_contract_event_param_convertToJSON(monitor_smart_contract_event_param_t *monitor_smart_contract_event_param) {
    cJSON *item = cJSON_CreateObject();

    // monitor_smart_contract_event_param->selected_integer_length
    if(monitor_smart_contract_event_param->selected_integer_length) { 
    if(cJSON_AddStringToObject(item, "selectedIntegerLength", monitor_smart_contract_event_param->selected_integer_length) == NULL) {
    goto fail; //String
    }
     } 


    // monitor_smart_contract_event_param->type
    if(monitor_smart_contract_event_param->type) { 
    if(cJSON_AddStringToObject(item, "type", monitor_smart_contract_event_param->type) == NULL) {
    goto fail; //String
    }
     } 


    // monitor_smart_contract_event_param->value
    if(monitor_smart_contract_event_param->value) { 
    if(cJSON_AddStringToObject(item, "value", monitor_smart_contract_event_param->value) == NULL) {
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

monitor_smart_contract_event_param_t *monitor_smart_contract_event_param_parseFromJSON(cJSON *monitor_smart_contract_event_paramJSON){

    monitor_smart_contract_event_param_t *monitor_smart_contract_event_param_local_var = NULL;

    // monitor_smart_contract_event_param->selected_integer_length
    cJSON *selected_integer_length = cJSON_GetObjectItemCaseSensitive(monitor_smart_contract_event_paramJSON, "selectedIntegerLength");
    if (selected_integer_length) { 
    if(!cJSON_IsString(selected_integer_length))
    {
    goto end; //String
    }
    }

    // monitor_smart_contract_event_param->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(monitor_smart_contract_event_paramJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // monitor_smart_contract_event_param->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(monitor_smart_contract_event_paramJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }


    monitor_smart_contract_event_param_local_var = monitor_smart_contract_event_param_create (
        selected_integer_length ? strdup(selected_integer_length->valuestring) : NULL,
        type ? strdup(type->valuestring) : NULL,
        value ? strdup(value->valuestring) : NULL
        );

    return monitor_smart_contract_event_param_local_var;
end:
    return NULL;

}
