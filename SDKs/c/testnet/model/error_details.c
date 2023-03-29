#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "error_details.h"



error_details_t *error_details_create(
    char *category,
    char *description,
    char *code
    ) {
    error_details_t *error_details_local_var = malloc(sizeof(error_details_t));
    if (!error_details_local_var) {
        return NULL;
    }
    error_details_local_var->category = category;
    error_details_local_var->description = description;
    error_details_local_var->code = code;

    return error_details_local_var;
}


void error_details_free(error_details_t *error_details) {
    if(NULL == error_details){
        return ;
    }
    listEntry_t *listEntry;
    if (error_details->category) {
        free(error_details->category);
        error_details->category = NULL;
    }
    if (error_details->description) {
        free(error_details->description);
        error_details->description = NULL;
    }
    if (error_details->code) {
        free(error_details->code);
        error_details->code = NULL;
    }
    free(error_details);
}

cJSON *error_details_convertToJSON(error_details_t *error_details) {
    cJSON *item = cJSON_CreateObject();

    // error_details->category
    if(error_details->category) { 
    if(cJSON_AddStringToObject(item, "category", error_details->category) == NULL) {
    goto fail; //String
    }
     } 


    // error_details->description
    if(error_details->description) { 
    if(cJSON_AddStringToObject(item, "description", error_details->description) == NULL) {
    goto fail; //String
    }
     } 


    // error_details->code
    if(error_details->code) { 
    if(cJSON_AddStringToObject(item, "code", error_details->code) == NULL) {
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

error_details_t *error_details_parseFromJSON(cJSON *error_detailsJSON){

    error_details_t *error_details_local_var = NULL;

    // error_details->category
    cJSON *category = cJSON_GetObjectItemCaseSensitive(error_detailsJSON, "category");
    if (category) { 
    if(!cJSON_IsString(category))
    {
    goto end; //String
    }
    }

    // error_details->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(error_detailsJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }
    }

    // error_details->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(error_detailsJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code))
    {
    goto end; //String
    }
    }


    error_details_local_var = error_details_create (
        category ? strdup(category->valuestring) : NULL,
        description ? strdup(description->valuestring) : NULL,
        code ? strdup(code->valuestring) : NULL
        );

    return error_details_local_var;
end:
    return NULL;

}
