#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "RetrieveAccountBalanceForAQRC20TokenAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve the balance of QRC20 tokens for an account
//
// Submits a query to the Blockchain Network and returns the balance of QRC20 tokens for an account .
//
token_read_qrc20_response_t*
RetrieveAccountBalanceForAQRC20TokenAPI_readQRC20SmartContractBalance(apiClient_t *apiClient, char * Authorization , read_account_balance_request_schema_t * read_account_balance_request_schema )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/tokenise/tokens/qrc20/account-balance")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/tokenise/tokens/qrc20/account-balance");




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
    cJSON *localVarSingleItemJSON_read_account_balance_request_schema = NULL;
    if (read_account_balance_request_schema != NULL)
    {
        //string
        localVarSingleItemJSON_read_account_balance_request_schema = read_account_balance_request_schema_convertToJSON(read_account_balance_request_schema);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_read_account_balance_request_schema);
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
    cJSON *RetrieveAccountBalanceForAQRC20TokenAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    token_read_qrc20_response_t *elementToReturn = token_read_qrc20_response_parseFromJSON(RetrieveAccountBalanceForAQRC20TokenAPIlocalVarJSON);
    cJSON_Delete(RetrieveAccountBalanceForAQRC20TokenAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_read_account_balance_request_schema) {
        cJSON_Delete(localVarSingleItemJSON_read_account_balance_request_schema);
        localVarSingleItemJSON_read_account_balance_request_schema = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

