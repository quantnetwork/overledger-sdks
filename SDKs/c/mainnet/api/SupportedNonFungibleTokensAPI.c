#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SupportedNonFungibleTokensAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve a list of ERC721 and QRC721 tokens
//
// Retrieves a list of non-fungible tokens supported by Overledger and which API's and functions you can use for each. You can retrieve all non-fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC721 or QRC721 as a contract type parameter. You can then filter further by including the resource using technology and network parameters. You can also look for a specific token by passing in the tokenName as a parameter.
//
non_fungible_token_response_t*
SupportedNonFungibleTokensAPI_getAllNonFungibleTokens(apiClient_t *apiClient, char * Authorization , char * contractType , char * technology , char * network , char * tokenName )
{
    list_t    *localVarQueryParameters = list_create();
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/tokenise/tokens/nonfungible")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/tokenise/tokens/nonfungible");




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
    char *keyQuery_contractType = NULL;
    char * valueQuery_contractType = NULL;
    keyValuePair_t *keyPairQuery_contractType = 0;
    if (contractType)
    {
        keyQuery_contractType = strdup("contractType");
        valueQuery_contractType = strdup((contractType));
        keyPairQuery_contractType = keyValuePair_create(keyQuery_contractType, valueQuery_contractType);
        list_addElement(localVarQueryParameters,keyPairQuery_contractType);
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
    cJSON *SupportedNonFungibleTokensAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    non_fungible_token_response_t *elementToReturn = non_fungible_token_response_parseFromJSON(SupportedNonFungibleTokensAPIlocalVarJSON);
    cJSON_Delete(SupportedNonFungibleTokensAPIlocalVarJSON);
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
    if(keyQuery_contractType){
        free(keyQuery_contractType);
        keyQuery_contractType = NULL;
    }
    if(valueQuery_contractType){
        free(valueQuery_contractType);
        valueQuery_contractType = NULL;
    }
    if(keyPairQuery_contractType){
        keyValuePair_free(keyPairQuery_contractType);
        keyPairQuery_contractType = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

