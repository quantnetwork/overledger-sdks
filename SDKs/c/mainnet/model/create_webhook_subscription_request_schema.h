/*
 * create_webhook_subscription_request_schema.h
 *
 * 
 */

#ifndef _create_webhook_subscription_request_schema_H_
#define _create_webhook_subscription_request_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct create_webhook_subscription_request_schema_t create_webhook_subscription_request_schema_t;




typedef struct create_webhook_subscription_request_schema_t {
    char *type; // string
    list_t *ids; //primitive container
    char *callback_url; // string

} create_webhook_subscription_request_schema_t;

create_webhook_subscription_request_schema_t *create_webhook_subscription_request_schema_create(
    char *type,
    list_t *ids,
    char *callback_url
);

void create_webhook_subscription_request_schema_free(create_webhook_subscription_request_schema_t *create_webhook_subscription_request_schema);

create_webhook_subscription_request_schema_t *create_webhook_subscription_request_schema_parseFromJSON(cJSON *create_webhook_subscription_request_schemaJSON);

cJSON *create_webhook_subscription_request_schema_convertToJSON(create_webhook_subscription_request_schema_t *create_webhook_subscription_request_schema);

#endif /* _create_webhook_subscription_request_schema_H_ */

