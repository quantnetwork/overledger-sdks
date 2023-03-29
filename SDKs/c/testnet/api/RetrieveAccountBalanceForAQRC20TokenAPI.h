#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_list.h"
#include "../model/error_response_message.h"
#include "../model/internal_server_error_schema.h"
#include "../model/read_account_balance_request_schema.h"
#include "../model/token_read_qrc20_response.h"


// Retrieve the balance of QRC20 tokens for an account
//
// Submits a query to the Blockchain Network and returns the balance of QRC20 tokens for an account .
//
token_read_qrc20_response_t*
RetrieveAccountBalanceForAQRC20TokenAPI_readQRC20SmartContractBalance(apiClient_t *apiClient, char * Authorization , read_account_balance_request_schema_t * read_account_balance_request_schema );


