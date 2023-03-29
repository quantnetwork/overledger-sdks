# \SubscribeToQRC721SupplyChangeUpdatesApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribe_supply_event**](SubscribeToQRC721SupplyChangeUpdatesApi.md#subscribe_supply_event) | **POST** /v2/tokenise/tokens/subscription/{flowtype}/supply | Receive updates each time a supply changes for a QRC721 or QRC20 token



## subscribe_supply_event

> crate::models::EventSubscriptionResponse subscribe_supply_event(authorization, flowtype, body)
Receive updates each time a supply changes for a QRC721 or QRC20 token

Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \"Mint Tokens\" to receive an update each time a new token is created, or use the type \"Burn Tokens\" to receive an update each time a token is destroyed.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**flowtype** | **String** |  | [required] |
**body** | **serde_json::Value** |  | [required] |

### Return type

[**crate::models::EventSubscriptionResponse**](EventSubscriptionResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

