# SubscribeToQRC20SharedAccountUpdatesAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscribeToQRC20SharedAccountUpdatesAPI_subscribeSecondaryOwnerEvent**](SubscribeToQRC20SharedAccountUpdatesAPI.md#SubscribeToQRC20SharedAccountUpdatesAPI_subscribeSecondaryOwnerEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/secondaryaccountowner | Receive updates for a shared account


# **SubscribeToQRC20SharedAccountUpdatesAPI_subscribeSecondaryOwnerEvent**
```c
// Receive updates for a shared account
//
// Set up a subscription to receive updates to a callback URL each time a secondary account owner is added or removed using the \"Add Account\" & \"Remove Account\" Request Types. Also sends update when a shared account creates a QRC20 credit payment using the \"Create Credit\" Request Type.
//
event_subscription_response_t* SubscribeToQRC20SharedAccountUpdatesAPI_subscribeSecondaryOwnerEvent(apiClient_t *apiClient, char * Authorization, object_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**body** | **[object_t](object.md) \*** |  | 

### Return type

[event_subscription_response_t](event_subscription_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

