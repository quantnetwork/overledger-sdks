#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "FungibleTokenControllerAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


erc20_dto_t*
FungibleTokenControllerAPI_getToken(apiClient_t *apiClient, char * technology , char * network , char * unit )
{
    list_t    *localVarQueryParameters = list_create();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/token/fungible")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/token/fungible");




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
    cJSON *FungibleTokenControllerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    erc20_dto_t *elementToReturn = erc20_dto_parseFromJSON(FungibleTokenControllerAPIlocalVarJSON);
    cJSON_Delete(FungibleTokenControllerAPIlocalVarJSON);
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

