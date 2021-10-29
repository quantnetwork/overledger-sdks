# ManageSubscriptionAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ManageSubscriptionAPI_deleteSubscription**](ManageSubscriptionAPI.md#ManageSubscriptionAPI_deleteSubscription) | **DELETE** /v2/webhook/subscription/{subscriptionId} | Remove a subscription created by your application
[**ManageSubscriptionAPI_listSubscriptions**](ManageSubscriptionAPI.md#ManageSubscriptionAPI_listSubscriptions) | **GET** /v2/webhook/subscriptions | Retrieve a list of subscriptions created by your application
[**ManageSubscriptionAPI_updateSubscription**](ManageSubscriptionAPI.md#ManageSubscriptionAPI_updateSubscription) | **PATCH** /v2/webhook/subscription/{subscriptionId} | Update a specific subscription created by your application


# **ManageSubscriptionAPI_deleteSubscription**
```c
// Remove a subscription created by your application
//
// Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL
//
subscription_deletion_response_t* ManageSubscriptionAPI_deleteSubscription(apiClient_t *apiClient, char * Authorization, char * subscriptionId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**subscriptionId** | **char \*** |  | 

### Return type

[subscription_deletion_response_t](subscription_deletion_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ManageSubscriptionAPI_listSubscriptions**
```c
// Retrieve a list of subscriptions created by your application
//
// Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application
//
list_t* ManageSubscriptionAPI_listSubscriptions(apiClient_t *apiClient, char * Authorization);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 

### Return type

[list_t](list_subscription_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ManageSubscriptionAPI_updateSubscription**
```c
// Update a specific subscription created by your application
//
// Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL
//
subscription_update_response_t* ManageSubscriptionAPI_updateSubscription(apiClient_t *apiClient, char * Authorization, char * subscriptionId, update_subscription_request_schema_t * update_subscription_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**subscriptionId** | **char \*** |  | 
**update_subscription_request_schema** | **[update_subscription_request_schema_t](update_subscription_request_schema.md) \*** |  | 

### Return type

[subscription_update_response_t](subscription_update_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

