/*
 * smart_contract_event_history.h
 *
 * 
 */

#ifndef _smart_contract_event_history_H_
#define _smart_contract_event_history_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct smart_contract_event_history_t smart_contract_event_history_t;




typedef struct smart_contract_event_history_t {
    char *event_id; // string
    char *event_name; // string
    char *event_parameters; // string
    char *transaction_id; // string
    char *timestamp; //date time

} smart_contract_event_history_t;

smart_contract_event_history_t *smart_contract_event_history_create(
    char *event_id,
    char *event_name,
    char *event_parameters,
    char *transaction_id,
    char *timestamp
);

void smart_contract_event_history_free(smart_contract_event_history_t *smart_contract_event_history);

smart_contract_event_history_t *smart_contract_event_history_parseFromJSON(cJSON *smart_contract_event_historyJSON);

cJSON *smart_contract_event_history_convertToJSON(smart_contract_event_history_t *smart_contract_event_history);

#endif /* _smart_contract_event_history_H_ */

