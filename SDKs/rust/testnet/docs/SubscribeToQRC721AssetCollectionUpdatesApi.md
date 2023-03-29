# \SubscribeToQRC721AssetCollectionUpdatesApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribe_collect_event**](SubscribeToQRC721AssetCollectionUpdatesApi.md#subscribe_collect_event) | **POST** /v2/tokenise/tokens/subscription/qrc721/collect | Receive updates each time a QRC721 token is approved for collection or collected



## subscribe_collect_event

> crate::models::EventSubscriptionResponse subscribe_collect_event(authorization, body)
Receive updates each time a QRC721 token is approved for collection or collected

Set up a subscription to receive updates to a callback URL each time a QRC721 token is either approved for collected or collected. Use the type \"Approve Asset Collect\" to receive an update each time a token has been approved for collection, or use the type \"Collect Asset\" to receive an update each time a token has been collected.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**body** | **serde_json::Value** |  | [required] |

### Return type

[**crate::models::EventSubscriptionResponse**](EventSubscriptionResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

