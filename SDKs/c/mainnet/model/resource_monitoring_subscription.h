/*
 * resource_monitoring_subscription.h
 *
 * 
 */

#ifndef _resource_monitoring_subscription_H_
#define _resource_monitoring_subscription_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct resource_monitoring_subscription_t resource_monitoring_subscription_t;




typedef struct resource_monitoring_subscription_t {
    char *subscription_id; // string
    char *type; // string
    char *callback_url; // string

} resource_monitoring_subscription_t;

resource_monitoring_subscription_t *resource_monitoring_subscription_create(
    char *subscription_id,
    char *type,
    char *callback_url
);

void resource_monitoring_subscription_free(resource_monitoring_subscription_t *resource_monitoring_subscription);

resource_monitoring_subscription_t *resource_monitoring_subscription_parseFromJSON(cJSON *resource_monitoring_subscriptionJSON);

cJSON *resource_monitoring_subscription_convertToJSON(resource_monitoring_subscription_t *resource_monitoring_subscription);

#endif /* _resource_monitoring_subscription_H_ */

