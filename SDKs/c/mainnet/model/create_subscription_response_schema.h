/*
 * create_subscription_response_schema.h
 *
 * 
 */

#ifndef _create_subscription_response_schema_H_
#define _create_subscription_response_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct create_subscription_response_schema_t create_subscription_response_schema_t;

#include "subscription_details_schema.h"



typedef struct create_subscription_response_schema_t {
    struct subscription_details_schema_t *scubscription_details; //model
    char *subscription_id; // string

} create_subscription_response_schema_t;

create_subscription_response_schema_t *create_subscription_response_schema_create(
    subscription_details_schema_t *scubscription_details,
    char *subscription_id
);

void create_subscription_response_schema_free(create_subscription_response_schema_t *create_subscription_response_schema);

create_subscription_response_schema_t *create_subscription_response_schema_parseFromJSON(cJSON *create_subscription_response_schemaJSON);

cJSON *create_subscription_response_schema_convertToJSON(create_subscription_response_schema_t *create_subscription_response_schema);

#endif /* _create_subscription_response_schema_H_ */

