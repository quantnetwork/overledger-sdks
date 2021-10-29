#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ManageMonitoredResourcesAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Stop monitoring a smart contract
//
// Deletes the tracking record in Overledger to stop Overledger from recording updates for a smart contract based on the given Resource Monitoring ID
//
smart_contract_monitoring_schema_t*
ManageMonitoredResourcesAPI_deleteEventMonitoring(apiClient_t *apiClient, char * Authorization , char * resourceMonitoringId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId}");


    // Path Params
    long sizeOfPathParams_resourceMonitoringId = strlen(resourceMonitoringId)+3 + strlen("{ resourceMonitoringId }");
    if(resourceMonitoringId == NULL) {
        goto end;
    }
    char* localVarToReplace_resourceMonitoringId = malloc(sizeOfPathParams_resourceMonitoringId);
    sprintf(localVarToReplace_resourceMonitoringId, "{%s}", "resourceMonitoringId");

    localVarPath = strReplace(localVarPath, localVarToReplace_resourceMonitoringId, resourceMonitoringId);



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
                    "DELETE");

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
    cJSON *ManageMonitoredResourcesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    smart_contract_monitoring_schema_t *elementToReturn = smart_contract_monitoring_schema_parseFromJSON(ManageMonitoredResourcesAPIlocalVarJSON);
    cJSON_Delete(ManageMonitoredResourcesAPIlocalVarJSON);
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
    free(localVarToReplace_resourceMonitoringId);
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

// Stop monitoring an address
//
// Deletes the tracking record in Overledger to stop Overledger from recording updates for an address based on the given Resource Monitoring ID
//
delete_resource_monitoring_address_schema_t*
ManageMonitoredResourcesAPI_deleteResourceMonitoringAddress(apiClient_t *apiClient, char * Authorization , char * resourceMonitoringId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/resourcemonitoring/address/{resourceMonitoringId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/resourcemonitoring/address/{resourceMonitoringId}");


    // Path Params
    long sizeOfPathParams_resourceMonitoringId = strlen(resourceMonitoringId)+3 + strlen("{ resourceMonitoringId }");
    if(resourceMonitoringId == NULL) {
        goto end;
    }
    char* localVarToReplace_resourceMonitoringId = malloc(sizeOfPathParams_resourceMonitoringId);
    sprintf(localVarToReplace_resourceMonitoringId, "{%s}", "resourceMonitoringId");

    localVarPath = strReplace(localVarPath, localVarToReplace_resourceMonitoringId, resourceMonitoringId);



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
                    "DELETE");

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
    cJSON *ManageMonitoredResourcesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    delete_resource_monitoring_address_schema_t *elementToReturn = delete_resource_monitoring_address_schema_parseFromJSON(ManageMonitoredResourcesAPIlocalVarJSON);
    cJSON_Delete(ManageMonitoredResourcesAPIlocalVarJSON);
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
    free(localVarToReplace_resourceMonitoringId);
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

// Retrieve a list of addresses being monitored
//
// Returns a list of addresses being monitored for your application and the corresponding Resource Monitoring ID
//
list_t*
ManageMonitoredResourcesAPI_getListOfAddresses(apiClient_t *apiClient, char * Authorization )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/resourcemonitoring/addresses")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/resourcemonitoring/addresses");




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
    if (apiClient->response_code == 500) {
        printf("%s\n","Something went wrong on our side");
    }
    cJSON *ManageMonitoredResourcesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(ManageMonitoredResourcesAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_create();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, ManageMonitoredResourcesAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( ManageMonitoredResourcesAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve a list of all resources being monitored
//
// Returns a list of all of the resources being monitored for your application and the corresponding Resource Monitoring ID
//
list_t*
ManageMonitoredResourcesAPI_getListOfResources(apiClient_t *apiClient, char * Authorization )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/resourcemonitoring")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/resourcemonitoring");




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
    if (apiClient->response_code == 500) {
        printf("%s\n","Something went wrong on our side");
    }
    cJSON *ManageMonitoredResourcesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(ManageMonitoredResourcesAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_create();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, ManageMonitoredResourcesAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( ManageMonitoredResourcesAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve a list of smart contracts being monitored
//
// Returns a list of smart contracts being monitored for your application and the corresponding Resource Monitoring ID
//
list_t*
ManageMonitoredResourcesAPI_getListOfSmartContractEvents(apiClient_t *apiClient, char * Authorization )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/resourcemonitoring/smartcontractevents")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/resourcemonitoring/smartcontractevents");




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
    if (apiClient->response_code == 500) {
        printf("%s\n","Something went wrong on our side");
    }
    cJSON *ManageMonitoredResourcesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(ManageMonitoredResourcesAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_create();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, ManageMonitoredResourcesAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( ManageMonitoredResourcesAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve recorded updates for a specific monitored address
//
// Returns the update information recorded in Overledger for an address being monitored by your application for a given Resource Monitoring ID
//
address_monitoring_details_schema_t*
ManageMonitoredResourcesAPI_getMonitoredAddress(apiClient_t *apiClient, char * Authorization , char * resourceMonitoringId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/resourcemonitoring/address/{resourceMonitoringId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/resourcemonitoring/address/{resourceMonitoringId}");


    // Path Params
    long sizeOfPathParams_resourceMonitoringId = strlen(resourceMonitoringId)+3 + strlen("{ resourceMonitoringId }");
    if(resourceMonitoringId == NULL) {
        goto end;
    }
    char* localVarToReplace_resourceMonitoringId = malloc(sizeOfPathParams_resourceMonitoringId);
    sprintf(localVarToReplace_resourceMonitoringId, "{%s}", "resourceMonitoringId");

    localVarPath = strReplace(localVarPath, localVarToReplace_resourceMonitoringId, resourceMonitoringId);



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
    if (apiClient->response_code == 500) {
        printf("%s\n","Something went wrong on our side");
    }
    //nonprimitive not container
    cJSON *ManageMonitoredResourcesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    address_monitoring_details_schema_t *elementToReturn = address_monitoring_details_schema_parseFromJSON(ManageMonitoredResourcesAPIlocalVarJSON);
    cJSON_Delete(ManageMonitoredResourcesAPIlocalVarJSON);
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
    free(localVarToReplace_resourceMonitoringId);
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

// Retrieve recorded updates for a specific monitored smart contract
//
// Returns the update information recorded in Overledger for asmart contract being monitored by your application for a given Resource Monitoring ID
//
smart_contract_monitoring_details_schema_t*
ManageMonitoredResourcesAPI_getMonitoredSmartContractEventDetails(apiClient_t *apiClient, char * Authorization , char * resourceMonitoringId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId}");


    // Path Params
    long sizeOfPathParams_resourceMonitoringId = strlen(resourceMonitoringId)+3 + strlen("{ resourceMonitoringId }");
    if(resourceMonitoringId == NULL) {
        goto end;
    }
    char* localVarToReplace_resourceMonitoringId = malloc(sizeOfPathParams_resourceMonitoringId);
    sprintf(localVarToReplace_resourceMonitoringId, "{%s}", "resourceMonitoringId");

    localVarPath = strReplace(localVarPath, localVarToReplace_resourceMonitoringId, resourceMonitoringId);



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
    if (apiClient->response_code == 500) {
        printf("%s\n","Something went wrong on our side");
    }
    //nonprimitive not container
    cJSON *ManageMonitoredResourcesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    smart_contract_monitoring_details_schema_t *elementToReturn = smart_contract_monitoring_details_schema_parseFromJSON(ManageMonitoredResourcesAPIlocalVarJSON);
    cJSON_Delete(ManageMonitoredResourcesAPIlocalVarJSON);
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
    free(localVarToReplace_resourceMonitoringId);
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

// Update the monitoring status of a smart contract
//
// Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to be inactive will pause Overledger recording updates for the requested smart contract
//
smart_contract_monitoring_schema_t*
ManageMonitoredResourcesAPI_updateEventMonitoring(apiClient_t *apiClient, char * Authorization , char * resourceMonitoringId , status_update_monitoring_request_schema_t * status_update_monitoring_request_schema )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId}");


    // Path Params
    long sizeOfPathParams_resourceMonitoringId = strlen(resourceMonitoringId)+3 + strlen("{ resourceMonitoringId }");
    if(resourceMonitoringId == NULL) {
        goto end;
    }
    char* localVarToReplace_resourceMonitoringId = malloc(sizeOfPathParams_resourceMonitoringId);
    sprintf(localVarToReplace_resourceMonitoringId, "{%s}", "resourceMonitoringId");

    localVarPath = strReplace(localVarPath, localVarToReplace_resourceMonitoringId, resourceMonitoringId);



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
    cJSON *localVarSingleItemJSON_status_update_monitoring_request_schema = NULL;
    if (status_update_monitoring_request_schema != NULL)
    {
        //string
        localVarSingleItemJSON_status_update_monitoring_request_schema = status_update_monitoring_request_schema_convertToJSON(status_update_monitoring_request_schema);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_status_update_monitoring_request_schema);
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
                    "PATCH");

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
    cJSON *ManageMonitoredResourcesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    smart_contract_monitoring_schema_t *elementToReturn = smart_contract_monitoring_schema_parseFromJSON(ManageMonitoredResourcesAPIlocalVarJSON);
    cJSON_Delete(ManageMonitoredResourcesAPIlocalVarJSON);
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
    free(localVarToReplace_resourceMonitoringId);
    if (keyHeader_Authorization) {
        free(keyHeader_Authorization);
        keyHeader_Authorization = NULL;
    }
    if (valueHeader_Authorization) {
        free(valueHeader_Authorization);
        valueHeader_Authorization = NULL;
    }
    free(keyPairHeader_Authorization);
    if (localVarSingleItemJSON_status_update_monitoring_request_schema) {
        cJSON_Delete(localVarSingleItemJSON_status_update_monitoring_request_schema);
        localVarSingleItemJSON_status_update_monitoring_request_schema = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update the monitoring status of an address
//
// Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to beinactive will pause Overledger recording updates for the requested address
//
update_address_monitoring_schema_t*
ManageMonitoredResourcesAPI_updateResourceMonitoringAddress(apiClient_t *apiClient, char * Authorization , char * resourceMonitoringId , status_update_monitoring_request_schema_t * status_update_monitoring_request_schema )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/resourcemonitoring/address/{resourceMonitoringId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/resourcemonitoring/address/{resourceMonitoringId}");


    // Path Params
    long sizeOfPathParams_resourceMonitoringId = strlen(resourceMonitoringId)+3 + strlen("{ resourceMonitoringId }");
    if(resourceMonitoringId == NULL) {
        goto end;
    }
    char* localVarToReplace_resourceMonitoringId = malloc(sizeOfPathParams_resourceMonitoringId);
    sprintf(localVarToReplace_resourceMonitoringId, "{%s}", "resourceMonitoringId");

    localVarPath = strReplace(localVarPath, localVarToReplace_resourceMonitoringId, resourceMonitoringId);



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
    cJSON *localVarSingleItemJSON_status_update_monitoring_request_schema = NULL;
    if (status_update_monitoring_request_schema != NULL)
    {
        //string
        localVarSingleItemJSON_status_update_monitoring_request_schema = status_update_monitoring_request_schema_convertToJSON(status_update_monitoring_request_schema);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_status_update_monitoring_request_schema);
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
                    "PATCH");

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
    cJSON *ManageMonitoredResourcesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    update_address_monitoring_schema_t *elementToReturn = update_address_monitoring_schema_parseFromJSON(ManageMonitoredResourcesAPIlocalVarJSON);
    cJSON_Delete(ManageMonitoredResourcesAPIlocalVarJSON);
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
    free(localVarToReplace_resourceMonitoringId);
    if (keyHeader_Authorization) {
        free(keyHeader_Authorization);
        keyHeader_Authorization = NULL;
    }
    if (valueHeader_Authorization) {
        free(valueHeader_Authorization);
        valueHeader_Authorization = NULL;
    }
    free(keyPairHeader_Authorization);
    if (localVarSingleItemJSON_status_update_monitoring_request_schema) {
        cJSON_Delete(localVarSingleItemJSON_status_update_monitoring_request_schema);
        localVarSingleItemJSON_status_update_monitoring_request_schema = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

