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
#include "../model/read_approved_account_request_schema.h"
#include "../model/token_read_qrc721_response.h"


// Retrieve which account is approved to collect a QRC721 token
//
// Submits a query to the DLN and returns the address that is approved to collect a particular QRC721 token ID.
//
token_read_qrc721_response_t*
RetrieveApprovedAccountInformationOfAQRC721TokenAPI_readQRC721SmartContractApprovedAccount(apiClient_t *apiClient, char * Authorization , read_approved_account_request_schema_t * read_approved_account_request_schema );


