# SubscribeToQRC721AssetTransfersAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscribeToQRC721AssetTransfersAPI_subscribeTransferEvent**](SubscribeToQRC721AssetTransfersAPI.md#SubscribeToQRC721AssetTransfersAPI_subscribeTransferEvent) | **POST** /v2/tokenise/tokens/subscription/qrc721/transfer | Receive updates each time a QRC721 token is transferred


# **SubscribeToQRC721AssetTransfersAPI_subscribeTransferEvent**
```c
// Receive updates each time a QRC721 token is transferred
//
// Set up a subscription to receive updates to a callback URL each time a QRC721 token is transferred to a different owner. Use the type \"Create Transfer\" to receive an update each time a token is transferred to a different owner.
//
event_subscription_response_t* SubscribeToQRC721AssetTransfersAPI_subscribeTransferEvent(apiClient_t *apiClient, char * Authorization, object_t * body);
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

