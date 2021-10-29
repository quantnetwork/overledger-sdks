#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_details.h"
#include "../model/error_list.h"
#include "../model/internal_server_error_schema.h"
#include "../model/overledger_transaction_response_schema.h"


// Retrieve information about a specific transaction created by your application in Overledger
//
// Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
//
overledger_transaction_response_schema_t*
MDappTransactionQueryAPI_getOvlTransactionByTxId(apiClient_t *apiClient, char * Authorization , char * overledgertransactionid );


// Retrieve a list of transactions created by your application in Overledger
//
// Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
//
list_t*
MDappTransactionQueryAPI_getOvlTransactionsByClientId(apiClient_t *apiClient, char * Authorization , int offset , int length );


