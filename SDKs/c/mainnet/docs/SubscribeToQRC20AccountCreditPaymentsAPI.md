# SubscribeToQRC20AccountCreditPaymentsAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscribeToQRC20AccountCreditPaymentsAPI_subscribeCreditEvent**](SubscribeToQRC20AccountCreditPaymentsAPI.md#SubscribeToQRC20AccountCreditPaymentsAPI_subscribeCreditEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/credit | Receive updates each time there is a credit payment on your account


# **SubscribeToQRC20AccountCreditPaymentsAPI_subscribeCreditEvent**
```c
// Receive updates each time there is a credit payment on your account
//
// Set up a subscription to receive updates to a callback URL each time there is a credit on a QRC20 token.
//
event_subscription_response_t* SubscribeToQRC20AccountCreditPaymentsAPI_subscribeCreditEvent(apiClient_t *apiClient, char * Authorization, object_t * body);
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

