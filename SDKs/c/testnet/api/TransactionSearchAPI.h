#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_details.h"
#include "../model/error_list.h"
#include "../model/execute_search_transaction_response.h"
#include "../model/internal_server_error_schema.h"
#include "../model/prepare_search_response_schema.h"
#include "../model/prepare_search_schema.h"


// Execute a search for a transaction on a DLT
//
// Takes a request ID and searches for the transaction on the requested DLT
//
execute_search_transaction_response_t*
TransactionSearchAPI_executePreparedSearchRequestTransaction(apiClient_t *apiClient, char * Authorization , char * requestId );


// Prepare a search for a transaction on a DLT
//
// Searches for and returns data on transactions on a particular DLT. Returns a request ID for executing a transaction search on the requested DLT
//
prepare_search_response_schema_t*
TransactionSearchAPI_prepareSearchRequest(apiClient_t *apiClient, char * Authorization , char * transactionId , prepare_search_schema_t * prepare_search_schema );


