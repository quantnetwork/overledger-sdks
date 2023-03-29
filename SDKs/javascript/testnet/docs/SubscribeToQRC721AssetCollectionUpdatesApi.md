# QuantOverledgerApi.SubscribeToQRC721AssetCollectionUpdatesApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeCollectEvent**](SubscribeToQRC721AssetCollectionUpdatesApi.md#subscribeCollectEvent) | **POST** /v2/tokenise/tokens/subscription/qrc721/collect | Receive updates each time a QRC721 token is approved for collection or collected



## subscribeCollectEvent

> EventSubscriptionResponse subscribeCollectEvent(authorization, body)

Receive updates each time a QRC721 token is approved for collection or collected

Set up a subscription to receive updates to a callback URL each time a QRC721 token is either approved for collected or collected. Use the type \&quot;Approve Asset Collect\&quot; to receive an update each time a token has been approved for collection, or use the type \&quot;Collect Asset\&quot; to receive an update each time a token has been collected.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';

let apiInstance = new QuantOverledgerApi.SubscribeToQRC721AssetCollectionUpdatesApi();
let authorization = "authorization_example"; // String | 
let body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Approve Asset Collect","requestDetails":{"tokenName":"QNTNFT"}}; // Object | 
apiInstance.subscribeCollectEvent(authorization, body, (error, data, response) => {
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

