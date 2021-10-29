#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/address_monitoring_request_schema.h"
#include "../model/address_monitoring_response_schema.h"
#include "../model/create_smart_contract_monitoring_schema.h"
#include "../model/error_list.h"
#include "../model/internal_server_error_schema.h"
#include "../model/monitor_smart_contract_request_schema.h"


// Monitor an address for incoming and outgoing transactions
//
// Overledger creates a tracking record for the given address and records information each time the given address receives or sends transactions on the DLT
//
address_monitoring_response_schema_t*
MonitorAResourceAPI_resourceMonitoringAddress(apiClient_t *apiClient, char * Authorization , address_monitoring_request_schema_t * address_monitoring_request_schema );


// Monitor a smart contract for an event
//
// Overledger creates a tracking record for the given smart contract and records information each time a transaction on the DLT triggers a specific event
//
create_smart_contract_monitoring_schema_t*
MonitorAResourceAPI_trackAndSubscribeEvent(apiClient_t *apiClient, char * Authorization , monitor_smart_contract_request_schema_t * monitor_smart_contract_request_schema );


