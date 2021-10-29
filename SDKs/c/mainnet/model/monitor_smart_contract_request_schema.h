/*
 * monitor_smart_contract_request_schema.h
 *
 * 
 */

#ifndef _monitor_smart_contract_request_schema_H_
#define _monitor_smart_contract_request_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct monitor_smart_contract_request_schema_t monitor_smart_contract_request_schema_t;

#include "location.h"
#include "monitor_smart_contract_event_param.h"



typedef struct monitor_smart_contract_request_schema_t {
    char *call_back_url; // string
    list_t *event_params; //nonprimitive container
    char *event_name; // string
    struct location_t *location; //model
    char *smart_contract_id; // string

} monitor_smart_contract_request_schema_t;

monitor_smart_contract_request_schema_t *monitor_smart_contract_request_schema_create(
    char *call_back_url,
    list_t *event_params,
    char *event_name,
    location_t *location,
    char *smart_contract_id
);

void monitor_smart_contract_request_schema_free(monitor_smart_contract_request_schema_t *monitor_smart_contract_request_schema);

monitor_smart_contract_request_schema_t *monitor_smart_contract_request_schema_parseFromJSON(cJSON *monitor_smart_contract_request_schemaJSON);

cJSON *monitor_smart_contract_request_schema_convertToJSON(monitor_smart_contract_request_schema_t *monitor_smart_contract_request_schema);

#endif /* _monitor_smart_contract_request_schema_H_ */

