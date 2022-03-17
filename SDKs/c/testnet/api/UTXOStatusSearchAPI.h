#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/auto_execute_search_utxo_response_schema.h"
#include "../model/error_details.h"
#include "../model/error_list.h"
#include "../model/execute_search_utxo_response_schema.h"
#include "../model/internal_server_error_schema.h"
#include "../model/prepare_search_response_schema.h"
#include "../model/prepare_search_schema.h"


// Prepare and automatically execute a search for a UTXO on a DLT.
//
// Generates a request ID and automatically executes the utxo search on the requested DLT.
//
auto_execute_search_utxo_response_schema_t*
UTXOStatusSearchAPI_autoExecuteSearchUtxoRequest(apiClient_t *apiClient, char * Authorization , char * utxoId , prepare_search_schema_t * prepare_search_schema );


// Execute a search for UTXO state on a DLT
//
// Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
//
execute_search_utxo_response_schema_t*
UTXOStatusSearchAPI_executeUTXOPreparedSearchRequest(apiClient_t *apiClient, char * Authorization , char * requestId );


// Prepare Search for a UTXO State.
//
// Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT's
//
prepare_search_response_schema_t*
UTXOStatusSearchAPI_prepareSearchUTXOState(apiClient_t *apiClient, char * Authorization , char * utxoId , prepare_search_schema_t * prepare_search_schema );


