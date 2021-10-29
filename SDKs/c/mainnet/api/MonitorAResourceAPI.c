#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "MonitorAResourceAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Monitor an address for incoming and outgoing transactions
//
// Overledger creates a tracking record for the given address and records information each time the given address receives or sends transactions on the DLT
//
address_monitoring_response_schema_t*
MonitorAResourceAPI_resourceMonitoringAddress(apiClient_t *apiClient, char * Authorization , address_monitoring_request_schema_t * address_monitoring_request_schema )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/resourcemonitoring/address")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/resourcemonitoring/address");




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
    cJSON *localVarSingleItemJSON_address_monitoring_request_schema = NULL;
    if (address_monitoring_request_schema != NULL)
    {
        //string
        localVarSingleItemJSON_address_monitoring_request_schema = address_monitoring_request_schema_convertToJSON(address_monitoring_request_schema);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_address_monitoring_request_schema);
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
    cJSON *MonitorAResourceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    address_monitoring_response_schema_t *elementToReturn = address_monitoring_response_schema_parseFromJSON(MonitorAResourceAPIlocalVarJSON);
    cJSON_Delete(MonitorAResourceAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_address_monitoring_request_schema) {
        cJSON_Delete(localVarSingleItemJSON_address_monitoring_request_schema);
        localVarSingleItemJSON_address_monitoring_request_schema = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Monitor a smart contract for an event
//
// Overledger creates a tracking record for the given smart contract and records information each time a transaction on the DLT triggers a specific event
//
create_smart_contract_monitoring_schema_t*
MonitorAResourceAPI_trackAndSubscribeEvent(apiClient_t *apiClient, char * Authorization , monitor_smart_contract_request_schema_t * monitor_smart_contract_request_schema )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/resourcemonitoring/smartcontractevent")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/resourcemonitoring/smartcontractevent");




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
    cJSON *localVarSingleItemJSON_monitor_smart_contract_request_schema = NULL;
    if (monitor_smart_contract_request_schema != NULL)
    {
        //string
        localVarSingleItemJSON_monitor_smart_contract_request_schema = monitor_smart_contract_request_schema_convertToJSON(monitor_smart_contract_request_schema);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_monitor_smart_contract_request_schema);
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
    cJSON *MonitorAResourceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    create_smart_contract_monitoring_schema_t *elementToReturn = create_smart_contract_monitoring_schema_parseFromJSON(MonitorAResourceAPIlocalVarJSON);
    cJSON_Delete(MonitorAResourceAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_monitor_smart_contract_request_schema) {
        cJSON_Delete(localVarSingleItemJSON_monitor_smart_contract_request_schema);
        localVarSingleItemJSON_monitor_smart_contract_request_schema = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

