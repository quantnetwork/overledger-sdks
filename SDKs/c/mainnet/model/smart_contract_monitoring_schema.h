/*
 * smart_contract_monitoring_schema.h
 *
 * 
 */

#ifndef _smart_contract_monitoring_schema_H_
#define _smart_contract_monitoring_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct smart_contract_monitoring_schema_t smart_contract_monitoring_schema_t;

#include "resource_monitoring_details.h"
#include "resource_monitoring_smart_contract_event_details.h"



typedef struct smart_contract_monitoring_schema_t {
    struct resource_monitoring_smart_contract_event_details_t *smart_contract_event_monitoring_details; //model
    struct resource_monitoring_details_t *resource_monitoring; //model

} smart_contract_monitoring_schema_t;

smart_contract_monitoring_schema_t *smart_contract_monitoring_schema_create(
    resource_monitoring_smart_contract_event_details_t *smart_contract_event_monitoring_details,
    resource_monitoring_details_t *resource_monitoring
);

void smart_contract_monitoring_schema_free(smart_contract_monitoring_schema_t *smart_contract_monitoring_schema);

smart_contract_monitoring_schema_t *smart_contract_monitoring_schema_parseFromJSON(cJSON *smart_contract_monitoring_schemaJSON);

cJSON *smart_contract_monitoring_schema_convertToJSON(smart_contract_monitoring_schema_t *smart_contract_monitoring_schema);

#endif /* _smart_contract_monitoring_schema_H_ */

