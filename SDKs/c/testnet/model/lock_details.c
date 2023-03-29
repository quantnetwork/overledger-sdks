#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lock_details.h"



lock_details_t *lock_details_create(
    char *expiry_date,
    char *lock_id,
    char *account_id,
    char *amount,
    char *unit,
    char *account_owning_institution_id,
    char *lock_description,
    char *payee_id,
    char *secret,
    char *hash,
    char *payee_owning_institution_id,
    char *lock_owning_institution_id
    ) {
    lock_details_t *lock_details_local_var = malloc(sizeof(lock_details_t));
    if (!lock_details_local_var) {
        return NULL;
    }
    lock_details_local_var->expiry_date = expiry_date;
    lock_details_local_var->lock_id = lock_id;
    lock_details_local_var->account_id = account_id;
    lock_details_local_var->amount = amount;
    lock_details_local_var->unit = unit;
    lock_details_local_var->account_owning_institution_id = account_owning_institution_id;
    lock_details_local_var->lock_description = lock_description;
    lock_details_local_var->payee_id = payee_id;
    lock_details_local_var->secret = secret;
    lock_details_local_var->hash = hash;
    lock_details_local_var->payee_owning_institution_id = payee_owning_institution_id;
    lock_details_local_var->lock_owning_institution_id = lock_owning_institution_id;

    return lock_details_local_var;
}


void lock_details_free(lock_details_t *lock_details) {
    if(NULL == lock_details){
        return ;
    }
    listEntry_t *listEntry;
    if (lock_details->expiry_date) {
        free(lock_details->expiry_date);
        lock_details->expiry_date = NULL;
    }
    if (lock_details->lock_id) {
        free(lock_details->lock_id);
        lock_details->lock_id = NULL;
    }
    if (lock_details->account_id) {
        free(lock_details->account_id);
        lock_details->account_id = NULL;
    }
    if (lock_details->amount) {
        free(lock_details->amount);
        lock_details->amount = NULL;
    }
    if (lock_details->unit) {
        free(lock_details->unit);
        lock_details->unit = NULL;
    }
    if (lock_details->account_owning_institution_id) {
        free(lock_details->account_owning_institution_id);
        lock_details->account_owning_institution_id = NULL;
    }
    if (lock_details->lock_description) {
        free(lock_details->lock_description);
        lock_details->lock_description = NULL;
    }
    if (lock_details->payee_id) {
        free(lock_details->payee_id);
        lock_details->payee_id = NULL;
    }
    if (lock_details->secret) {
        free(lock_details->secret);
        lock_details->secret = NULL;
    }
    if (lock_details->hash) {
        free(lock_details->hash);
        lock_details->hash = NULL;
    }
    if (lock_details->payee_owning_institution_id) {
        free(lock_details->payee_owning_institution_id);
        lock_details->payee_owning_institution_id = NULL;
    }
    if (lock_details->lock_owning_institution_id) {
        free(lock_details->lock_owning_institution_id);
        lock_details->lock_owning_institution_id = NULL;
    }
    free(lock_details);
}

cJSON *lock_details_convertToJSON(lock_details_t *lock_details) {
    cJSON *item = cJSON_CreateObject();

    // lock_details->expiry_date
    if(lock_details->expiry_date) { 
    if(cJSON_AddStringToObject(item, "expiryDate", lock_details->expiry_date) == NULL) {
    goto fail; //String
    }
     } 


    // lock_details->lock_id
    if(lock_details->lock_id) { 
    if(cJSON_AddStringToObject(item, "lockId", lock_details->lock_id) == NULL) {
    goto fail; //String
    }
     } 


    // lock_details->account_id
    if(lock_details->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", lock_details->account_id) == NULL) {
    goto fail; //String
    }
     } 


    // lock_details->amount
    if(lock_details->amount) { 
    if(cJSON_AddStringToObject(item, "amount", lock_details->amount) == NULL) {
    goto fail; //String
    }
     } 


    // lock_details->unit
    if(lock_details->unit) { 
    if(cJSON_AddStringToObject(item, "unit", lock_details->unit) == NULL) {
    goto fail; //String
    }
     } 


    // lock_details->account_owning_institution_id
    if(lock_details->account_owning_institution_id) { 
    if(cJSON_AddStringToObject(item, "accountOwningInstitutionId", lock_details->account_owning_institution_id) == NULL) {
    goto fail; //String
    }
     } 


    // lock_details->lock_description
    if(lock_details->lock_description) { 
    if(cJSON_AddStringToObject(item, "lockDescription", lock_details->lock_description) == NULL) {
    goto fail; //String
    }
     } 


    // lock_details->payee_id
    if(lock_details->payee_id) { 
    if(cJSON_AddStringToObject(item, "payeeId", lock_details->payee_id) == NULL) {
    goto fail; //String
    }
     } 


    // lock_details->secret
    if(lock_details->secret) { 
    if(cJSON_AddStringToObject(item, "secret", lock_details->secret) == NULL) {
    goto fail; //String
    }
     } 


    // lock_details->hash
    if(lock_details->hash) { 
    if(cJSON_AddStringToObject(item, "hash", lock_details->hash) == NULL) {
    goto fail; //String
    }
     } 


    // lock_details->payee_owning_institution_id
    if(lock_details->payee_owning_institution_id) { 
    if(cJSON_AddStringToObject(item, "payeeOwningInstitutionId", lock_details->payee_owning_institution_id) == NULL) {
    goto fail; //String
    }
     } 


    // lock_details->lock_owning_institution_id
    if(lock_details->lock_owning_institution_id) { 
    if(cJSON_AddStringToObject(item, "lockOwningInstitutionId", lock_details->lock_owning_institution_id) == NULL) {
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

lock_details_t *lock_details_parseFromJSON(cJSON *lock_detailsJSON){

    lock_details_t *lock_details_local_var = NULL;

    // lock_details->expiry_date
    cJSON *expiry_date = cJSON_GetObjectItemCaseSensitive(lock_detailsJSON, "expiryDate");
    if (expiry_date) { 
    if(!cJSON_IsString(expiry_date))
    {
    goto end; //String
    }
    }

    // lock_details->lock_id
    cJSON *lock_id = cJSON_GetObjectItemCaseSensitive(lock_detailsJSON, "lockId");
    if (lock_id) { 
    if(!cJSON_IsString(lock_id))
    {
    goto end; //String
    }
    }

    // lock_details->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(lock_detailsJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }

    // lock_details->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(lock_detailsJSON, "amount");
    if (amount) { 
    if(!cJSON_IsString(amount))
    {
    goto end; //String
    }
    }

    // lock_details->unit
    cJSON *unit = cJSON_GetObjectItemCaseSensitive(lock_detailsJSON, "unit");
    if (unit) { 
    if(!cJSON_IsString(unit))
    {
    goto end; //String
    }
    }

    // lock_details->account_owning_institution_id
    cJSON *account_owning_institution_id = cJSON_GetObjectItemCaseSensitive(lock_detailsJSON, "accountOwningInstitutionId");
    if (account_owning_institution_id) { 
    if(!cJSON_IsString(account_owning_institution_id))
    {
    goto end; //String
    }
    }

    // lock_details->lock_description
    cJSON *lock_description = cJSON_GetObjectItemCaseSensitive(lock_detailsJSON, "lockDescription");
    if (lock_description) { 
    if(!cJSON_IsString(lock_description))
    {
    goto end; //String
    }
    }

    // lock_details->payee_id
    cJSON *payee_id = cJSON_GetObjectItemCaseSensitive(lock_detailsJSON, "payeeId");
    if (payee_id) { 
    if(!cJSON_IsString(payee_id))
    {
    goto end; //String
    }
    }

    // lock_details->secret
    cJSON *secret = cJSON_GetObjectItemCaseSensitive(lock_detailsJSON, "secret");
    if (secret) { 
    if(!cJSON_IsString(secret))
    {
    goto end; //String
    }
    }

    // lock_details->hash
    cJSON *hash = cJSON_GetObjectItemCaseSensitive(lock_detailsJSON, "hash");
    if (hash) { 
    if(!cJSON_IsString(hash))
    {
    goto end; //String
    }
    }

    // lock_details->payee_owning_institution_id
    cJSON *payee_owning_institution_id = cJSON_GetObjectItemCaseSensitive(lock_detailsJSON, "payeeOwningInstitutionId");
    if (payee_owning_institution_id) { 
    if(!cJSON_IsString(payee_owning_institution_id))
    {
    goto end; //String
    }
    }

    // lock_details->lock_owning_institution_id
    cJSON *lock_owning_institution_id = cJSON_GetObjectItemCaseSensitive(lock_detailsJSON, "lockOwningInstitutionId");
    if (lock_owning_institution_id) { 
    if(!cJSON_IsString(lock_owning_institution_id))
    {
    goto end; //String
    }
    }


    lock_details_local_var = lock_details_create (
        expiry_date ? strdup(expiry_date->valuestring) : NULL,
        lock_id ? strdup(lock_id->valuestring) : NULL,
        account_id ? strdup(account_id->valuestring) : NULL,
        amount ? strdup(amount->valuestring) : NULL,
        unit ? strdup(unit->valuestring) : NULL,
        account_owning_institution_id ? strdup(account_owning_institution_id->valuestring) : NULL,
        lock_description ? strdup(lock_description->valuestring) : NULL,
        payee_id ? strdup(payee_id->valuestring) : NULL,
        secret ? strdup(secret->valuestring) : NULL,
        hash ? strdup(hash->valuestring) : NULL,
        payee_owning_institution_id ? strdup(payee_owning_institution_id->valuestring) : NULL,
        lock_owning_institution_id ? strdup(lock_owning_institution_id->valuestring) : NULL
        );

    return lock_details_local_var;
end:
    return NULL;

}
