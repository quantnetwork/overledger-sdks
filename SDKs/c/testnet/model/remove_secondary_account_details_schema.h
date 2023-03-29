/*
 * remove_secondary_account_details_schema.h
 *
 * 
 */

#ifndef _remove_secondary_account_details_schema_H_
#define _remove_secondary_account_details_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct remove_secondary_account_details_schema_t remove_secondary_account_details_schema_t;

#include "additional_owner_remove_secondary_schema.h"
#include "owner_remove_secondary_schema.h"



typedef struct remove_secondary_account_details_schema_t {
    struct owner_remove_secondary_schema_t *owner; //model
    struct additional_owner_remove_secondary_schema_t *additional_owner; //model
    char *message; // string
    char *overledger_signing_type; // string

} remove_secondary_account_details_schema_t;

remove_secondary_account_details_schema_t *remove_secondary_account_details_schema_create(
    owner_remove_secondary_schema_t *owner,
    additional_owner_remove_secondary_schema_t *additional_owner,
    char *message,
    char *overledger_signing_type
);

void remove_secondary_account_details_schema_free(remove_secondary_account_details_schema_t *remove_secondary_account_details_schema);

remove_secondary_account_details_schema_t *remove_secondary_account_details_schema_parseFromJSON(cJSON *remove_secondary_account_details_schemaJSON);

cJSON *remove_secondary_account_details_schema_convertToJSON(remove_secondary_account_details_schema_t *remove_secondary_account_details_schema);

#endif /* _remove_secondary_account_details_schema_H_ */

