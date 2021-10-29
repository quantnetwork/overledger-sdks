/*
 * smart_contract_monitoring_details_schema.h
 *
 * 
 */

#ifndef _smart_contract_monitoring_details_schema_H_
#define _smart_contract_monitoring_details_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct smart_contract_monitoring_details_schema_t smart_contract_monitoring_details_schema_t;

#include "location.h"
#include "resource_monitoring_smart_contract_event_details.h"
#include "smart_contract_event_history.h"
#include "status.h"



typedef struct smart_contract_monitoring_details_schema_t {
    list_t *smart_contract_event_history; //nonprimitive container
    struct resource_monitoring_smart_contract_event_details_t *smart_contract_event_details; //model
    struct location_t *location; //model
    char *type; // string
    struct status_t *status; //model
    char *timestamp; //date time

} smart_contract_monitoring_details_schema_t;

smart_contract_monitoring_details_schema_t *smart_contract_monitoring_details_schema_create(
    list_t *smart_contract_event_history,
    resource_monitoring_smart_contract_event_details_t *smart_contract_event_details,
    location_t *location,
    char *type,
    status_t *status,
    char *timestamp
);

void smart_contract_monitoring_details_schema_free(smart_contract_monitoring_details_schema_t *smart_contract_monitoring_details_schema);

smart_contract_monitoring_details_schema_t *smart_contract_monitoring_details_schema_parseFromJSON(cJSON *smart_contract_monitoring_details_schemaJSON);

cJSON *smart_contract_monitoring_details_schema_convertToJSON(smart_contract_monitoring_details_schema_t *smart_contract_monitoring_details_schema);

#endif /* _smart_contract_monitoring_details_schema_H_ */

