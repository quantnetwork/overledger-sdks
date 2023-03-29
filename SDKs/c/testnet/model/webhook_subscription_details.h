/*
 * webhook_subscription_details.h
 *
 * 
 */

#ifndef _webhook_subscription_details_H_
#define _webhook_subscription_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_subscription_details_t webhook_subscription_details_t;

#include "status.h"



typedef struct webhook_subscription_details_t {
    list_t *ids; //primitive container
    struct status_t *status; //model

} webhook_subscription_details_t;

webhook_subscription_details_t *webhook_subscription_details_create(
    list_t *ids,
    status_t *status
);

void webhook_subscription_details_free(webhook_subscription_details_t *webhook_subscription_details);

webhook_subscription_details_t *webhook_subscription_details_parseFromJSON(cJSON *webhook_subscription_detailsJSON);

cJSON *webhook_subscription_details_convertToJSON(webhook_subscription_details_t *webhook_subscription_details);

#endif /* _webhook_subscription_details_H_ */

