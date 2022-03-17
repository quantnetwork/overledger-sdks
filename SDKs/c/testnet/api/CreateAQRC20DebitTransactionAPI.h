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
#include "../model/prepare_credit_transaction_request_schema.h"
#include "../model/prepare_transaction_response.h"


// Prepare a QRC20 token debit transaction for signing
//
// Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are \"Approve Debit\" and \"Create Debit\". The 'Approve Debit' transaction type will allow you to approve someone to make a pull payment from your account and the \"Create Debit\" transaction type will create the payment to pull the approved amount from an account.
//
prepare_transaction_response_t*
CreateAQRC20DebitTransactionAPI_prepareDebitRequest(apiClient_t *apiClient, char * Authorization , prepare_credit_transaction_request_schema_t * prepare_credit_transaction_request_schema );


