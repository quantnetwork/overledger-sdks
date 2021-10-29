#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "utxo_native_data.h"



utxo_native_data_t *utxo_native_data_create(
    list_t *vout
    ) {
    utxo_native_data_t *utxo_native_data_local_var = malloc(sizeof(utxo_native_data_t));
    if (!utxo_native_data_local_var) {
        return NULL;
    }
    utxo_native_data_local_var->vout = vout;

    return utxo_native_data_local_var;
}


void utxo_native_data_free(utxo_native_data_t *utxo_native_data) {
    if(NULL == utxo_native_data){
        return ;
    }
    listEntry_t *listEntry;
    if (utxo_native_data->vout) {
        list_ForEach(listEntry, utxo_native_data->vout) {
            vout_free(listEntry->data);
        }
        list_free(utxo_native_data->vout);
        utxo_native_data->vout = NULL;
    }
    free(utxo_native_data);
}

cJSON *utxo_native_data_convertToJSON(utxo_native_data_t *utxo_native_data) {
    cJSON *item = cJSON_CreateObject();

    // utxo_native_data->vout
    if(utxo_native_data->vout) { 
    cJSON *vout = cJSON_AddArrayToObject(item, "vout");
    if(vout == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *voutListEntry;
    if (utxo_native_data->vout) {
    list_ForEach(voutListEntry, utxo_native_data->vout) {
    cJSON *itemLocal = vout_convertToJSON(voutListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(vout, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

utxo_native_data_t *utxo_native_data_parseFromJSON(cJSON *utxo_native_dataJSON){

    utxo_native_data_t *utxo_native_data_local_var = NULL;

    // utxo_native_data->vout
    cJSON *vout = cJSON_GetObjectItemCaseSensitive(utxo_native_dataJSON, "vout");
    list_t *voutList;
    if (vout) { 
    cJSON *vout_local_nonprimitive;
    if(!cJSON_IsArray(vout)){
        goto end; //nonprimitive container
    }

    voutList = list_create();

    cJSON_ArrayForEach(vout_local_nonprimitive,vout )
    {
        if(!cJSON_IsObject(vout_local_nonprimitive)){
            goto end;
        }
        vout_t *voutItem = vout_parseFromJSON(vout_local_nonprimitive);

        list_addElement(voutList, voutItem);
    }
    }


    utxo_native_data_local_var = utxo_native_data_create (
        vout ? voutList : NULL
        );

    return utxo_native_data_local_var;
end:
    return NULL;

}
