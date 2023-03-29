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
#include "../model/prepare_add_secondary_account_request_schema.h"
#include "../model/prepare_transaction_response.h"


// Execute a transaction on a DLT
//
// Takes a request ID and submits a signed transaction to the requested DLT.
//
execute_transaction_response_t*
CreateAndPayFromAQRC20SharedAccountAPI_executePreparedRequestTransaction(apiClient_t *apiClient, char * Authorization , execute_transaction_request_t * execute_transaction_request );


// Prepare a request for a QRC20 shared account
//
// Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \"Remove Account\" which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API
//
prepare_transaction_response_t*
CreateAndPayFromAQRC20SharedAccountAPI_prepareSecondaryOwnerRequest(apiClient_t *apiClient, char * Authorization , prepare_add_secondary_account_request_schema_t * prepare_add_secondary_account_request_schema );


