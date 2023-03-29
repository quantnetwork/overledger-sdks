/*
 * create_smart_contract_monitoring_schema.h
 *
 * 
 */

#ifndef _create_smart_contract_monitoring_schema_H_
#define _create_smart_contract_monitoring_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct create_smart_contract_monitoring_schema_t create_smart_contract_monitoring_schema_t;

#include "resource_monitoring_details.h"
#include "resource_monitoring_subscription.h"
#include "resource_monitoring_subscription_details.h"



typedef struct create_smart_contract_monitoring_schema_t {
    struct resource_monitoring_details_t *resource_monitoring; //model
    struct resource_monitoring_subscription_details_t *subscription_details; //model
    struct resource_monitoring_subscription_t *subscription; //model

} create_smart_contract_monitoring_schema_t;

create_smart_contract_monitoring_schema_t *create_smart_contract_monitoring_schema_create(
    resource_monitoring_details_t *resource_monitoring,
    resource_monitoring_subscription_details_t *subscription_details,
    resource_monitoring_subscription_t *subscription
);

void create_smart_contract_monitoring_schema_free(create_smart_contract_monitoring_schema_t *create_smart_contract_monitoring_schema);

create_smart_contract_monitoring_schema_t *create_smart_contract_monitoring_schema_parseFromJSON(cJSON *create_smart_contract_monitoring_schemaJSON);

cJSON *create_smart_contract_monitoring_schema_convertToJSON(create_smart_contract_monitoring_schema_t *create_smart_contract_monitoring_schema);

#endif /* _create_smart_contract_monitoring_schema_H_ */

