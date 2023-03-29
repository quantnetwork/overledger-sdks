#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "MDAppTransactionQueryAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve information about a specific transaction created by your application in Overledger
//
// Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
//
overledger_transaction_response_schema_t*
MDAppTransactionQueryAPI_getOvlTransactionByTxId(apiClient_t *apiClient, char * Authorization , char * overledgertransactionid )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/mdapptransaction/{overledgertransactionid}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/mdapptransaction/{overledgertransactionid}");


    // Path Params
    long sizeOfPathParams_overledgertransactionid = strlen(overledgertransactionid)+3 + strlen("{ overledgertransactionid }");
    if(overledgertransactionid == NULL) {
        goto end;
    }
    char* localVarToReplace_overledgertransactionid = malloc(sizeOfPathParams_overledgertransactionid);
    sprintf(localVarToReplace_overledgertransactionid, "{%s}", "overledgertransactionid");

    localVarPath = strReplace(localVarPath, localVarToReplace_overledgertransactionid, overledgertransactionid);



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

    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

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
    cJSON *MDAppTransactionQueryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    overledger_transaction_response_schema_t *elementToReturn = overledger_transaction_response_schema_parseFromJSON(MDAppTransactionQueryAPIlocalVarJSON);
    cJSON_Delete(MDAppTransactionQueryAPIlocalVarJSON);
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
    
    free(localVarPath);
    free(localVarToReplace_overledgertransactionid);
    if (keyHeader_Authorization) {
        free(keyHeader_Authorization);
        keyHeader_Authorization = NULL;
    }
    if (valueHeader_Authorization) {
        free(valueHeader_Authorization);
        valueHeader_Authorization = NULL;
    }
    free(keyPairHeader_Authorization);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve a list of transactions created by your application in Overledger
//
// Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
//
list_t*
MDAppTransactionQueryAPI_getOvlTransactionsByClientId(apiClient_t *apiClient, char * Authorization , int offset , int length )
{
    list_t    *localVarQueryParameters = list_create();
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/mdapptransactions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/mdapptransactions");




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
    char *keyQuery_offset = NULL;
    char * valueQuery_offset = NULL;
    keyValuePair_t *keyPairQuery_offset = 0;
    if (offset)
    {
        keyQuery_offset = strdup("offset");
        valueQuery_offset = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_offset, MAX_NUMBER_LENGTH, "%d", offset);
        keyPairQuery_offset = keyValuePair_create(keyQuery_offset, valueQuery_offset);
        list_addElement(localVarQueryParameters,keyPairQuery_offset);
    }

    // query parameters
    char *keyQuery_length = NULL;
    char * valueQuery_length = NULL;
    keyValuePair_t *keyPairQuery_length = 0;
    if (length)
    {
        keyQuery_length = strdup("length");
        valueQuery_length = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_length, MAX_NUMBER_LENGTH, "%d", length);
        keyPairQuery_length = keyValuePair_create(keyQuery_length, valueQuery_length);
        list_addElement(localVarQueryParameters,keyPairQuery_length);
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
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","All good!");
    }
    if (apiClient->response_code == 401) {
        printf("%s\n","Unauthorised");
    }
    if (apiClient->response_code == 500) {
        printf("%s\n","Something went wrong on our side");
    }
    cJSON *MDAppTransactionQueryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(MDAppTransactionQueryAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_create();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, MDAppTransactionQueryAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( MDAppTransactionQueryAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
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
    if(keyQuery_offset){
        free(keyQuery_offset);
        keyQuery_offset = NULL;
    }
    if(valueQuery_offset){
        free(valueQuery_offset);
        valueQuery_offset = NULL;
    }
    if(keyPairQuery_offset){
        keyValuePair_free(keyPairQuery_offset);
        keyPairQuery_offset = NULL;
    }
    if(keyQuery_length){
        free(keyQuery_length);
        keyQuery_length = NULL;
    }
    if(valueQuery_length){
        free(valueQuery_length);
        valueQuery_length = NULL;
    }
    if(keyPairQuery_length){
        keyValuePair_free(keyPairQuery_length);
        keyPairQuery_length = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

