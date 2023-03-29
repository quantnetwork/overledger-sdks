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
#include "../model/read_approved_account_allowance_request_schema.h"
#include "../model/token_read_qrc20_response.h"


// Retrieve how many QRC20 tokens an address is allowed to debit
//
// Submits a query to the Blockchain Network and returns the number of QRC20 tokens a particular account is allowed to debit from another account
//
token_read_qrc20_response_t*
RetrieveApprovedAccountAllowanceForAQRC20TokenAPI_readApprovedDebitAmount(apiClient_t *apiClient, char * Authorization , read_approved_account_allowance_request_schema_t * read_approved_account_allowance_request_schema );


