/*
 * event_subscription_response.h
 *
 * 
 */

#ifndef _event_subscription_response_H_
#define _event_subscription_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct event_subscription_response_t event_subscription_response_t;

#include "event_subscription_response_details.h"
#include "location.h"



typedef struct event_subscription_response_t {
    char *token_name; // string
    struct event_subscription_response_details_t *subscription_details; //model
    struct location_t *location; //model
    char *type; // string

} event_subscription_response_t;

event_subscription_response_t *event_subscription_response_create(
    char *token_name,
    event_subscription_response_details_t *subscription_details,
    location_t *location,
    char *type
);

void event_subscription_response_free(event_subscription_response_t *event_subscription_response);

event_subscription_response_t *event_subscription_response_parseFromJSON(cJSON *event_subscription_responseJSON);

cJSON *event_subscription_response_convertToJSON(event_subscription_response_t *event_subscription_response);

#endif /* _event_subscription_response_H_ */

