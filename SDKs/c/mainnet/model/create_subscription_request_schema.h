/*
 * create_subscription_request_schema.h
 *
 * 
 */

#ifndef _create_subscription_request_schema_H_
#define _create_subscription_request_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct create_subscription_request_schema_t create_subscription_request_schema_t;




typedef struct create_subscription_request_schema_t {
    list_t *ids; //primitive container
    char *callback_url; // string
    char *type; // string

} create_subscription_request_schema_t;

create_subscription_request_schema_t *create_subscription_request_schema_create(
    list_t *ids,
    char *callback_url,
    char *type
);

void create_subscription_request_schema_free(create_subscription_request_schema_t *create_subscription_request_schema);

create_subscription_request_schema_t *create_subscription_request_schema_parseFromJSON(cJSON *create_subscription_request_schemaJSON);

cJSON *create_subscription_request_schema_convertToJSON(create_subscription_request_schema_t *create_subscription_request_schema);

#endif /* _create_subscription_request_schema_H_ */

