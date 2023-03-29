# QuantOverledgerApi.RetrieveTheCountOfQRC721TokensApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTokenCount**](RetrieveTheCountOfQRC721TokensApi.md#getTokenCount) | **POST** /v2/tokenise/tokens/qrc721/token-count | Retrieve the count of a QRC721 token for a particular account



## getTokenCount

> TokenReadQRC721Response getTokenCount(authorization, readBalanceRequestSchema)

Retrieve the count of a QRC721 token for a particular account

Submits a query to the DLN and returns the number of QRC721 tokens held by the given account ID

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.RetrieveTheCountOfQRC721TokensApi();
let authorization = "authorization_example"; // String | 
let readBalanceRequestSchema = {"requestDetails":{"tokenName":"QNTNFT","accountId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116"},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // ReadBalanceRequestSchema | 
apiInstance.getTokenCount(authorization, readBalanceRequestSchema, (error, data, response) => {
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
 **readBalanceRequestSchema** | [**ReadBalanceRequestSchema**](ReadBalanceRequestSchema.md)|  | 

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

