/*
 * subscription_details.h
 *
 * 
 */

#ifndef _subscription_details_H_
#define _subscription_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subscription_details_t subscription_details_t;

#include "status.h"



typedef struct subscription_details_t {
    list_t *ids; //primitive container
    struct status_t *status; //model

} subscription_details_t;

subscription_details_t *subscription_details_create(
    list_t *ids,
    status_t *status
);

void subscription_details_free(subscription_details_t *subscription_details);

subscription_details_t *subscription_details_parseFromJSON(cJSON *subscription_detailsJSON);

cJSON *subscription_details_convertToJSON(subscription_details_t *subscription_details);

#endif /* _subscription_details_H_ */

