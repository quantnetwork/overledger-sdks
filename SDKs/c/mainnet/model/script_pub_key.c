#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "script_pub_key.h"



script_pub_key_t *script_pub_key_create(
    list_t *addresses,
    char *_asm,
    char *hex,
    char *type,
    char *req_sigs
    ) {
    script_pub_key_t *script_pub_key_local_var = malloc(sizeof(script_pub_key_t));
    if (!script_pub_key_local_var) {
        return NULL;
    }
    script_pub_key_local_var->addresses = addresses;
    script_pub_key_local_var->_asm = _asm;
    script_pub_key_local_var->hex = hex;
    script_pub_key_local_var->type = type;
    script_pub_key_local_var->req_sigs = req_sigs;

    return script_pub_key_local_var;
}


void script_pub_key_free(script_pub_key_t *script_pub_key) {
    if(NULL == script_pub_key){
        return ;
    }
    listEntry_t *listEntry;
    if (script_pub_key->addresses) {
        list_ForEach(listEntry, script_pub_key->addresses) {
            free(listEntry->data);
        }
        list_free(script_pub_key->addresses);
        script_pub_key->addresses = NULL;
    }
    if (script_pub_key->_asm) {
        free(script_pub_key->_asm);
        script_pub_key->_asm = NULL;
    }
    if (script_pub_key->hex) {
        free(script_pub_key->hex);
        script_pub_key->hex = NULL;
    }
    if (script_pub_key->type) {
        free(script_pub_key->type);
        script_pub_key->type = NULL;
    }
    if (script_pub_key->req_sigs) {
        free(script_pub_key->req_sigs);
        script_pub_key->req_sigs = NULL;
    }
    free(script_pub_key);
}

cJSON *script_pub_key_convertToJSON(script_pub_key_t *script_pub_key) {
    cJSON *item = cJSON_CreateObject();

    // script_pub_key->addresses
    if(script_pub_key->addresses) { 
    cJSON *addresses = cJSON_AddArrayToObject(item, "addresses");
    if(addresses == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *addressesListEntry;
    list_ForEach(addressesListEntry, script_pub_key->addresses) {
    if(cJSON_AddStringToObject(addresses, "", (char*)addressesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // script_pub_key->_asm
    if(script_pub_key->_asm) { 
    if(cJSON_AddStringToObject(item, "asm", script_pub_key->_asm) == NULL) {
    goto fail; //String
    }
     } 


    // script_pub_key->hex
    if(script_pub_key->hex) { 
    if(cJSON_AddStringToObject(item, "hex", script_pub_key->hex) == NULL) {
    goto fail; //String
    }
     } 


    // script_pub_key->type
    if(script_pub_key->type) { 
    if(cJSON_AddStringToObject(item, "type", script_pub_key->type) == NULL) {
    goto fail; //String
    }
     } 


    // script_pub_key->req_sigs
    if(script_pub_key->req_sigs) { 
    if(cJSON_AddStringToObject(item, "reqSigs", script_pub_key->req_sigs) == NULL) {
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

script_pub_key_t *script_pub_key_parseFromJSON(cJSON *script_pub_keyJSON){

    script_pub_key_t *script_pub_key_local_var = NULL;

    // script_pub_key->addresses
    cJSON *addresses = cJSON_GetObjectItemCaseSensitive(script_pub_keyJSON, "addresses");
    list_t *addressesList;
    if (addresses) { 
    cJSON *addresses_local;
    if(!cJSON_IsArray(addresses)) {
        goto end;//primitive container
    }
    addressesList = list_create();

    cJSON_ArrayForEach(addresses_local, addresses)
    {
        if(!cJSON_IsString(addresses_local))
        {
            goto end;
        }
        list_addElement(addressesList , strdup(addresses_local->valuestring));
    }
    }

    // script_pub_key->_asm
    cJSON *_asm = cJSON_GetObjectItemCaseSensitive(script_pub_keyJSON, "asm");
    if (_asm) { 
    if(!cJSON_IsString(_asm))
    {
    goto end; //String
    }
    }

    // script_pub_key->hex
    cJSON *hex = cJSON_GetObjectItemCaseSensitive(script_pub_keyJSON, "hex");
    if (hex) { 
    if(!cJSON_IsString(hex))
    {
    goto end; //String
    }
    }

    // script_pub_key->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(script_pub_keyJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // script_pub_key->req_sigs
    cJSON *req_sigs = cJSON_GetObjectItemCaseSensitive(script_pub_keyJSON, "reqSigs");
    if (req_sigs) { 
    if(!cJSON_IsString(req_sigs))
    {
    goto end; //String
    }
    }


    script_pub_key_local_var = script_pub_key_create (
        addresses ? addressesList : NULL,
        _asm ? strdup(_asm->valuestring) : NULL,
        hex ? strdup(hex->valuestring) : NULL,
        type ? strdup(type->valuestring) : NULL,
        req_sigs ? strdup(req_sigs->valuestring) : NULL
        );

    return script_pub_key_local_var;
end:
    return NULL;

}
