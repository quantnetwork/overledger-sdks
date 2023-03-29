/*
 * event_subscription_response_details.h
 *
 * 
 */

#ifndef _event_subscription_response_details_H_
#define _event_subscription_response_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct event_subscription_response_details_t event_subscription_response_details_t;




typedef struct event_subscription_response_details_t {
    char *subscription_id; // string
    char *callback_url; // string
    char *created_date; // string

} event_subscription_response_details_t;

event_subscription_response_details_t *event_subscription_response_details_create(
    char *subscription_id,
    char *callback_url,
    char *created_date
);

void event_subscription_response_details_free(event_subscription_response_details_t *event_subscription_response_details);

event_subscription_response_details_t *event_subscription_response_details_parseFromJSON(cJSON *event_subscription_response_detailsJSON);

cJSON *event_subscription_response_details_convertToJSON(event_subscription_response_details_t *event_subscription_response_details);

#endif /* _event_subscription_response_details_H_ */

