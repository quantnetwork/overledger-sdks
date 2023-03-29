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
#include "../model/prepare_request.h"
#include "../model/token_read_qrc721_response.h"


// Retrieve how many QRC tokens are currently in supply
//
// Submits a query to the Blockchain Network and returns the number of QRC tokens that are currently in circulation after tokens have been minted and burned.
//
token_read_qrc721_response_t*
RetrieveSupplyInformationForAQRCTokenAPI_readQRC721SmartContractCurrentSupply(apiClient_t *apiClient, char * Authorization , char * flowType , prepare_request_t * prepare_request );


