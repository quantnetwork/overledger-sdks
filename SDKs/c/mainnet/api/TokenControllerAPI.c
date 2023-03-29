#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "TokenControllerAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


non_fungible_token_dto_t*
TokenControllerAPI_getNonFungibleToken(apiClient_t *apiClient, char * tokenName , char * technology , char * network )
{
    list_t    *localVarQueryParameters = list_create();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/nonfungibletoken")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/nonfungibletoken");




    // query parameters
    char *keyQuery_tokenName = NULL;
    char * valueQuery_tokenName = NULL;
    keyValuePair_t *keyPairQuery_tokenName = 0;
    if (tokenName)
    {
        keyQuery_tokenName = strdup("tokenName");
        valueQuery_tokenName = strdup((tokenName));
        keyPairQuery_tokenName = keyValuePair_create(keyQuery_tokenName, valueQuery_tokenName);
        list_addElement(localVarQueryParameters,keyPairQuery_tokenName);
    }

    // query parameters
    char *keyQuery_technology = NULL;
    char * valueQuery_technology = NULL;
    keyValuePair_t *keyPairQuery_technology = 0;
    if (technology)
    {
        keyQuery_technology = strdup("technology");
        valueQuery_technology = strdup((technology));
        keyPairQuery_technology = keyValuePair_create(keyQuery_technology, valueQuery_technology);
        list_addElement(localVarQueryParameters,keyPairQuery_technology);
    }

    // query parameters
    char *keyQuery_network = NULL;
    char * valueQuery_network = NULL;
    keyValuePair_t *keyPairQuery_network = 0;
    if (network)
    {
        keyQuery_network = strdup("network");
        valueQuery_network = strdup((network));
        keyPairQuery_network = keyValuePair_create(keyQuery_network, valueQuery_network);
        list_addElement(localVarQueryParameters,keyPairQuery_network);
    }
    list_addElement(localVarHeaderType,"*/*"); //produces
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
        printf("%s\n","OK");
    }
    //nonprimitive not container
    cJSON *TokenControllerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    non_fungible_token_dto_t *elementToReturn = non_fungible_token_dto_parseFromJSON(TokenControllerAPIlocalVarJSON);
    cJSON_Delete(TokenControllerAPIlocalVarJSON);
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
    
    
    list_free(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_tokenName){
        free(keyQuery_tokenName);
        keyQuery_tokenName = NULL;
    }
    if(valueQuery_tokenName){
        free(valueQuery_tokenName);
        valueQuery_tokenName = NULL;
    }
    if(keyPairQuery_tokenName){
        keyValuePair_free(keyPairQuery_tokenName);
        keyPairQuery_tokenName = NULL;
    }
    if(keyQuery_technology){
        free(keyQuery_technology);
        keyQuery_technology = NULL;
    }
    if(valueQuery_technology){
        free(valueQuery_technology);
        valueQuery_technology = NULL;
    }
    if(keyPairQuery_technology){
        keyValuePair_free(keyPairQuery_technology);
        keyPairQuery_technology = NULL;
    }
    if(keyQuery_network){
        free(keyQuery_network);
        keyQuery_network = NULL;
    }
    if(valueQuery_network){
        free(valueQuery_network);
        valueQuery_network = NULL;
    }
    if(keyPairQuery_network){
        keyValuePair_free(keyPairQuery_network);
        keyPairQuery_network = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

