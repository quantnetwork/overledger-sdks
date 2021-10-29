/*
 * subscription_details_schema.h
 *
 * 
 */

#ifndef _subscription_details_schema_H_
#define _subscription_details_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subscription_details_schema_t subscription_details_schema_t;

#include "status.h"



typedef struct subscription_details_schema_t {
    list_t *ids; //primitive container
    struct status_t *status; //model

} subscription_details_schema_t;

subscription_details_schema_t *subscription_details_schema_create(
    list_t *ids,
    status_t *status
);

void subscription_details_schema_free(subscription_details_schema_t *subscription_details_schema);

subscription_details_schema_t *subscription_details_schema_parseFromJSON(cJSON *subscription_details_schemaJSON);

cJSON *subscription_details_schema_convertToJSON(subscription_details_schema_t *subscription_details_schema);

#endif /* _subscription_details_schema_H_ */

