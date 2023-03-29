/*
 * account_details.h
 *
 * Account Details of the tokens
 */

#ifndef _account_details_H_
#define _account_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_details_t account_details_t;




typedef struct account_details_t {
    char *parent_account_id; // string
    char *account_id; // string
    char *unit; // string
    char *owning_institution_id; // string
    char *account_type; // string

} account_details_t;

account_details_t *account_details_create(
    char *parent_account_id,
    char *account_id,
    char *unit,
    char *owning_institution_id,
    char *account_type
);

void account_details_free(account_details_t *account_details);

account_details_t *account_details_parseFromJSON(cJSON *account_detailsJSON);

cJSON *account_details_convertToJSON(account_details_t *account_details);

#endif /* _account_details_H_ */

