/*
 * lock_details.h
 *
 * Lock Details of the tokens
 */

#ifndef _lock_details_H_
#define _lock_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct lock_details_t lock_details_t;




typedef struct lock_details_t {
    char *expiry_date; // string
    char *lock_id; // string
    char *account_id; // string
    char *amount; // string
    char *unit; // string
    char *account_owning_institution_id; // string
    char *lock_description; // string
    char *payee_id; // string
    char *secret; // string
    char *hash; // string
    char *payee_owning_institution_id; // string
    char *lock_owning_institution_id; // string

} lock_details_t;

lock_details_t *lock_details_create(
    char *expiry_date,
    char *lock_id,
    char *account_id,
    char *amount,
    char *unit,
    char *account_owning_institution_id,
    char *lock_description,
    char *payee_id,
    char *secret,
    char *hash,
    char *payee_owning_institution_id,
    char *lock_owning_institution_id
);

void lock_details_free(lock_details_t *lock_details);

lock_details_t *lock_details_parseFromJSON(cJSON *lock_detailsJSON);

cJSON *lock_details_convertToJSON(lock_details_t *lock_details);

#endif /* _lock_details_H_ */

