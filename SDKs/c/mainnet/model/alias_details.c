#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "alias_details.h"



alias_details_t *alias_details_create(
    char *account_id,
    char *unit,
    int disposable_alias,
    char *alias_hash,
    char *alias_type,
    char *esip_id
    ) {
    alias_details_t *alias_details_local_var = malloc(sizeof(alias_details_t));
    if (!alias_details_local_var) {
        return NULL;
    }
    alias_details_local_var->account_id = account_id;
    alias_details_local_var->unit = unit;
    alias_details_local_var->disposable_alias = disposable_alias;
    alias_details_local_var->alias_hash = alias_hash;
    alias_details_local_var->alias_type = alias_type;
    alias_details_local_var->esip_id = esip_id;

    return alias_details_local_var;
}


void alias_details_free(alias_details_t *alias_details) {
    if(NULL == alias_details){
        return ;
    }
    listEntry_t *listEntry;
    if (alias_details->account_id) {
        free(alias_details->account_id);
        alias_details->account_id = NULL;
    }
    if (alias_details->unit) {
        free(alias_details->unit);
        alias_details->unit = NULL;
    }
    if (alias_details->alias_hash) {
        free(alias_details->alias_hash);
        alias_details->alias_hash = NULL;
    }
    if (alias_details->alias_type) {
        free(alias_details->alias_type);
        alias_details->alias_type = NULL;
    }
    if (alias_details->esip_id) {
        free(alias_details->esip_id);
        alias_details->esip_id = NULL;
    }
    free(alias_details);
}

cJSON *alias_details_convertToJSON(alias_details_t *alias_details) {
    cJSON *item = cJSON_CreateObject();

    // alias_details->account_id
    if(alias_details->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", alias_details->account_id) == NULL) {
    goto fail; //String
    }
     } 


    // alias_details->unit
    if(alias_details->unit) { 
    if(cJSON_AddStringToObject(item, "unit", alias_details->unit) == NULL) {
    goto fail; //String
    }
     } 


    // alias_details->disposable_alias
    if(alias_details->disposable_alias) { 
    if(cJSON_AddBoolToObject(item, "disposableAlias", alias_details->disposable_alias) == NULL) {
    goto fail; //Bool
    }
     } 


    // alias_details->alias_hash
    if(alias_details->alias_hash) { 
    if(cJSON_AddStringToObject(item, "aliasHash", alias_details->alias_hash) == NULL) {
    goto fail; //String
    }
     } 


    // alias_details->alias_type
    if(alias_details->alias_type) { 
    if(cJSON_AddStringToObject(item, "aliasType", alias_details->alias_type) == NULL) {
    goto fail; //String
    }
     } 


    // alias_details->esip_id
    if(alias_details->esip_id) { 
    if(cJSON_AddStringToObject(item, "esipId", alias_details->esip_id) == NULL) {
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

alias_details_t *alias_details_parseFromJSON(cJSON *alias_detailsJSON){

    alias_details_t *alias_details_local_var = NULL;

    // alias_details->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(alias_detailsJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }

    // alias_details->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(alias_detailsJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit))
    {
    goto end; //String
    }
    }

    // alias_details->disposable_alias
    cJSON *disposable_alias = cJSON_GetObjectItemCaseSensitive(alias_detailsJSON, "disposableAlias");
    if (disposable_alias) { 
    if(!cJSON_IsBool(disposable_alias))
    {
    goto end; //Bool
    }
    }

    // alias_details->alias_hash
    cJSON *alias_hash = cJSON_GetObjectItemCaseSensitive(alias_detailsJSON, "aliasHash");
    if (alias_hash) { 
    if(!cJSON_IsString(alias_hash))
    {
    goto end; //String
    }
    }

    // alias_details->alias_type
    cJSON *alias_type = cJSON_GetObjectItemCaseSensitive(alias_detailsJSON, "aliasType");
    if (alias_type) { 
    if(!cJSON_IsString(alias_type))
    {
    goto end; //String
    }
    }

    // alias_details->esip_id
    cJSON *esip_id = cJSON_GetObjectItemCaseSensitive(alias_detailsJSON, "esipId");
    if (esip_id) { 
    if(!cJSON_IsString(esip_id))
    {
    goto end; //String
    }
    }


    alias_details_local_var = alias_details_create (
        account_id ? strdup(account_id->valuestring) : NULL,
        unit ? strdup(unit->valuestring) : NULL,
        disposable_alias ? disposable_alias->valueint : 0,
        alias_hash ? strdup(alias_hash->valuestring) : NULL,
        alias_type ? strdup(alias_type->valuestring) : NULL,
        esip_id ? strdup(esip_id->valuestring) : NULL
        );

    return alias_details_local_var;
end:
    return NULL;

}
