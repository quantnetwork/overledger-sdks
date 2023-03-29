/*
 * smart_contract_tag.h
 *
 * 
 */

#ifndef _smart_contract_tag_H_
#define _smart_contract_tag_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct smart_contract_tag_t smart_contract_tag_t;




typedef struct smart_contract_tag_t {
    char *name; // string
    char *function_name; // string
    char *event_name; // string

} smart_contract_tag_t;

smart_contract_tag_t *smart_contract_tag_create(
    char *name,
    char *function_name,
    char *event_name
);

void smart_contract_tag_free(smart_contract_tag_t *smart_contract_tag);

smart_contract_tag_t *smart_contract_tag_parseFromJSON(cJSON *smart_contract_tagJSON);

cJSON *smart_contract_tag_convertToJSON(smart_contract_tag_t *smart_contract_tag);

#endif /* _smart_contract_tag_H_ */

