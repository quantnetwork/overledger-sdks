# \SubscribeToQRC20AccountCreditPaymentsApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribe_credit_event**](SubscribeToQRC20AccountCreditPaymentsApi.md#subscribe_credit_event) | **POST** /v2/tokenise/tokens/subscription/qrc20/credit | Receive updates each time there is a credit payment on your account



## subscribe_credit_event

> crate::models::EventSubscriptionResponse subscribe_credit_event(authorization, body)
Receive updates each time there is a credit payment on your account

Set up a subscription to receive updates to a callback URL each time there is a credit on a QRC20 token.

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

