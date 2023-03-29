#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_details.h"
#include "../model/error_list.h"
#include "../model/execute_transaction_request.h"
#include "../model/execute_transaction_response.h"
#include "../model/internal_server_error_schema.h"
#include "../model/prepare_mint_transaction_request_schema_qrc20.h"
#include "../model/prepare_transaction_response.h"


// Execute a transaction on a DLT
//
// Takes a request ID and submits a signed transaction to the requested DLT.
//
execute_transaction_response_t*
ManageQRC20TokenSupplyAPI_executePreparedRequestTransaction(apiClient_t *apiClient, char * Authorization , execute_transaction_request_t * execute_transaction_request );


// Prepare a request to manage QRC20 token supply
//
// Transforms a transaction request to manage QRC20 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue more tokens for your QRC20 token, and \"Burn Tokens\" which will allow you to destroy your QRC20 tokens. Successfully prepared transactions can then be executed using the /execution/transaction API.
//
prepare_transaction_response_t*
ManageQRC20TokenSupplyAPI_prepareSupplyRequest1(apiClient_t *apiClient, char * Authorization , prepare_mint_transaction_request_schema_qrc20_t * prepare_mint_transaction_request_schema_qrc20 );


