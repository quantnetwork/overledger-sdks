/*
 * subscription_update_response.h
 *
 * 
 */

#ifndef _subscription_update_response_H_
#define _subscription_update_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subscription_update_response_t subscription_update_response_t;

#include "subscription_details.h"



typedef struct subscription_update_response_t {
    struct subscription_details_t *subscription_details; //model
    char *callback_url; // string
    char *subscription_id; // string
    char *type; // string

} subscription_update_response_t;

subscription_update_response_t *subscription_update_response_create(
    subscription_details_t *subscription_details,
    char *callback_url,
    char *subscription_id,
    char *type
);

void subscription_update_response_free(subscription_update_response_t *subscription_update_response);

subscription_update_response_t *subscription_update_response_parseFromJSON(cJSON *subscription_update_responseJSON);

cJSON *subscription_update_response_convertToJSON(subscription_update_response_t *subscription_update_response);

#endif /* _subscription_update_response_H_ */

