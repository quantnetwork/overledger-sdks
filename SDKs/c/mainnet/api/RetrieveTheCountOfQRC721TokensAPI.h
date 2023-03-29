#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_list.h"
#include "../model/internal_server_error_schema.h"
#include "../model/read_balance_request_schema.h"
#include "../model/token_read_qrc721_response.h"


// Retrieve the count of a QRC721 token for a particular account
//
// Submits a query to the DLN and returns the number of QRC721 tokens held by the given account ID
//
token_read_qrc721_response_t*
RetrieveTheCountOfQRC721TokensAPI_getTokenCount(apiClient_t *apiClient, char * Authorization , read_balance_request_schema_t * read_balance_request_schema );


