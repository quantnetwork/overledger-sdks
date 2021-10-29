/*
 * address_monitoring_response_schema.h
 *
 * 
 */

#ifndef _address_monitoring_response_schema_H_
#define _address_monitoring_response_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct address_monitoring_response_schema_t address_monitoring_response_schema_t;

#include "resource_monitoring_details.h"
#include "resource_monitoring_subscription.h"
#include "resource_monitoring_subscription_details.h"



typedef struct address_monitoring_response_schema_t {
    struct resource_monitoring_subscription_details_t *subscription_details; //model
    struct resource_monitoring_details_t *resource_monitoring; //model
    struct resource_monitoring_subscription_t *subscription; //model

} address_monitoring_response_schema_t;

address_monitoring_response_schema_t *address_monitoring_response_schema_create(
    resource_monitoring_subscription_details_t *subscription_details,
    resource_monitoring_details_t *resource_monitoring,
    resource_monitoring_subscription_t *subscription
);

void address_monitoring_response_schema_free(address_monitoring_response_schema_t *address_monitoring_response_schema);

address_monitoring_response_schema_t *address_monitoring_response_schema_parseFromJSON(cJSON *address_monitoring_response_schemaJSON);

cJSON *address_monitoring_response_schema_convertToJSON(address_monitoring_response_schema_t *address_monitoring_response_schema);

#endif /* _address_monitoring_response_schema_H_ */

