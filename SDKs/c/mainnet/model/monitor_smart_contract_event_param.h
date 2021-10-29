/*
 * monitor_smart_contract_event_param.h
 *
 * 
 */

#ifndef _monitor_smart_contract_event_param_H_
#define _monitor_smart_contract_event_param_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct monitor_smart_contract_event_param_t monitor_smart_contract_event_param_t;




typedef struct monitor_smart_contract_event_param_t {
    char *selected_integer_length; // string
    char *type; // string
    char *value; // string

} monitor_smart_contract_event_param_t;

monitor_smart_contract_event_param_t *monitor_smart_contract_event_param_create(
    char *selected_integer_length,
    char *type,
    char *value
);

void monitor_smart_contract_event_param_free(monitor_smart_contract_event_param_t *monitor_smart_contract_event_param);

monitor_smart_contract_event_param_t *monitor_smart_contract_event_param_parseFromJSON(cJSON *monitor_smart_contract_event_paramJSON);

cJSON *monitor_smart_contract_event_param_convertToJSON(monitor_smart_contract_event_param_t *monitor_smart_contract_event_param);

#endif /* _monitor_smart_contract_event_param_H_ */

