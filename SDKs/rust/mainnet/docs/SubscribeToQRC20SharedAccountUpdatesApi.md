# \SubscribeToQRC20SharedAccountUpdatesApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribe_secondary_owner_event**](SubscribeToQRC20SharedAccountUpdatesApi.md#subscribe_secondary_owner_event) | **POST** /v2/tokenise/tokens/subscription/qrc20/secondaryaccountowner | Receive updates for a shared account



## subscribe_secondary_owner_event

> crate::models::EventSubscriptionResponse subscribe_secondary_owner_event(authorization, body)
Receive updates for a shared account

Set up a subscription to receive updates to a callback URL each time a secondary account owner is added or removed using the \"Add Account\" & \"Remove Account\" Request Types. Also sends update when a shared account creates a QRC20 credit payment using the \"Create Credit\" Request Type.

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

