# SubscribeToQRC721AssetCollectionUpdatesAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscribeToQRC721AssetCollectionUpdatesAPI_subscribeCollectEvent**](SubscribeToQRC721AssetCollectionUpdatesAPI.md#SubscribeToQRC721AssetCollectionUpdatesAPI_subscribeCollectEvent) | **POST** /v2/tokenise/tokens/subscription/qrc721/collect | Receive updates each time a QRC721 token is approved for collection or collected


# **SubscribeToQRC721AssetCollectionUpdatesAPI_subscribeCollectEvent**
```c
// Receive updates each time a QRC721 token is approved for collection or collected
//
// Set up a subscription to receive updates to a callback URL each time a QRC721 token is either approved for collected or collected. Use the type \"Approve Asset Collect\" to receive an update each time a token has been approved for collection, or use the type \"Collect Asset\" to receive an update each time a token has been collected.
//
event_subscription_response_t* SubscribeToQRC721AssetCollectionUpdatesAPI_subscribeCollectEvent(apiClient_t *apiClient, char * Authorization, object_t * body);
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

