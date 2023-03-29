#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "CreateAQRC721TokenCollectionTransactionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Prepare a QRC721 token collection transaction for signing
//
// Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are “Approve Asset Collect” and “Collect Asset”. The “Approve Asset Collect” transaction type will allow you to approve someone to subsequently make a transaction that takes the NFT from your address into their own. The “Collect Asset” transaction type will create the transaction to pull the approved NFT from an account into the receiving account. Successfully prepared transactions can then be executed using the /execution/transaction API.
//
prepare_transaction_response_t*
CreateAQRC721TokenCollectionTransactionAPI_prepareCollectRequest(apiClient_t *apiClient, char * Authorization , prepare_payment_transaction_request_schema_t * prepare_payment_transaction_request_schema )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/tokenise/preparation/transaction/qrc721/collect")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/tokenise/preparation/transaction/qrc721/collect");




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
    cJSON *localVarSingleItemJSON_prepare_payment_transaction_request_schema = NULL;
    if (prepare_payment_transaction_request_schema != NULL)
    {
        //string
        localVarSingleItemJSON_prepare_payment_transaction_request_schema = prepare_payment_transaction_request_schema_convertToJSON(prepare_payment_transaction_request_schema);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_prepare_payment_transaction_request_schema);
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
    cJSON *CreateAQRC721TokenCollectionTransactionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    prepare_transaction_response_t *elementToReturn = prepare_transaction_response_parseFromJSON(CreateAQRC721TokenCollectionTransactionAPIlocalVarJSON);
    cJSON_Delete(CreateAQRC721TokenCollectionTransactionAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_prepare_payment_transaction_request_schema) {
        cJSON_Delete(localVarSingleItemJSON_prepare_payment_transaction_request_schema);
        localVarSingleItemJSON_prepare_payment_transaction_request_schema = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

