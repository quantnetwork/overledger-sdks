#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_details.h"
#include "../model/error_list.h"
#include "../model/execute_search_block_response.h"
#include "../model/internal_server_error_schema.h"
#include "../model/prepare_search_response_schema.h"
#include "../model/prepare_search_schema.h"


// Execute a search for a block on a DLT
//
// Takes a request ID and searches for the block on the requested DLT based on the parameters specified in the prepare request
//
execute_search_block_response_t*
BlockSearchAPI_executePreparedSearchRequestBlock(apiClient_t *apiClient, char * Authorization , char * requestId );


// Prepare Search Block by Block Id.
//
// Returns a request ID for executing a block search on the requested DLT. Block searches can be prepared based on the Block ID, Block Number or for the latest block at the time
//
prepare_search_response_schema_t*
BlockSearchAPI_prepareSearchBlockByBlockId(apiClient_t *apiClient, char * Authorization , char * blockId , prepare_search_schema_t * prepare_search_schema );


