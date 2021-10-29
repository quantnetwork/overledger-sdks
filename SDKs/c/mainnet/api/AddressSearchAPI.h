#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_details.h"
#include "../model/error_list.h"
#include "../model/execute_search_balance_response.h"
#include "../model/execute_search_sequence_response.h"
#include "../model/internal_server_error_schema.h"
#include "../model/prepare_search_response_schema.h"
#include "../model/prepare_search_schema.h"


// Execute a search for an address balance on a DLT
//
// Takes a request ID, searches for the address and retrieves the balance on the requested DLT. This API is only applicable for account based DLTs
//
execute_search_balance_response_t*
AddressSearchAPI_executePreparedSearchRequestAddressBalance(apiClient_t *apiClient, char * Authorization , char * requestId );


// Execute a search for an address sequence on a DLT
//
// Takes a request ID, searches for the address and retrieves the sequence on the requested DLT. This API is only applicable for account based DLT’s
//
execute_search_sequence_response_t*
AddressSearchAPI_executePreparedSearchRequestAddressSequence(apiClient_t *apiClient, char * Authorization , char * requestId );


// Prepare Search for an Address Balance.
//
// Perform an address balance search on the requested DLT. Returns a request ID to execute
//
prepare_search_response_schema_t*
AddressSearchAPI_prepareAddressBalanceSearchRequest(apiClient_t *apiClient, char * Authorization , char * addressId , prepare_search_schema_t * prepare_search_schema );


// Prepare Search for an Address Sequence.
//
// Perform an address sequence search on the requested DLT.Returns a request ID to execute
//
prepare_search_response_schema_t*
AddressSearchAPI_prepareAddressSequenceSearchRequest(apiClient_t *apiClient, char * Authorization , char * addressId , prepare_search_schema_t * prepare_search_schema );


