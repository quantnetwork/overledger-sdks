#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/UNKNOWN_BASE_TYPE.h"
#include "../model/error_details.h"
#include "../model/error_list.h"
#include "../model/execute_transaction_request.h"
#include "../model/execute_transaction_response.h"
#include "../model/internal_server_error_schema.h"
#include "../model/one_of_prepare_payment_transaction_request_schema_prepare_transfer_transaction_request_schema_prepare_transaction_smart_contract_invoke_request_schema.h"
#include "../model/prepare_native_transaction_request_schema.h"
#include "../model/prepare_search_response_schema.h"
#include "../model/prepare_transaction_response.h"


// Execute a native transaction on the DLT
//
// Takes a request ID and submits a signed native transaction to the requested DLT
//
execute_transaction_response_t*
CreateTransactionAPI_executePreparedRequestNativeTransaction(apiClient_t *apiClient, char * Authorization , execute_transaction_request_t * execute_transaction_request );


// Execute a transaction on the DLT
//
// Takes a request ID and submits a signed transaction to the requested DLT.
//
execute_transaction_response_t*
CreateTransactionAPI_executePreparedRequestTransaction(apiClient_t *apiClient, char * Authorization , execute_transaction_request_t * execute_transaction_request );


// Prepare a DLT native transaction
//
// Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT
//
prepare_search_response_schema_t*
CreateTransactionAPI_prepareNativeTransaction(apiClient_t *apiClient, char * Authorization , prepare_native_transaction_request_schema_t * prepare_native_transaction_request_schema );


// Prepare a DLT transaction for signing
//
// Transforms a transaction request into a payload ready for signing for the requested DLT and returns a request ID for executing. Supported transaction types in this release are “Payment” (to send payments) and “Smart Contract Invoke” (to invoke arbitrary smart contract functions)
//
prepare_transaction_response_t*
CreateTransactionAPI_prepareTransactionRequest(apiClient_t *apiClient, char * Authorization ,  UNKNOWN_BASE_TYPE );


