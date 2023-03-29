#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_list.h"
#include "../model/internal_server_error_schema.h"
#include "../model/prepare_mint_transaction_request_schema_qrc721.h"
#include "../model/prepare_transaction_response.h"


// Prepare a transaction to manage QRC721 token supply
//
// Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \"Burn Tokens\" which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API
//
prepare_transaction_response_t*
ManageQRC721TokenSupplyAPI_prepareSupplyRequest(apiClient_t *apiClient, char * Authorization , prepare_mint_transaction_request_schema_qrc721_t * prepare_mint_transaction_request_schema_qrc721 );


