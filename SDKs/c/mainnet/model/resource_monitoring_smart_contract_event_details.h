/*
 * resource_monitoring_smart_contract_event_details.h
 *
 * 
 */

#ifndef _resource_monitoring_smart_contract_event_details_H_
#define _resource_monitoring_smart_contract_event_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct resource_monitoring_smart_contract_event_details_t resource_monitoring_smart_contract_event_details_t;




typedef struct resource_monitoring_smart_contract_event_details_t {
    char *event_name; // string
    char *event_parameters; // string
    char *smart_contract_id; // string

} resource_monitoring_smart_contract_event_details_t;

resource_monitoring_smart_contract_event_details_t *resource_monitoring_smart_contract_event_details_create(
    char *event_name,
    char *event_parameters,
    char *smart_contract_id
);

void resource_monitoring_smart_contract_event_details_free(resource_monitoring_smart_contract_event_details_t *resource_monitoring_smart_contract_event_details);

resource_monitoring_smart_contract_event_details_t *resource_monitoring_smart_contract_event_details_parseFromJSON(cJSON *resource_monitoring_smart_contract_event_detailsJSON);

cJSON *resource_monitoring_smart_contract_event_details_convertToJSON(resource_monitoring_smart_contract_event_details_t *resource_monitoring_smart_contract_event_details);

#endif /* _resource_monitoring_smart_contract_event_details_H_ */

