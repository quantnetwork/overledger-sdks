#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vout.h"



vout_t *vout_create(
    script_pub_key_t *script_pub_key,
    double value,
    double n
    ) {
    vout_t *vout_local_var = malloc(sizeof(vout_t));
    if (!vout_local_var) {
        return NULL;
    }
    vout_local_var->script_pub_key = script_pub_key;
    vout_local_var->value = value;
    vout_local_var->n = n;

    return vout_local_var;
}


void vout_free(vout_t *vout) {
    if(NULL == vout){
        return ;
    }
    listEntry_t *listEntry;
    if (vout->script_pub_key) {
        script_pub_key_free(vout->script_pub_key);
        vout->script_pub_key = NULL;
    }
    free(vout);
}

cJSON *vout_convertToJSON(vout_t *vout) {
    cJSON *item = cJSON_CreateObject();

    // vout->script_pub_key
    if(vout->script_pub_key) { 
    cJSON *script_pub_key_local_JSON = script_pub_key_convertToJSON(vout->script_pub_key);
    if(script_pub_key_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "scriptPubKey", script_pub_key_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // vout->value
    if(vout->value) { 
    if(cJSON_AddNumberToObject(item, "value", vout->value) == NULL) {
    goto fail; //Numeric
    }
     } 


    // vout->n
    if(vout->n) { 
    if(cJSON_AddNumberToObject(item, "n", vout->n) == NULL) {
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

vout_t *vout_parseFromJSON(cJSON *voutJSON){

    vout_t *vout_local_var = NULL;

    // vout->script_pub_key
    cJSON *script_pub_key = cJSON_GetObjectItemCaseSensitive(voutJSON, "scriptPubKey");
    script_pub_key_t *script_pub_key_local_nonprim = NULL;
    if (script_pub_key) { 
    script_pub_key_local_nonprim = script_pub_key_parseFromJSON(script_pub_key); //nonprimitive
    }

    // vout->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(voutJSON, "value");
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // vout->n
    cJSON *n = cJSON_GetObjectItemCaseSensitive(voutJSON, "n");
    if (n) { 
    if(!cJSON_IsNumber(n))
    {
    goto end; //Numeric
    }
    }


    vout_local_var = vout_create (
        script_pub_key ? script_pub_key_local_nonprim : NULL,
        value ? value->valuedouble : 0,
        n ? n->valuedouble : 0
        );

    return vout_local_var;
end:
    if (script_pub_key_local_nonprim) {
        script_pub_key_free(script_pub_key_local_nonprim);
        script_pub_key_local_nonprim = NULL;
    }
    return NULL;

}
