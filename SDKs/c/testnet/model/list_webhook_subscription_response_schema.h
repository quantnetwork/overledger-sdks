/*
 * list_webhook_subscription_response_schema.h
 *
 * 
 */

#ifndef _list_webhook_subscription_response_schema_H_
#define _list_webhook_subscription_response_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct list_webhook_subscription_response_schema_t list_webhook_subscription_response_schema_t;

#include "webhook_subscription_details_schema.h"



typedef struct list_webhook_subscription_response_schema_t {
    struct webhook_subscription_details_schema_t *subscription_details; //model
    char *last_updated_time; //date time
    char *callback_url; // string
    char *subscription_id; // string
    char *type; // string
    char *subscribed_time; //date time

} list_webhook_subscription_response_schema_t;

list_webhook_subscription_response_schema_t *list_webhook_subscription_response_schema_create(
    webhook_subscription_details_schema_t *subscription_details,
    char *last_updated_time,
    char *callback_url,
    char *subscription_id,
    char *type,
    char *subscribed_time
);

void list_webhook_subscription_response_schema_free(list_webhook_subscription_response_schema_t *list_webhook_subscription_response_schema);

list_webhook_subscription_response_schema_t *list_webhook_subscription_response_schema_parseFromJSON(cJSON *list_webhook_subscription_response_schemaJSON);

cJSON *list_webhook_subscription_response_schema_convertToJSON(list_webhook_subscription_response_schema_t *list_webhook_subscription_response_schema);

#endif /* _list_webhook_subscription_response_schema_H_ */

