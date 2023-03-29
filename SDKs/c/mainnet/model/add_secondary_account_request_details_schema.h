/*
 * add_secondary_account_request_details_schema.h
 *
 * 
 */

#ifndef _add_secondary_account_request_details_schema_H_
#define _add_secondary_account_request_details_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct add_secondary_account_request_details_schema_t add_secondary_account_request_details_schema_t;

#include "secondary_account_additional_owner_schema.h"
#include "secondary_account_owner_schema.h"



typedef struct add_secondary_account_request_details_schema_t {
    struct secondary_account_owner_schema_t *owner; //model
    struct secondary_account_additional_owner_schema_t *additional_owner; //model

} add_secondary_account_request_details_schema_t;

add_secondary_account_request_details_schema_t *add_secondary_account_request_details_schema_create(
    secondary_account_owner_schema_t *owner,
    secondary_account_additional_owner_schema_t *additional_owner
);

void add_secondary_account_request_details_schema_free(add_secondary_account_request_details_schema_t *add_secondary_account_request_details_schema);

add_secondary_account_request_details_schema_t *add_secondary_account_request_details_schema_parseFromJSON(cJSON *add_secondary_account_request_details_schemaJSON);

cJSON *add_secondary_account_request_details_schema_convertToJSON(add_secondary_account_request_details_schema_t *add_secondary_account_request_details_schema);

#endif /* _add_secondary_account_request_details_schema_H_ */

