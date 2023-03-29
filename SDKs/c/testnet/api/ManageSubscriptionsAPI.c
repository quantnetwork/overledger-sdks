#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ManageSubscriptionsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Remove a subscription created by your application
//
// Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL
//
webhook_subscription_status_update_response_t*
ManageSubscriptionsAPI_deleteSubscription(apiClient_t *apiClient, char * Authorization , char * subscriptionId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/webhook/subscription/{subscriptionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/webhook/subscription/{subscriptionId}");


    // Path Params
    long sizeOfPathParams_subscriptionId = strlen(subscriptionId)+3 + strlen("{ subscriptionId }");
    if(subscriptionId == NULL) {
        goto end;
    }
    char* localVarToReplace_subscriptionId = malloc(sizeOfPathParams_subscriptionId);
    sprintf(localVarToReplace_subscriptionId, "{%s}", "subscriptionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_subscriptionId, subscriptionId);



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
    if (apiClient->response_code == 404) {
        printf("%s\n","You do not currently have any subscriptions");
    }
    if (apiClient->response_code == 500) {
        printf("%s\n","Something went wrong on our side");
    }
    //nonprimitive not container
    cJSON *ManageSubscriptionsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    webhook_subscription_status_update_response_t *elementToReturn = webhook_subscription_status_update_response_parseFromJSON(ManageSubscriptionsAPIlocalVarJSON);
    cJSON_Delete(ManageSubscriptionsAPIlocalVarJSON);
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
    free(localVarToReplace_subscriptionId);
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

// Retrieve a list of subscriptions created by your application
//
// Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application
//
list_t*
ManageSubscriptionsAPI_listSubscriptions(apiClient_t *apiClient, char * Authorization )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/webhook/subscriptions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/webhook/subscriptions");




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
    if (apiClient->response_code == 204) {
        printf("%s\n","You do not currently have any subscriptions");
    }
    if (apiClient->response_code == 401) {
        printf("%s\n","Unauthorised");
    }
    if (apiClient->response_code == 500) {
        printf("%s\n","Something went wrong on our side");
    }
    cJSON *ManageSubscriptionsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(ManageSubscriptionsAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_create();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, ManageSubscriptionsAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( ManageSubscriptionsAPIlocalVarJSON);
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

// Update a specific subscription created by your application
//
// Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL
//
webhook_subscription_status_update_response_t*
ManageSubscriptionsAPI_updateSubscription(apiClient_t *apiClient, char * Authorization , char * subscriptionId , update_webhook_subscription_request_schema_t * update_webhook_subscription_request_schema )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_create();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/v2/webhook/subscription/{subscriptionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/v2/webhook/subscription/{subscriptionId}");


    // Path Params
    long sizeOfPathParams_subscriptionId = strlen(subscriptionId)+3 + strlen("{ subscriptionId }");
    if(subscriptionId == NULL) {
        goto end;
    }
    char* localVarToReplace_subscriptionId = malloc(sizeOfPathParams_subscriptionId);
    sprintf(localVarToReplace_subscriptionId, "{%s}", "subscriptionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_subscriptionId, subscriptionId);



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
    cJSON *localVarSingleItemJSON_update_webhook_subscription_request_schema = NULL;
    if (update_webhook_subscription_request_schema != NULL)
    {
        //string
        localVarSingleItemJSON_update_webhook_subscription_request_schema = update_webhook_subscription_request_schema_convertToJSON(update_webhook_subscription_request_schema);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_update_webhook_subscription_request_schema);
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
    if (apiClient->response_code == 404) {
        printf("%s\n","You do not currently have any subscriptions");
    }
    if (apiClient->response_code == 405) {
        printf("%s\n","Method is not allowed");
    }
    if (apiClient->response_code == 500) {
        printf("%s\n","Something went wrong on our side");
    }
    //nonprimitive not container
    cJSON *ManageSubscriptionsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    webhook_subscription_status_update_response_t *elementToReturn = webhook_subscription_status_update_response_parseFromJSON(ManageSubscriptionsAPIlocalVarJSON);
    cJSON_Delete(ManageSubscriptionsAPIlocalVarJSON);
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
    free(localVarToReplace_subscriptionId);
    if (keyHeader_Authorization) {
        free(keyHeader_Authorization);
        keyHeader_Authorization = NULL;
    }
    if (valueHeader_Authorization) {
        free(valueHeader_Authorization);
        valueHeader_Authorization = NULL;
    }
    free(keyPairHeader_Authorization);
    if (localVarSingleItemJSON_update_webhook_subscription_request_schema) {
        cJSON_Delete(localVarSingleItemJSON_update_webhook_subscription_request_schema);
        localVarSingleItemJSON_update_webhook_subscription_request_schema = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

