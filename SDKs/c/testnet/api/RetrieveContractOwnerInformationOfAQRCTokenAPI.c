#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "RetrieveContractOwnerInformationOfAQRCTokenAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve which account has contract owner permissions for a QRC token
//
// Submits a query to the Blockchain Network and returns the address that currently has contract owner permissions for a particular QRC token.
//
token_read_qrc721_response_t*
RetrieveContractOwnerInformationOfAQRCTokenAPI_readQRCSmartContractOwner(apiClient_t *apiClient, char * Authorization , char * flowType , prepare_request_t * prepare_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/tokenise/tokens/{flowType}/contract-owner")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/tokenise/tokens/{flowType}/contract-owner");


    // Path Params
    long sizeOfPathParams_flowType = strlen(flowType)+3 + strlen("{ flowType }");
    if(flowType == NULL) {
        goto end;
    }
    char* localVarToReplace_flowType = malloc(sizeOfPathParams_flowType);
    sprintf(localVarToReplace_flowType, "{%s}", "flowType");

    localVarPath = strReplace(localVarPath, localVarToReplace_flowType, flowType);



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
    cJSON *localVarSingleItemJSON_prepare_request = NULL;
    if (prepare_request != NULL)
    {
        //string
        localVarSingleItemJSON_prepare_request = prepare_request_convertToJSON(prepare_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_prepare_request);
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
    cJSON *RetrieveContractOwnerInformationOfAQRCTokenAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    token_read_qrc721_response_t *elementToReturn = token_read_qrc721_response_parseFromJSON(RetrieveContractOwnerInformationOfAQRCTokenAPIlocalVarJSON);
    cJSON_Delete(RetrieveContractOwnerInformationOfAQRCTokenAPIlocalVarJSON);
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
    free(localVarToReplace_flowType);
    if (keyHeader_Authorization) {
        free(keyHeader_Authorization);
        keyHeader_Authorization = NULL;
    }
    if (valueHeader_Authorization) {
        free(valueHeader_Authorization);
        valueHeader_Authorization = NULL;
    }
    free(keyPairHeader_Authorization);
    if (localVarSingleItemJSON_prepare_request) {
        cJSON_Delete(localVarSingleItemJSON_prepare_request);
        localVarSingleItemJSON_prepare_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

