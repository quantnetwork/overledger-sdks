/*
 * webhook_subscription_status_update_response.h
 *
 * 
 */

#ifndef _webhook_subscription_status_update_response_H_
#define _webhook_subscription_status_update_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_subscription_status_update_response_t webhook_subscription_status_update_response_t;

#include "webhook_subscription_details.h"



typedef struct webhook_subscription_status_update_response_t {
    struct webhook_subscription_details_t *subscription_details; //model
    char *callback_url; // string
    char *subscription_id; // string
    char *type; // string

} webhook_subscription_status_update_response_t;

webhook_subscription_status_update_response_t *webhook_subscription_status_update_response_create(
    webhook_subscription_details_t *subscription_details,
    char *callback_url,
    char *subscription_id,
    char *type
);

void webhook_subscription_status_update_response_free(webhook_subscription_status_update_response_t *webhook_subscription_status_update_response);

webhook_subscription_status_update_response_t *webhook_subscription_status_update_response_parseFromJSON(cJSON *webhook_subscription_status_update_responseJSON);

cJSON *webhook_subscription_status_update_response_convertToJSON(webhook_subscription_status_update_response_t *webhook_subscription_status_update_response);

#endif /* _webhook_subscription_status_update_response_H_ */

