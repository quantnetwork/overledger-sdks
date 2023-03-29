/*
 * script_pub_key.h
 *
 * 
 */

#ifndef _script_pub_key_H_
#define _script_pub_key_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct script_pub_key_t script_pub_key_t;




typedef struct script_pub_key_t {
    list_t *addresses; //primitive container
    char *_asm; // string
    char *hex; // string
    char *type; // string
    char *req_sigs; // string

} script_pub_key_t;

script_pub_key_t *script_pub_key_create(
    list_t *addresses,
    char *_asm,
    char *hex,
    char *type,
    char *req_sigs
);

void script_pub_key_free(script_pub_key_t *script_pub_key);

script_pub_key_t *script_pub_key_parseFromJSON(cJSON *script_pub_keyJSON);

cJSON *script_pub_key_convertToJSON(script_pub_key_t *script_pub_key);

#endif /* _script_pub_key_H_ */

