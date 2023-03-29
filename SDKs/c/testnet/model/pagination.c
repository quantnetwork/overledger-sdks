#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "pagination.h"



pagination_t *pagination_create(
    int size,
    int total,
    int page
    ) {
    pagination_t *pagination_local_var = malloc(sizeof(pagination_t));
    if (!pagination_local_var) {
        return NULL;
    }
    pagination_local_var->size = size;
    pagination_local_var->total = total;
    pagination_local_var->page = page;

    return pagination_local_var;
}


void pagination_free(pagination_t *pagination) {
    if(NULL == pagination){
        return ;
    }
    listEntry_t *listEntry;
    free(pagination);
}

cJSON *pagination_convertToJSON(pagination_t *pagination) {
    cJSON *item = cJSON_CreateObject();

    // pagination->size
    if(pagination->size) { 
    if(cJSON_AddNumberToObject(item, "size", pagination->size) == NULL) {
    goto fail; //Numeric
    }
     } 


    // pagination->total
    if(pagination->total) { 
    if(cJSON_AddNumberToObject(item, "total", pagination->total) == NULL) {
    goto fail; //Numeric
    }
     } 


    // pagination->page
    if(pagination->page) { 
    if(cJSON_AddNumberToObject(item, "page", pagination->page) == NULL) {
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

pagination_t *pagination_parseFromJSON(cJSON *paginationJSON){

    pagination_t *pagination_local_var = NULL;

    // pagination->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(paginationJSON, "size");
    if (size) { 
    if(!cJSON_IsNumber(size))
    {
    goto end; //Numeric
    }
    }

    // pagination->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(paginationJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // pagination->page
    cJSON *page = cJSON_GetObjectItemCaseSensitive(paginationJSON, "page");
    if (page) { 
    if(!cJSON_IsNumber(page))
    {
    goto end; //Numeric
    }
    }


    pagination_local_var = pagination_create (
        size ? size->valuedouble : 0,
        total ? total->valuedouble : 0,
        page ? page->valuedouble : 0
        );

    return pagination_local_var;
end:
    return NULL;

}
