#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "read_balance_request_details_schema.h"



read_balance_request_details_schema_t *read_balance_request_details_schema_create(
    char *token_name,
    char *account_id
    ) {
    read_balance_request_details_schema_t *read_balance_request_details_schema_local_var = malloc(sizeof(read_balance_request_details_schema_t));
    if (!read_balance_request_details_schema_local_var) {
        return NULL;
    }
    read_balance_request_details_schema_local_var->token_name = token_name;
    read_balance_request_details_schema_local_var->account_id = account_id;

    return read_balance_request_details_schema_local_var;
}


void read_balance_request_details_schema_free(read_balance_request_details_schema_t *read_balance_request_details_schema) {
    if(NULL == read_balance_request_details_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (read_balance_request_details_schema->token_name) {
        free(read_balance_request_details_schema->token_name);
        read_balance_request_details_schema->token_name = NULL;
    }
    if (read_balance_request_details_schema->account_id) {
        free(read_balance_request_details_schema->account_id);
        read_balance_request_details_schema->account_id = NULL;
    }
    free(read_balance_request_details_schema);
}

cJSON *read_balance_request_details_schema_convertToJSON(read_balance_request_details_schema_t *read_balance_request_details_schema) {
    cJSON *item = cJSON_CreateObject();

    // read_balance_request_details_schema->token_name
    if(read_balance_request_details_schema->token_name) { 
    if(cJSON_AddStringToObject(item, "tokenName", read_balance_request_details_schema->token_name) == NULL) {
    goto fail; //String
    }
     } 


    // read_balance_request_details_schema->account_id
    if(read_balance_request_details_schema->account_id) { 
    if(cJSON_AddStringToObject(item, "accountId", read_balance_request_details_schema->account_id) == NULL) {
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

read_balance_request_details_schema_t *read_balance_request_details_schema_parseFromJSON(cJSON *read_balance_request_details_schemaJSON){

    read_balance_request_details_schema_t *read_balance_request_details_schema_local_var = NULL;

    // read_balance_request_details_schema->token_name
    cJSON *token_name = cJSON_GetObjectItemCaseSensitive(read_balance_request_details_schemaJSON, "tokenName");
    if (token_name) { 
    if(!cJSON_IsString(token_name))
    {
    goto end; //String
    }
    }

    // read_balance_request_details_schema->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(read_balance_request_details_schemaJSON, "accountId");
    if (account_id) { 
    if(!cJSON_IsString(account_id))
    {
    goto end; //String
    }
    }


    read_balance_request_details_schema_local_var = read_balance_request_details_schema_create (
        token_name ? strdup(token_name->valuestring) : NULL,
        account_id ? strdup(account_id->valuestring) : NULL
        );

    return read_balance_request_details_schema_local_var;
end:
    return NULL;

}
