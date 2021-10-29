#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status_update_monitoring_request_schema.h"



status_update_monitoring_request_schema_t *status_update_monitoring_request_schema_create(
    status_update_schema_t *status_update
    ) {
    status_update_monitoring_request_schema_t *status_update_monitoring_request_schema_local_var = malloc(sizeof(status_update_monitoring_request_schema_t));
    if (!status_update_monitoring_request_schema_local_var) {
        return NULL;
    }
    status_update_monitoring_request_schema_local_var->status_update = status_update;

    return status_update_monitoring_request_schema_local_var;
}


void status_update_monitoring_request_schema_free(status_update_monitoring_request_schema_t *status_update_monitoring_request_schema) {
    if(NULL == status_update_monitoring_request_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (status_update_monitoring_request_schema->status_update) {
        status_update_schema_free(status_update_monitoring_request_schema->status_update);
        status_update_monitoring_request_schema->status_update = NULL;
    }
    free(status_update_monitoring_request_schema);
}

cJSON *status_update_monitoring_request_schema_convertToJSON(status_update_monitoring_request_schema_t *status_update_monitoring_request_schema) {
    cJSON *item = cJSON_CreateObject();

    // status_update_monitoring_request_schema->status_update
    if(status_update_monitoring_request_schema->status_update) { 
    cJSON *status_update_local_JSON = status_update_schema_convertToJSON(status_update_monitoring_request_schema->status_update);
    if(status_update_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "statusUpdate", status_update_local_JSON);
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

status_update_monitoring_request_schema_t *status_update_monitoring_request_schema_parseFromJSON(cJSON *status_update_monitoring_request_schemaJSON){

    status_update_monitoring_request_schema_t *status_update_monitoring_request_schema_local_var = NULL;

    // status_update_monitoring_request_schema->status_update
    cJSON *status_update = cJSON_GetObjectItemCaseSensitive(status_update_monitoring_request_schemaJSON, "statusUpdate");
    status_update_schema_t *status_update_local_nonprim = NULL;
    if (status_update) { 
    status_update_local_nonprim = status_update_schema_parseFromJSON(status_update); //nonprimitive
    }


    status_update_monitoring_request_schema_local_var = status_update_monitoring_request_schema_create (
        status_update ? status_update_local_nonprim : NULL
        );

    return status_update_monitoring_request_schema_local_var;
end:
    if (status_update_local_nonprim) {
        status_update_schema_free(status_update_local_nonprim);
        status_update_local_nonprim = NULL;
    }
    return NULL;

}
