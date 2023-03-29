# QuantOverledgerApi.SubscribeToQRC20TokenSupplyChangesApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeSupplyEvent**](SubscribeToQRC20TokenSupplyChangesApi.md#subscribeSupplyEvent) | **POST** /v2/tokenise/tokens/subscription/{flowtype}/supply | Receive updates each time a supply changes for a QRC721 or QRC20 token



## subscribeSupplyEvent

> EventSubscriptionResponse subscribeSupplyEvent(authorization, flowtype, body)

Receive updates each time a supply changes for a QRC721 or QRC20 token

Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \&quot;Mint Tokens\&quot; to receive an update each time a new token is created, or use the type \&quot;Burn Tokens\&quot; to receive an update each time a token is destroyed.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';

let apiInstance = new QuantOverledgerApi.SubscribeToQRC20TokenSupplyChangesApi();
let authorization = "authorization_example"; // String | 
let flowtype = "flowtype_example"; // String | 
let body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Burn Tokens","requestDetails":{"tokenName":"QNTNFT"}}; // Object | 
apiInstance.subscribeSupplyEvent(authorization, flowtype, body, (error, data, response) => {
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
 **flowtype** | **String**|  | 
 **body** | **Object**|  | 

### Return type

[**EventSubscriptionResponse**](EventSubscriptionResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

