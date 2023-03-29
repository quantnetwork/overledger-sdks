/*
 * alias_details.h
 *
 * Alias Details of an account
 */

#ifndef _alias_details_H_
#define _alias_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct alias_details_t alias_details_t;




typedef struct alias_details_t {
    char *account_id; // string
    char *unit; // string
    int disposable_alias; //boolean
    char *alias_hash; // string
    char *alias_type; // string
    char *esip_id; // string

} alias_details_t;

alias_details_t *alias_details_create(
    char *account_id,
    char *unit,
    int disposable_alias,
    char *alias_hash,
    char *alias_type,
    char *esip_id
);

void alias_details_free(alias_details_t *alias_details);

alias_details_t *alias_details_parseFromJSON(cJSON *alias_detailsJSON);

cJSON *alias_details_convertToJSON(alias_details_t *alias_details);

#endif /* _alias_details_H_ */

