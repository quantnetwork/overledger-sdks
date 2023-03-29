# QuantOverledgerApi.SubscribeToQRC20AccountCreditPaymentsApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeCreditEvent**](SubscribeToQRC20AccountCreditPaymentsApi.md#subscribeCreditEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/credit | Receive updates each time there is a credit payment on your account



## subscribeCreditEvent

> EventSubscriptionResponse subscribeCreditEvent(authorization, body)

Receive updates each time there is a credit payment on your account

Set up a subscription to receive updates to a callback URL each time there is a credit on a QRC20 token.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';

let apiInstance = new QuantOverledgerApi.SubscribeToQRC20AccountCreditPaymentsApi();
let authorization = "authorization_example"; // String | 
let body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Create Credit","requestDetails":{"tokenUnit":"QNTNS"}}; // Object | 
apiInstance.subscribeCreditEvent(authorization, body, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  | 
 **body** | **Object**|  | 

### Return type

[**EventSubscriptionResponse**](EventSubscriptionResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

