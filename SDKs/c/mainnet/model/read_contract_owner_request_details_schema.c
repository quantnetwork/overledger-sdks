#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "read_contract_owner_request_details_schema.h"



read_contract_owner_request_details_schema_t *read_contract_owner_request_details_schema_create(
    char *token_name
    ) {
    read_contract_owner_request_details_schema_t *read_contract_owner_request_details_schema_local_var = malloc(sizeof(read_contract_owner_request_details_schema_t));
    if (!read_contract_owner_request_details_schema_local_var) {
        return NULL;
    }
    read_contract_owner_request_details_schema_local_var->token_name = token_name;

    return read_contract_owner_request_details_schema_local_var;
}


void read_contract_owner_request_details_schema_free(read_contract_owner_request_details_schema_t *read_contract_owner_request_details_schema) {
    if(NULL == read_contract_owner_request_details_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (read_contract_owner_request_details_schema->token_name) {
        free(read_contract_owner_request_details_schema->token_name);
        read_contract_owner_request_details_schema->token_name = NULL;
    }
    free(read_contract_owner_request_details_schema);
}

cJSON *read_contract_owner_request_details_schema_convertToJSON(read_contract_owner_request_details_schema_t *read_contract_owner_request_details_schema) {
    cJSON *item = cJSON_CreateObject();

    // read_contract_owner_request_details_schema->token_name
    if(read_contract_owner_request_details_schema->token_name) { 
    if(cJSON_AddStringToObject(item, "tokenName", read_contract_owner_request_details_schema->token_name) == NULL) {
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

read_contract_owner_request_details_schema_t *read_contract_owner_request_details_schema_parseFromJSON(cJSON *read_contract_owner_request_details_schemaJSON){

    read_contract_owner_request_details_schema_t *read_contract_owner_request_details_schema_local_var = NULL;

    // read_contract_owner_request_details_schema->token_name
    cJSON *token_name = cJSON_GetObjectItemCaseSensitive(read_contract_owner_request_details_schemaJSON, "tokenName");
    if (token_name) { 
    if(!cJSON_IsString(token_name))
    {
    goto end; //String
    }
    }


    read_contract_owner_request_details_schema_local_var = read_contract_owner_request_details_schema_create (
        token_name ? strdup(token_name->valuestring) : NULL
        );

    return read_contract_owner_request_details_schema_local_var;
end:
    return NULL;

}
