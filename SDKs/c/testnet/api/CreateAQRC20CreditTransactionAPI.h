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


// Prepare a QRC20 token credit transaction for signing
//
// Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is \"Create Credit\" which will allow you to make a payment to another specified account.
//
prepare_transaction_response_t*
CreateAQRC20CreditTransactionAPI_prepareCreditRequest(apiClient_t *apiClient, char * Authorization , prepare_credit_transaction_request_schema_t * prepare_credit_transaction_request_schema );


