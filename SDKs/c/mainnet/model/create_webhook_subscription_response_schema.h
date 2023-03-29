/*
 * create_webhook_subscription_response_schema.h
 *
 * 
 */

#ifndef _create_webhook_subscription_response_schema_H_
#define _create_webhook_subscription_response_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct create_webhook_subscription_response_schema_t create_webhook_subscription_response_schema_t;

#include "webhook_subscription_details_schema.h"



typedef struct create_webhook_subscription_response_schema_t {
    char *subscription_id; // string
    struct webhook_subscription_details_schema_t *scubscription_details; //model

} create_webhook_subscription_response_schema_t;

create_webhook_subscription_response_schema_t *create_webhook_subscription_response_schema_create(
    char *subscription_id,
    webhook_subscription_details_schema_t *scubscription_details
);

void create_webhook_subscription_response_schema_free(create_webhook_subscription_response_schema_t *create_webhook_subscription_response_schema);

create_webhook_subscription_response_schema_t *create_webhook_subscription_response_schema_parseFromJSON(cJSON *create_webhook_subscription_response_schemaJSON);

cJSON *create_webhook_subscription_response_schema_convertToJSON(create_webhook_subscription_response_schema_t *create_webhook_subscription_response_schema);

#endif /* _create_webhook_subscription_response_schema_H_ */

