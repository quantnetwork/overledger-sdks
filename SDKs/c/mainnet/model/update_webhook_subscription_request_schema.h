/*
 * update_webhook_subscription_request_schema.h
 *
 * 
 */

#ifndef _update_webhook_subscription_request_schema_H_
#define _update_webhook_subscription_request_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct update_webhook_subscription_request_schema_t update_webhook_subscription_request_schema_t;

#include "webhook_status_update_schema.h"



typedef struct update_webhook_subscription_request_schema_t {
    struct webhook_status_update_schema_t *status_update; //model
    char *callback_url; // string

} update_webhook_subscription_request_schema_t;

update_webhook_subscription_request_schema_t *update_webhook_subscription_request_schema_create(
    webhook_status_update_schema_t *status_update,
    char *callback_url
);

void update_webhook_subscription_request_schema_free(update_webhook_subscription_request_schema_t *update_webhook_subscription_request_schema);

update_webhook_subscription_request_schema_t *update_webhook_subscription_request_schema_parseFromJSON(cJSON *update_webhook_subscription_request_schemaJSON);

cJSON *update_webhook_subscription_request_schema_convertToJSON(update_webhook_subscription_request_schema_t *update_webhook_subscription_request_schema);

#endif /* _update_webhook_subscription_request_schema_H_ */

