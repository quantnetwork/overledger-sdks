#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_list.h"
#include "../model/internal_server_error_schema.h"
#include "../model/prepare_payment_transaction_request_schema.h"
#include "../model/prepare_transaction_response.h"


// Prepare a QRC721 token collection transaction for signing
//
// Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are “Approve Asset Collect” and “Collect Asset”. The “Approve Asset Collect” transaction type will allow you to approve someone to subsequently make a transaction that takes the NFT from your address into their own. The “Collect Asset” transaction type will create the transaction to pull the approved NFT from an account into the receiving account. Successfully prepared transactions can then be executed using the /execution/transaction API.
//
prepare_transaction_response_t*
CreateAQRC721TokenCollectionTransactionAPI_prepareCollectRequest(apiClient_t *apiClient, char * Authorization , prepare_payment_transaction_request_schema_t * prepare_payment_transaction_request_schema );


