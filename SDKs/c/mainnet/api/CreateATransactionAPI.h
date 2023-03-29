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
#include "../model/prepare_native_transaction_request_schema.h"
#include "../model/prepare_payment_transaction_request_schema.h"
#include "../model/prepare_search_response_schema.h"
#include "../model/prepare_transaction_response.h"


// Execute a native transaction on the DLT
//
// Takes a request ID and submits a signed native transaction to the requested DLT
//
execute_transaction_response_t*
CreateATransactionAPI_executePreparedRequestNativeTransaction(apiClient_t *apiClient, char * Authorization , execute_transaction_request_t * execute_transaction_request );


// Execute a transaction on a DLT
//
// Takes a request ID and submits a signed transaction to the requested DLT.
//
execute_transaction_response_t*
CreateATransactionAPI_executePreparedRequestTransaction(apiClient_t *apiClient, char * Authorization , execute_transaction_request_t * execute_transaction_request );


// Prepare a DLT native transaction
//
// Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT
//
prepare_search_response_schema_t*
CreateATransactionAPI_prepareNativeTransaction(apiClient_t *apiClient, char * Authorization , prepare_native_transaction_request_schema_t * prepare_native_transaction_request_schema );


// Prepare a DLT transaction for signing
//
// The first step of submitting a transaction to Overledger requires preparing the transaction for signing. This API transforms a transaction request into a payload that can be signed. It returns a request ID that is used to execute the transaction after it is signed.  There are three types of transactions supported: * Payment     * Send payments in the native token of the network     * Send payments with ERC20 fungible tokens supported by Overledger on Ethereum-compatible networks. To help you test ERC20 functionality we have deployed the QNT token on the Ethereum-based test networks we support. You can check the request samples to view an example of a Smart Contract Invoke which requests test QNT from our faucet contracts. Please note that the faucet Smart Contract ID is different for all the test networks. Here is a list of faucet ids per network:         * Ethereum Goerli Testnet: 0x8cFCC46A00d6E9e86aacFa74AC5f74e90Fb6994c  * Transfer     * Transfer ownership of ERC721 non-fungible tokens supported by Overledger on Ethereum * Contract Invoke     * Call any function on any contract deployed on Ethereum, Polygon, XDC Network or our Hyperledger Fabric Sandbox
//
prepare_transaction_response_t*
CreateATransactionAPI_prepareTransactionRequest1(apiClient_t *apiClient, char * Authorization , prepare_payment_transaction_request_schema_t * prepare_payment_transaction_request_schema );


