# SubscribeToQRC20AccountDebitPaymentsAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscribeToQRC20AccountDebitPaymentsAPI_subscribeQRC20DebitEvent**](SubscribeToQRC20AccountDebitPaymentsAPI.md#SubscribeToQRC20AccountDebitPaymentsAPI_subscribeQRC20DebitEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/debit | Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved


# **SubscribeToQRC20AccountDebitPaymentsAPI_subscribeQRC20DebitEvent**
```c
// Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved
//
// Set up a subscription to receive updates to a callback URL each time there is a debit on a QRC20 token or a QRC20 debit is approved. Use the type \"Create Debit\" to get an update when there is a debit payment on your account or \"Approve Debit\" to receive an update each time a token has been approved for debit.
//
event_subscription_response_t* SubscribeToQRC20AccountDebitPaymentsAPI_subscribeQRC20DebitEvent(apiClient_t *apiClient, char * Authorization, object_t * body);
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

