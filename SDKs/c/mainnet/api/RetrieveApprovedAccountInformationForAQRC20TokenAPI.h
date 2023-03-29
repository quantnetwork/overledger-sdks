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
#include "../model/read_contract_owner_request_schema.h"
#include "../model/token_read_qrc20_response.h"


// Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.
//
// Submits a query to the Blockchain Network and returns whether an account is approved to make payments on behalf of another account for a particular QRC20 token.
//
token_read_qrc20_response_t*
RetrieveApprovedAccountInformationForAQRC20TokenAPI_readQRC20SecondaryAccountOwner(apiClient_t *apiClient, char * Authorization , read_contract_owner_request_schema_t * read_contract_owner_request_schema );


