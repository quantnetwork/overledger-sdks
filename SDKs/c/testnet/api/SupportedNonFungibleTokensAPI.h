#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_response_message.h"
#include "../model/internal_server_error_schema.h"
#include "../model/non_fungible_token_response.h"


// Retrieve a list of ERC721 and QRC721 tokens
//
// Retrieves a list of non-fungible tokens supported by Overledger and which API's and functions you can use for each. You can retrieve all non-fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC721 or QRC721 as a contract type parameter. You can then filter further by including the resource using technology and network parameters. You can also look for a specific token by passing in the tokenName as a parameter.
//
non_fungible_token_response_t*
SupportedNonFungibleTokensAPI_getAllNonFungibleTokens(apiClient_t *apiClient, char * Authorization , char * contractType , char * technology , char * network , char * tokenName );


