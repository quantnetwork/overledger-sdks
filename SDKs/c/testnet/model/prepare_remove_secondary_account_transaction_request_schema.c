#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prepare_remove_secondary_account_transaction_request_schema.h"



prepare_remove_secondary_account_transaction_request_schema_t *prepare_remove_secondary_account_transaction_request_schema_create(
    remove_secondary_account_details_schema_t *remove_secondary_account_details_schema
    ) {
    prepare_remove_secondary_account_transaction_request_schema_t *prepare_remove_secondary_account_transaction_request_schema_local_var = malloc(sizeof(prepare_remove_secondary_account_transaction_request_schema_t));
    if (!prepare_remove_secondary_account_transaction_request_schema_local_var) {
        return NULL;
    }
    prepare_remove_secondary_account_transaction_request_schema_local_var->remove_secondary_account_details_schema = remove_secondary_account_details_schema;

    return prepare_remove_secondary_account_transaction_request_schema_local_var;
}


void prepare_remove_secondary_account_transaction_request_schema_free(prepare_remove_secondary_account_transaction_request_schema_t *prepare_remove_secondary_account_transaction_request_schema) {
    if(NULL == prepare_remove_secondary_account_transaction_request_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (prepare_remove_secondary_account_transaction_request_schema->remove_secondary_account_details_schema) {
        remove_secondary_account_details_schema_free(prepare_remove_secondary_account_transaction_request_schema->remove_secondary_account_details_schema);
        prepare_remove_secondary_account_transaction_request_schema->remove_secondary_account_details_schema = NULL;
    }
    free(prepare_remove_secondary_account_transaction_request_schema);
}

cJSON *prepare_remove_secondary_account_transaction_request_schema_convertToJSON(prepare_remove_secondary_account_transaction_request_schema_t *prepare_remove_secondary_account_transaction_request_schema) {
    cJSON *item = cJSON_CreateObject();

    // prepare_remove_secondary_account_transaction_request_schema->remove_secondary_account_details_schema
    if(prepare_remove_secondary_account_transaction_request_schema->remove_secondary_account_details_schema) { 
    cJSON *remove_secondary_account_details_schema_local_JSON = remove_secondary_account_details_schema_convertToJSON(prepare_remove_secondary_account_transaction_request_schema->remove_secondary_account_details_schema);
    if(remove_secondary_account_details_schema_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "removeSecondaryAccountDetailsSchema", remove_secondary_account_details_schema_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

prepare_remove_secondary_account_transaction_request_schema_t *prepare_remove_secondary_account_transaction_request_schema_parseFromJSON(cJSON *prepare_remove_secondary_account_transaction_request_schemaJSON){

    prepare_remove_secondary_account_transaction_request_schema_t *prepare_remove_secondary_account_transaction_request_schema_local_var = NULL;

    // prepare_remove_secondary_account_transaction_request_schema->remove_secondary_account_details_schema
    cJSON *remove_secondary_account_details_schema = cJSON_GetObjectItemCaseSensitive(prepare_remove_secondary_account_transaction_request_schemaJSON, "removeSecondaryAccountDetailsSchema");
    remove_secondary_account_details_schema_t *remove_secondary_account_details_schema_local_nonprim = NULL;
    if (remove_secondary_account_details_schema) { 
    remove_secondary_account_details_schema_local_nonprim = remove_secondary_account_details_schema_parseFromJSON(remove_secondary_account_details_schema); //nonprimitive
    }


    prepare_remove_secondary_account_transaction_request_schema_local_var = prepare_remove_secondary_account_transaction_request_schema_create (
        remove_secondary_account_details_schema ? remove_secondary_account_details_schema_local_nonprim : NULL
        );

    return prepare_remove_secondary_account_transaction_request_schema_local_var;
end:
    if (remove_secondary_account_details_schema_local_nonprim) {
        remove_secondary_account_details_schema_free(remove_secondary_account_details_schema_local_nonprim);
        remove_secondary_account_details_schema_local_nonprim = NULL;
    }
    return NULL;

}
