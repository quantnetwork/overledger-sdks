#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "smart_contract_tag.h"



smart_contract_tag_t *smart_contract_tag_create(
    char *name,
    char *function_name,
    char *event_name
    ) {
    smart_contract_tag_t *smart_contract_tag_local_var = malloc(sizeof(smart_contract_tag_t));
    if (!smart_contract_tag_local_var) {
        return NULL;
    }
    smart_contract_tag_local_var->name = name;
    smart_contract_tag_local_var->function_name = function_name;
    smart_contract_tag_local_var->event_name = event_name;

    return smart_contract_tag_local_var;
}


void smart_contract_tag_free(smart_contract_tag_t *smart_contract_tag) {
    if(NULL == smart_contract_tag){
        return ;
    }
    listEntry_t *listEntry;
    if (smart_contract_tag->name) {
        free(smart_contract_tag->name);
        smart_contract_tag->name = NULL;
    }
    if (smart_contract_tag->function_name) {
        free(smart_contract_tag->function_name);
        smart_contract_tag->function_name = NULL;
    }
    if (smart_contract_tag->event_name) {
        free(smart_contract_tag->event_name);
        smart_contract_tag->event_name = NULL;
    }
    free(smart_contract_tag);
}

cJSON *smart_contract_tag_convertToJSON(smart_contract_tag_t *smart_contract_tag) {
    cJSON *item = cJSON_CreateObject();

    // smart_contract_tag->name
    if(smart_contract_tag->name) { 
    if(cJSON_AddStringToObject(item, "name", smart_contract_tag->name) == NULL) {
    goto fail; //String
    }
     } 


    // smart_contract_tag->function_name
    if(smart_contract_tag->function_name) { 
    if(cJSON_AddStringToObject(item, "functionName", smart_contract_tag->function_name) == NULL) {
    goto fail; //String
    }
     } 


    // smart_contract_tag->event_name
    if(smart_contract_tag->event_name) { 
    if(cJSON_AddStringToObject(item, "eventName", smart_contract_tag->event_name) == NULL) {
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

smart_contract_tag_t *smart_contract_tag_parseFromJSON(cJSON *smart_contract_tagJSON){

    smart_contract_tag_t *smart_contract_tag_local_var = NULL;

    // smart_contract_tag->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(smart_contract_tagJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // smart_contract_tag->function_name
    cJSON *function_name = cJSON_GetObjectItemCaseSensitive(smart_contract_tagJSON, "functionName");
    if (function_name) { 
    if(!cJSON_IsString(function_name))
    {
    goto end; //String
    }
    }

    // smart_contract_tag->event_name
    cJSON *event_name = cJSON_GetObjectItemCaseSensitive(smart_contract_tagJSON, "eventName");
    if (event_name) { 
    if(!cJSON_IsString(event_name))
    {
    goto end; //String
    }
    }


    smart_contract_tag_local_var = smart_contract_tag_create (
        name ? strdup(name->valuestring) : NULL,
        function_name ? strdup(function_name->valuestring) : NULL,
        event_name ? strdup(event_name->valuestring) : NULL
        );

    return smart_contract_tag_local_var;
end:
    return NULL;

}
