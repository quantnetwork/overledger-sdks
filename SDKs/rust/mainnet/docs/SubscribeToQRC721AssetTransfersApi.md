# \SubscribeToQRC721AssetTransfersApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribe_transfer_event**](SubscribeToQRC721AssetTransfersApi.md#subscribe_transfer_event) | **POST** /v2/tokenise/tokens/subscription/qrc721/transfer | Receive updates each time a QRC721 token is transferred



## subscribe_transfer_event

> crate::models::EventSubscriptionResponse subscribe_transfer_event(authorization, body)
Receive updates each time a QRC721 token is transferred

Set up a subscription to receive updates to a callback URL each time a QRC721 token is transferred to a different owner. Use the type \"Create Transfer\" to receive an update each time a token is transferred to a different owner.

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

