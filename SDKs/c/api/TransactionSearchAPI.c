#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "TransactionSearchAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Execute a search for a transaction on a DLT
//
// Takes a request ID and searches for the transaction on the requested DLT
//
execute_search_transaction_response_t*
TransactionSearchAPI_executePreparedSearchRequestTransaction(apiClient_t *apiClient, char * Authorization , char * requestId )
{
    list_t    *localVarQueryParameters = list_create();
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/execution/search/transaction")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/execution/search/transaction");




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
    if (apiClient->response_code == 400) {
        printf("%s\n","Bad Request");
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
    cJSON *TransactionSearchAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    execute_search_transaction_response_t *elementToReturn = execute_search_transaction_response_parseFromJSON(TransactionSearchAPIlocalVarJSON);
    cJSON_Delete(TransactionSearchAPIlocalVarJSON);
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

// Prepare a search for a transaction on a DLT
//
// Searches for and returns data on transactions on a particular DLT. Returns a request ID for executing a transaction search on the requested DLT
//
prepare_search_response_schema_t*
TransactionSearchAPI_prepareSearchRequest(apiClient_t *apiClient, char * Authorization , char * transactionId , prepare_search_schema_t * prepare_search_schema )
{
    list_t    *localVarQueryParameters = list_create();
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/preparation/search/transaction")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/preparation/search/transaction");




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
    char *keyQuery_transactionId = NULL;
    char * valueQuery_transactionId = NULL;
    keyValuePair_t *keyPairQuery_transactionId = 0;
    if (transactionId)
    {
        keyQuery_transactionId = strdup("transactionId");
        valueQuery_transactionId = strdup((transactionId));
        keyPairQuery_transactionId = keyValuePair_create(keyQuery_transactionId, valueQuery_transactionId);
        list_addElement(localVarQueryParameters,keyPairQuery_transactionId);
    }

    // Body Param
    cJSON *localVarSingleItemJSON_prepare_search_schema = NULL;
    if (prepare_search_schema != NULL)
    {
        //string
        localVarSingleItemJSON_prepare_search_schema = prepare_search_schema_convertToJSON(prepare_search_schema);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_prepare_search_schema);
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
    cJSON *TransactionSearchAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    prepare_search_response_schema_t *elementToReturn = prepare_search_response_schema_parseFromJSON(TransactionSearchAPIlocalVarJSON);
    cJSON_Delete(TransactionSearchAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_prepare_search_schema) {
        cJSON_Delete(localVarSingleItemJSON_prepare_search_schema);
        localVarSingleItemJSON_prepare_search_schema = NULL;
    }
    free(localVarBodyParameters);
    if(keyQuery_transactionId){
        free(keyQuery_transactionId);
        keyQuery_transactionId = NULL;
    }
    if(valueQuery_transactionId){
        free(valueQuery_transactionId);
        valueQuery_transactionId = NULL;
    }
    if(keyPairQuery_transactionId){
        keyValuePair_free(keyPairQuery_transactionId);
        keyPairQuery_transactionId = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

