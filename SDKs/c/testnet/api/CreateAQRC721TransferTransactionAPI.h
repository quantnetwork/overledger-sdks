#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_details.h"
#include "../model/error_list.h"
#include "../model/internal_server_error_schema.h"
#include "../model/prepare_payment_transaction_request_schema.h"
#include "../model/prepare_transaction_response.h"


// Prepare a QRC721 token transfer transaction for signing
//
// Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is “Create Transfer” which will allow you to transfer a QRC721 token to another specified account. Successfully prepared transactions can then be executed using the /execution/transaction API.
//
prepare_transaction_response_t*
CreateAQRC721TransferTransactionAPI_prepareTransactionRequest(apiClient_t *apiClient, char * Authorization , prepare_payment_transaction_request_schema_t * prepare_payment_transaction_request_schema );


