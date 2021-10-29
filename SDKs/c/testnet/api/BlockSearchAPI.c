#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "BlockSearchAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Execute a search for a block on a DLT
//
// Takes a request ID and searches for the block on the requested DLT based on the parameters specified in the prepare request
//
execute_search_block_response_t*
BlockSearchAPI_executePreparedSearchRequestBlock(apiClient_t *apiClient, char * Authorization , char * requestId )
{
    list_t    *localVarQueryParameters = list_create();
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/execution/search/block")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/execution/search/block");




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
    cJSON *BlockSearchAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    execute_search_block_response_t *elementToReturn = execute_search_block_response_parseFromJSON(BlockSearchAPIlocalVarJSON);
    cJSON_Delete(BlockSearchAPIlocalVarJSON);
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

// Prepare Search Block by Block Id.
//
// Returns a request ID for executing a block search on the requested DLT. Block searches can be prepared based on the Block ID, Block Number or for the latest block at the time
//
prepare_search_response_schema_t*
BlockSearchAPI_prepareSearchBlockByBlockId(apiClient_t *apiClient, char * Authorization , char * blockId , prepare_search_schema_t * prepare_search_schema )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/preparation/search/block/{blockId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/preparation/search/block/{blockId}");


    // Path Params
    long sizeOfPathParams_blockId = strlen(blockId)+3 + strlen("{ blockId }");
    if(blockId == NULL) {
        goto end;
    }
    char* localVarToReplace_blockId = malloc(sizeOfPathParams_blockId);
    sprintf(localVarToReplace_blockId, "{%s}", "blockId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blockId, blockId);



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
    cJSON *BlockSearchAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    prepare_search_response_schema_t *elementToReturn = prepare_search_response_schema_parseFromJSON(BlockSearchAPIlocalVarJSON);
    cJSON_Delete(BlockSearchAPIlocalVarJSON);
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
    free(localVarToReplace_blockId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

