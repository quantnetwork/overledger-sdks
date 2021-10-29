# CreateSubscriptionAPI

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateSubscriptionAPI_subscription**](CreateSubscriptionAPI.md#CreateSubscriptionAPI_subscription) | **POST** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource 


# **CreateSubscriptionAPI_subscription**
```c
// Create a subscription for a transaction or monitored resource 
//
// Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID
//
list_t* CreateSubscriptionAPI_subscription(apiClient_t *apiClient, char * Authorization, create_subscription_request_schema_t * create_subscription_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**create_subscription_request_schema** | **[create_subscription_request_schema_t](create_subscription_request_schema.md) \*** |  | 

### Return type

[list_t](create_subscription_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

