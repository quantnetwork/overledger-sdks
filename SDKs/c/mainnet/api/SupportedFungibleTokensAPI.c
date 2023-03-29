#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SupportedFungibleTokensAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve a list of ERC20 and QRC20 tokens
//
// Retrieves a list of fungible tokens supported by Overledger and which APIs and functions you can use for each. You can retrieve all fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC20 or QRC20 as a contract type parameter. You can then filter further by including the resource using the technology and network parameters. You can also look for a specific token by passing in the unit as a parameter.
//
fungible_token_response_dto_t*
SupportedFungibleTokensAPI_getTokens(apiClient_t *apiClient, location_t * location , char * contractType , char * unit )
{
    list_t    *localVarQueryParameters = list_create();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/tokens/fungible")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/tokens/fungible");




    // query parameters
    char *keyQuery_location = NULL;
    location_t * valueQuery_location ;
    keyValuePair_t *keyPairQuery_location = 0;
    if (location)
    {
        keyQuery_location = strdup("location");
        valueQuery_location = (location);
        keyPairQuery_location = keyValuePair_create(keyQuery_location, &valueQuery_location);
        list_addElement(localVarQueryParameters,keyPairQuery_location);
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
    char *keyQuery_unit = NULL;
    char * valueQuery_unit = NULL;
    keyValuePair_t *keyPairQuery_unit = 0;
    if (unit)
    {
        keyQuery_unit = strdup("unit");
        valueQuery_unit = strdup((unit));
        keyPairQuery_unit = keyValuePair_create(keyQuery_unit, valueQuery_unit);
        list_addElement(localVarQueryParameters,keyPairQuery_unit);
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
    cJSON *SupportedFungibleTokensAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    fungible_token_response_dto_t *elementToReturn = fungible_token_response_dto_parseFromJSON(SupportedFungibleTokensAPIlocalVarJSON);
    cJSON_Delete(SupportedFungibleTokensAPIlocalVarJSON);
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
    if(keyQuery_location){
        free(keyQuery_location);
        keyQuery_location = NULL;
    }
    if(keyPairQuery_location){
        keyValuePair_free(keyPairQuery_location);
        keyPairQuery_location = NULL;
    }
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
    if(keyQuery_unit){
        free(keyQuery_unit);
        keyQuery_unit = NULL;
    }
    if(valueQuery_unit){
        free(valueQuery_unit);
        valueQuery_unit = NULL;
    }
    if(keyPairQuery_unit){
        keyValuePair_free(keyPairQuery_unit);
        keyPairQuery_unit = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

