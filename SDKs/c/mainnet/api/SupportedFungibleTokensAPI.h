#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_details.h"
#include "../model/error_list.h"
#include "../model/fungible_token_response_dto.h"
#include "../model/internal_server_error_schema.h"
#include "../model/location.h"


// Retrieve a list of ERC20 and QRC20 tokens
//
// Retrieves a list of fungible tokens supported by Overledger and which APIs and functions you can use for each. You can retrieve all fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC20 or QRC20 as a contract type parameter. You can then filter further by including the resource using the technology and network parameters. You can also look for a specific token by passing in the unit as a parameter.
//
fungible_token_response_dto_t*
SupportedFungibleTokensAPI_getTokens(apiClient_t *apiClient, location_t * location , char * contractType , char * unit );


