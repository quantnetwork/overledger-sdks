#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_details.h"
#include "../model/error_list.h"
#include "../model/execute_smart_contract_read_response_schema.h"
#include "../model/internal_server_error_schema.h"
#include "../model/prepare_search_response_schema.h"
#include "../model/prepare_search_smart_contract_request_schema.h"


// Execute a read of a smart contract on a DLT
//
// Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.
//
execute_smart_contract_read_response_schema_t*
SmartContractSearchAPI_executePreparedSearchRequest(apiClient_t *apiClient, char * Authorization , char * requestId );


// Prepare a read of a smart contract on a DLT
//
// Returns a request ID for executing a smart contract read on Ethereum.
//
prepare_search_response_schema_t*
SmartContractSearchAPI_prepareSmartContractQueryRequest(apiClient_t *apiClient, char * Authorization , prepare_search_smart_contract_request_schema_t * prepare_search_smart_contract_request_schema );


