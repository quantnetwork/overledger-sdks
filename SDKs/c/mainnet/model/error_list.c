#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "error_list.h"



error_list_t *error_list_create(
    list_t *errors,
    int error_count
    ) {
    error_list_t *error_list_local_var = malloc(sizeof(error_list_t));
    if (!error_list_local_var) {
        return NULL;
    }
    error_list_local_var->errors = errors;
    error_list_local_var->error_count = error_count;

    return error_list_local_var;
}


void error_list_free(error_list_t *error_list) {
    if(NULL == error_list){
        return ;
    }
    listEntry_t *listEntry;
    if (error_list->errors) {
        list_ForEach(listEntry, error_list->errors) {
            error_free(listEntry->data);
        }
        list_free(error_list->errors);
        error_list->errors = NULL;
    }
    free(error_list);
}

cJSON *error_list_convertToJSON(error_list_t *error_list) {
    cJSON *item = cJSON_CreateObject();

    // error_list->errors
    if(error_list->errors) { 
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (error_list->errors) {
    list_ForEach(errorsListEntry, error_list->errors) {
    cJSON *itemLocal = error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
     } 


    // error_list->error_count
    if(error_list->error_count) { 
    if(cJSON_AddNumberToObject(item, "errorCount", error_list->error_count) == NULL) {
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

error_list_t *error_list_parseFromJSON(cJSON *error_listJSON){

    error_list_t *error_list_local_var = NULL;

    // error_list->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(error_listJSON, "errors");
    list_t *errorsList;
    if (errors) { 
    cJSON *errors_local_nonprimitive;
    if(!cJSON_IsArray(errors)){
        goto end; //nonprimitive container
    }

    errorsList = list_create();

    cJSON_ArrayForEach(errors_local_nonprimitive,errors )
    {
        if(!cJSON_IsObject(errors_local_nonprimitive)){
            goto end;
        }
        error_t *errorsItem = error_parseFromJSON(errors_local_nonprimitive);

        list_addElement(errorsList, errorsItem);
    }
    }

    // error_list->error_count
    cJSON *error_count = cJSON_GetObjectItemCaseSensitive(error_listJSON, "errorCount");
    if (error_count) { 
    if(!cJSON_IsNumber(error_count))
    {
    goto end; //Numeric
    }
    }


    error_list_local_var = error_list_create (
        errors ? errorsList : NULL,
        error_count ? error_count->valuedouble : 0
        );

    return error_list_local_var;
end:
    return NULL;

}
