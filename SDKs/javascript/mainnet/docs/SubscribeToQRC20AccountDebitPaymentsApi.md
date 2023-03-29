# QuantOverledgerApi.SubscribeToQRC20AccountDebitPaymentsApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeQRC20DebitEvent**](SubscribeToQRC20AccountDebitPaymentsApi.md#subscribeQRC20DebitEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/debit | Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved



## subscribeQRC20DebitEvent

> EventSubscriptionResponse subscribeQRC20DebitEvent(authorization, body)

Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved

Set up a subscription to receive updates to a callback URL each time there is a debit on a QRC20 token or a QRC20 debit is approved. Use the type \&quot;Create Debit\&quot; to get an update when there is a debit payment on your account or \&quot;Approve Debit\&quot; to receive an update each time a token has been approved for debit.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';

let apiInstance = new QuantOverledgerApi.SubscribeToQRC20AccountDebitPaymentsApi();
let authorization = "authorization_example"; // String | 
let body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Create Debit","requestDetails":{"tokenUnit":"QNTNS"}}; // Object | 
apiInstance.subscribeQRC20DebitEvent(authorization, body, (error, data, response) => {
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

