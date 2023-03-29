# QuantOverledgerApi.SubscribeToQRC20SharedAccountUpdatesApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeSecondaryOwnerEvent**](SubscribeToQRC20SharedAccountUpdatesApi.md#subscribeSecondaryOwnerEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/secondaryaccountowner | Receive updates for a shared account



## subscribeSecondaryOwnerEvent

> EventSubscriptionResponse subscribeSecondaryOwnerEvent(authorization, body)

Receive updates for a shared account

Set up a subscription to receive updates to a callback URL each time a secondary account owner is added or removed using the \&quot;Add Account\&quot; &amp; \&quot;Remove Account\&quot; Request Types. Also sends update when a shared account creates a QRC20 credit payment using the \&quot;Create Credit\&quot; Request Type.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';

let apiInstance = new QuantOverledgerApi.SubscribeToQRC20SharedAccountUpdatesApi();
let authorization = "authorization_example"; // String | 
let body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Add Account","requestDetails":{"tokenUnit":"QNTNS"}}; // Object | 
apiInstance.subscribeSecondaryOwnerEvent(authorization, body, (error, data, response) => {
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

