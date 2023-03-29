/*
 * webhook_subscription_details_schema.h
 *
 * 
 */

#ifndef _webhook_subscription_details_schema_H_
#define _webhook_subscription_details_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_subscription_details_schema_t webhook_subscription_details_schema_t;

#include "status.h"



typedef struct webhook_subscription_details_schema_t {
    list_t *ids; //primitive container
    struct status_t *status; //model

} webhook_subscription_details_schema_t;

webhook_subscription_details_schema_t *webhook_subscription_details_schema_create(
    list_t *ids,
    status_t *status
);

void webhook_subscription_details_schema_free(webhook_subscription_details_schema_t *webhook_subscription_details_schema);

webhook_subscription_details_schema_t *webhook_subscription_details_schema_parseFromJSON(cJSON *webhook_subscription_details_schemaJSON);

cJSON *webhook_subscription_details_schema_convertToJSON(webhook_subscription_details_schema_t *webhook_subscription_details_schema);

#endif /* _webhook_subscription_details_schema_H_ */

