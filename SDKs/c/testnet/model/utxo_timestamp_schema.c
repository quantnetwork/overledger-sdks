#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "utxo_timestamp_schema.h"



utxo_timestamp_schema_t *utxo_timestamp_schema_create(
    char *nano,
    char *epoch_second
    ) {
    utxo_timestamp_schema_t *utxo_timestamp_schema_local_var = malloc(sizeof(utxo_timestamp_schema_t));
    if (!utxo_timestamp_schema_local_var) {
        return NULL;
    }
    utxo_timestamp_schema_local_var->nano = nano;
    utxo_timestamp_schema_local_var->epoch_second = epoch_second;

    return utxo_timestamp_schema_local_var;
}


void utxo_timestamp_schema_free(utxo_timestamp_schema_t *utxo_timestamp_schema) {
    if(NULL == utxo_timestamp_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (utxo_timestamp_schema->nano) {
        free(utxo_timestamp_schema->nano);
        utxo_timestamp_schema->nano = NULL;
    }
    if (utxo_timestamp_schema->epoch_second) {
        free(utxo_timestamp_schema->epoch_second);
        utxo_timestamp_schema->epoch_second = NULL;
    }
    free(utxo_timestamp_schema);
}

cJSON *utxo_timestamp_schema_convertToJSON(utxo_timestamp_schema_t *utxo_timestamp_schema) {
    cJSON *item = cJSON_CreateObject();

    // utxo_timestamp_schema->nano
    if(utxo_timestamp_schema->nano) { 
    if(cJSON_AddStringToObject(item, "nano", utxo_timestamp_schema->nano) == NULL) {
    goto fail; //String
    }
     } 


    // utxo_timestamp_schema->epoch_second
    if(utxo_timestamp_schema->epoch_second) { 
    if(cJSON_AddStringToObject(item, "epochSecond", utxo_timestamp_schema->epoch_second) == NULL) {
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

utxo_timestamp_schema_t *utxo_timestamp_schema_parseFromJSON(cJSON *utxo_timestamp_schemaJSON){

    utxo_timestamp_schema_t *utxo_timestamp_schema_local_var = NULL;

    // utxo_timestamp_schema->nano
    cJSON *nano = cJSON_GetObjectItemCaseSensitive(utxo_timestamp_schemaJSON, "nano");
    if (nano) { 
    if(!cJSON_IsString(nano))
    {
    goto end; //String
    }
    }

    // utxo_timestamp_schema->epoch_second
    cJSON *epoch_second = cJSON_GetObjectItemCaseSensitive(utxo_timestamp_schemaJSON, "epochSecond");
    if (epoch_second) { 
    if(!cJSON_IsString(epoch_second))
    {
    goto end; //String
    }
    }


    utxo_timestamp_schema_local_var = utxo_timestamp_schema_create (
        nano ? strdup(nano->valuestring) : NULL,
        epoch_second ? strdup(epoch_second->valuestring) : NULL
        );

    return utxo_timestamp_schema_local_var;
end:
    return NULL;

}
