#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "RetrieveURIInformationForAQRC721TokenAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve the URI for a specific QRC721 token
//
// Submits a query to the DLN and returns the URI that is assigned to a particular QRC721 token
//
token_read_qrc721_response_t*
RetrieveURIInformationForAQRC721TokenAPI_readQRC721SmartContractUri(apiClient_t *apiClient, char * Authorization , read_approved_account_request_schema_t * read_approved_account_request_schema )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/tokenise/tokens/qrc721/token-uri")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/tokenise/tokens/qrc721/token-uri");




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
    cJSON *localVarSingleItemJSON_read_approved_account_request_schema = NULL;
    if (read_approved_account_request_schema != NULL)
    {
        //string
        localVarSingleItemJSON_read_approved_account_request_schema = read_approved_account_request_schema_convertToJSON(read_approved_account_request_schema);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_read_approved_account_request_schema);
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
    if (apiClient->response_code == 400) {
        printf("%s\n","Bad Request");
    }
    if (apiClient->response_code == 401) {
        printf("%s\n","Unauthorised");
    }
    if (apiClient->response_code == 500) {
        printf("%s\n","Something went wrong on our side");
    }
    //nonprimitive not container
    cJSON *RetrieveURIInformationForAQRC721TokenAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    token_read_qrc721_response_t *elementToReturn = token_read_qrc721_response_parseFromJSON(RetrieveURIInformationForAQRC721TokenAPIlocalVarJSON);
    cJSON_Delete(RetrieveURIInformationForAQRC721TokenAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_read_approved_account_request_schema) {
        cJSON_Delete(localVarSingleItemJSON_read_approved_account_request_schema);
        localVarSingleItemJSON_read_approved_account_request_schema = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

