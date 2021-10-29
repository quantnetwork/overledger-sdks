/*
 * resource_monitoring_subscription_details.h
 *
 * 
 */

#ifndef _resource_monitoring_subscription_details_H_
#define _resource_monitoring_subscription_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct resource_monitoring_subscription_details_t resource_monitoring_subscription_details_t;

#include "status.h"



typedef struct resource_monitoring_subscription_details_t {
    list_t *ids; //primitive container
    struct status_t *status; //model

} resource_monitoring_subscription_details_t;

resource_monitoring_subscription_details_t *resource_monitoring_subscription_details_create(
    list_t *ids,
    status_t *status
);

void resource_monitoring_subscription_details_free(resource_monitoring_subscription_details_t *resource_monitoring_subscription_details);

resource_monitoring_subscription_details_t *resource_monitoring_subscription_details_parseFromJSON(cJSON *resource_monitoring_subscription_detailsJSON);

cJSON *resource_monitoring_subscription_details_convertToJSON(resource_monitoring_subscription_details_t *resource_monitoring_subscription_details);

#endif /* _resource_monitoring_subscription_details_H_ */

