#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SmartContractSearchAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Execute a read of a smart contract on a DLT
//
// Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.
//
execute_smart_contract_read_response_schema_t*
SmartContractSearchAPI_executePreparedSearchRequest(apiClient_t *apiClient, char * Authorization , char * requestId )
{
    list_t    *localVarQueryParameters = list_create();
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/execution/search/smartcontract")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/execution/search/smartcontract");




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


    // query parameters
    char *keyQuery_requestId = NULL;
    char * valueQuery_requestId = NULL;
    keyValuePair_t *keyPairQuery_requestId = 0;
    if (requestId)
    {
        keyQuery_requestId = strdup("requestId");
        valueQuery_requestId = strdup((requestId));
        keyPairQuery_requestId = keyValuePair_create(keyQuery_requestId, valueQuery_requestId);
        list_addElement(localVarQueryParameters,keyPairQuery_requestId);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
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
    if (apiClient->response_code == 404) {
        printf("%s\n","Not Found");
    }
    if (apiClient->response_code == 500) {
        printf("%s\n","Something went wrong on our side");
    }
    //nonprimitive not container
    cJSON *SmartContractSearchAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    execute_smart_contract_read_response_schema_t *elementToReturn = execute_smart_contract_read_response_schema_parseFromJSON(SmartContractSearchAPIlocalVarJSON);
    cJSON_Delete(SmartContractSearchAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_free(localVarQueryParameters);
    list_free(localVarHeaderParameters);
    
    list_free(localVarHeaderType);
    
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
    if(keyQuery_requestId){
        free(keyQuery_requestId);
        keyQuery_requestId = NULL;
    }
    if(valueQuery_requestId){
        free(valueQuery_requestId);
        valueQuery_requestId = NULL;
    }
    if(keyPairQuery_requestId){
        keyValuePair_free(keyPairQuery_requestId);
        keyPairQuery_requestId = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Prepare a read of a smart contract on a DLT
//
// Returns a request ID for executing a smart contract read on Ethereum.
//
prepare_search_response_schema_t*
SmartContractSearchAPI_prepareSmartContractQueryRequest(apiClient_t *apiClient, char * Authorization , prepare_search_smart_contract_request_schema_t * prepare_search_smart_contract_request_schema )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/preparation/search/smartcontract")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/preparation/search/smartcontract");




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
    cJSON *localVarSingleItemJSON_prepare_search_smart_contract_request_schema = NULL;
    if (prepare_search_smart_contract_request_schema != NULL)
    {
        //string
        localVarSingleItemJSON_prepare_search_smart_contract_request_schema = prepare_search_smart_contract_request_schema_convertToJSON(prepare_search_smart_contract_request_schema);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_prepare_search_smart_contract_request_schema);
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
    cJSON *SmartContractSearchAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    prepare_search_response_schema_t *elementToReturn = prepare_search_response_schema_parseFromJSON(SmartContractSearchAPIlocalVarJSON);
    cJSON_Delete(SmartContractSearchAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_prepare_search_smart_contract_request_schema) {
        cJSON_Delete(localVarSingleItemJSON_prepare_search_smart_contract_request_schema);
        localVarSingleItemJSON_prepare_search_smart_contract_request_schema = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

