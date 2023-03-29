#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_details.h"



account_details_t *account_details_create(
    char *parent_account_id,
    char *account_id,
    char *unit,
    char *owning_institution_id,
    char *account_type
    ) {
    account_details_t *account_details_local_var = malloc(sizeof(account_details_t));
    if (!account_details_local_var) {
        return NULL;
    }
    account_details_local_var->parent_account_id = parent_account_id;
    account_details_local_var->account_id = account_id;
    account_details_local_var->unit = unit;
    account_details_local_var->owning_institution_id = owning_institution_id;
    account_details_local_var->account_type = account_type;

    return account_details_local_var;
}


void account_details_free(account_details_t *account_details) {
    if(NULL == account_details){
        return ;
    }
    listEntry_t *listEntry;
    if (account_details->parent_account_id) {
        free(account_details->parent_account_id);
        account_details->parent_account_id = NULL;
    }
    if (account_details->account_id) {
        free(account_details->account_id);
        account_details->account_id = NULL;
    }
    if (account_details->unit) {
        free(account_details->unit);
        account_details->unit = NULL;
    }
    if (account_details->owning_institution_id) {
        free(account_details->owning_institution_id);
        account_details->owning_institution_id = NULL;
    }
    if (account_details->account_type) {
        free(account_details->account_type);
        account_details->account_type = NULL;
    }
    free(account_details);
}

cJSON *account_details_convertToJSON(account_details_t *account_details) {
    cJSON *item = cJSON_CreateObject();

    // account_details->parent_account_id
    if(account_details->parent_account_id) { 
    if(cJSON_AddStringToObject(item, "parentAccountId", account_details->parent_account_id) == NULL) {
    goto fail; //String
    }
     } 


    // account_details->account_id
    if(account_details->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", account_details->account_id) == NULL) {
    goto fail; //String
    }
     } 


    // account_details->unit
    if(account_details->unit) { 
    if(cJSON_AddStringToObject(item, "unit", account_details->unit) == NULL) {
    goto fail; //String
    }
     } 


    // account_details->owning_institution_id
    if(account_details->owning_institution_id) { 
    if(cJSON_AddStringToObject(item, "owningInstitutionId", account_details->owning_institution_id) == NULL) {
    goto fail; //String
    }
     } 


    // account_details->account_type
    if(account_details->account_type) { 
    if(cJSON_AddStringToObject(item, "accountType", account_details->account_type) == NULL) {
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

account_details_t *account_details_parseFromJSON(cJSON *account_detailsJSON){

    account_details_t *account_details_local_var = NULL;

    // account_details->parent_account_id
    cJSON *parent_account_id = cJSON_GetObjectItemCaseSensitive(account_detailsJSON, "parentAccountId");
    if (parent_account_id) { 
    if(!cJSON_IsString(parent_account_id))
    {
    goto end; //String
    }
    }

    // account_details->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(account_detailsJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }

    // account_details->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(account_detailsJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit))
    {
    goto end; //String
    }
    }

    // account_details->owning_institution_id
    cJSON *owning_institution_id = cJSON_GetObjectItemCaseSensitive(account_detailsJSON, "owningInstitutionId");
    if (owning_institution_id) { 
    if(!cJSON_IsString(owning_institution_id))
    {
    goto end; //String
    }
    }

    // account_details->account_type
    cJSON *account_type = cJSON_GetObjectItemCaseSensitive(account_detailsJSON, "accountType");
    if (account_type) { 
    if(!cJSON_IsString(account_type))
    {
    goto end; //String
    }
    }


    account_details_local_var = account_details_create (
        parent_account_id ? strdup(parent_account_id->valuestring) : NULL,
        account_id ? strdup(account_id->valuestring) : NULL,
        unit ? strdup(unit->valuestring) : NULL,
        owning_institution_id ? strdup(owning_institution_id->valuestring) : NULL,
        account_type ? strdup(account_type->valuestring) : NULL
        );

    return account_details_local_var;
end:
    return NULL;

}
