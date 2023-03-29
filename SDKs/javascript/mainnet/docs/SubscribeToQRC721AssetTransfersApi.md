# QuantOverledgerApi.SubscribeToQRC721AssetTransfersApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeTransferEvent**](SubscribeToQRC721AssetTransfersApi.md#subscribeTransferEvent) | **POST** /v2/tokenise/tokens/subscription/qrc721/transfer | Receive updates each time a QRC721 token is transferred



## subscribeTransferEvent

> EventSubscriptionResponse subscribeTransferEvent(authorization, body)

Receive updates each time a QRC721 token is transferred

Set up a subscription to receive updates to a callback URL each time a QRC721 token is transferred to a different owner. Use the type \&quot;Create Transfer\&quot; to receive an update each time a token is transferred to a different owner.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';

let apiInstance = new QuantOverledgerApi.SubscribeToQRC721AssetTransfersApi();
let authorization = "authorization_example"; // String | 
let body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Create Transfer","requestDetails":{"tokenName":"QNTNS"}}; // Object | 
apiInstance.subscribeTransferEvent(authorization, body, (error, data, response) => {
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

