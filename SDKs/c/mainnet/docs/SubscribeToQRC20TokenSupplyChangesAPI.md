# SubscribeToQRC20TokenSupplyChangesAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscribeToQRC20TokenSupplyChangesAPI_subscribeSupplyEvent**](SubscribeToQRC20TokenSupplyChangesAPI.md#SubscribeToQRC20TokenSupplyChangesAPI_subscribeSupplyEvent) | **POST** /v2/tokenise/tokens/subscription/{flowtype}/supply | Receive updates each time a supply changes for a QRC721 or QRC20 token


# **SubscribeToQRC20TokenSupplyChangesAPI_subscribeSupplyEvent**
```c
// Receive updates each time a supply changes for a QRC721 or QRC20 token
//
// Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \"Mint Tokens\" to receive an update each time a new token is created, or use the type \"Burn Tokens\" to receive an update each time a token is destroyed.
//
event_subscription_response_t* SubscribeToQRC20TokenSupplyChangesAPI_subscribeSupplyEvent(apiClient_t *apiClient, char * Authorization, char * flowtype, object_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**flowtype** | **char \*** |  | 
**body** | **[object_t](object.md) \*** |  | 

### Return type

[event_subscription_response_t](event_subscription_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

