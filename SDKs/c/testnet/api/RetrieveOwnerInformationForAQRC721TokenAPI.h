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
#include "../model/read_token_owner_request_schema.h"
#include "../model/token_read_qrc721_response.h"


// Retrieve which account currently owns a specific QRC721 token
//
// Submits a query to the DLN and returns the address that currently has owns a particular QRC721 token.
//
token_read_qrc721_response_t*
RetrieveOwnerInformationForAQRC721TokenAPI_readQRC721SmartContractTokenOwner(apiClient_t *apiClient, char * Authorization , read_token_owner_request_schema_t * read_token_owner_request_schema );


