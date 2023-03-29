#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ManageQRC721TokenSupplyAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Prepare a transaction to manage QRC721 token supply
//
// Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \"Burn Tokens\" which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API
//
prepare_transaction_response_t*
ManageQRC721TokenSupplyAPI_prepareSupplyRequest(apiClient_t *apiClient, char * Authorization , prepare_mint_transaction_request_schema_qrc721_t * prepare_mint_transaction_request_schema_qrc721 )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/tokenise/preparation/transaction/qrc721/supply")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/tokenise/preparation/transaction/qrc721/supply");




    // header parameters
    char *keyHeader_Authorization = NULL;
    char * valueHeader_Authorization = 0;
    keyValuePair_t *keyPairHeader_Authorization = 0;
    if (Authorization) {
        keyHeader_Authorization = strdup("Authorization");
        valueHeader_Authorization = strdup((Authorization));
        keyPairHeader_Authorization = keyValuePair_create(keyHeader_Authorization, valueHeader_Authorization);
        list_addElement(localVarHeaderParameters,keyPairHeader_Authorization);
    }


    // Body Param
    cJSON *localVarSingleItemJSON_prepare_mint_transaction_request_schema_qrc721 = NULL;
    if (prepare_mint_transaction_request_schema_qrc721 != NULL)
    {
        //string
        localVarSingleItemJSON_prepare_mint_transaction_request_schema_qrc721 = prepare_mint_transaction_request_schema_qrc721_convertToJSON(prepare_mint_transaction_request_schema_qrc721);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_prepare_mint_transaction_request_schema_qrc721);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","All good!");
    }
    if (apiClient->response_code == 401) {
        printf("%s\n","Unauthorised");
    }
    if (apiClient->response_code == 500) {
        printf("%s\n","Something went wrong on our side");
    }
    //nonprimitive not container
    cJSON *ManageQRC721TokenSupplyAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    prepare_transaction_response_t *elementToReturn = prepare_transaction_response_parseFromJSON(ManageQRC721TokenSupplyAPIlocalVarJSON);
    cJSON_Delete(ManageQRC721TokenSupplyAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    list_free(localVarHeaderParameters);
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    if (keyHeader_Authorization) {
        free(keyHeader_Authorization);
        keyHeader_Authorization = NULL;
    }
    if (valueHeader_Authorization) {
        free(valueHeader_Authorization);
        valueHeader_Authorization = NULL;
    }
    free(keyPairHeader_Authorization);
    if (localVarSingleItemJSON_prepare_mint_transaction_request_schema_qrc721) {
        cJSON_Delete(localVarSingleItemJSON_prepare_mint_transaction_request_schema_qrc721);
        localVarSingleItemJSON_prepare_mint_transaction_request_schema_qrc721 = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

