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


// Retrieve which account has contract owner permissions for a QRC token
//
// Submits a query to the Blockchain Network and returns the address that currently has contract owner permissions for a particular QRC token.
//
token_read_qrc721_response_t*
RetrieveContractOwnerInformationOfAQRCTokenAPI_readQRCSmartContractOwner(apiClient_t *apiClient, char * Authorization , char * flowType , prepare_request_t * prepare_request );


