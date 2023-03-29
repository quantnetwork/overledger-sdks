# QuantOverledgerApi.RetrieveURIInformationForAQRC721TokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC721SmartContractUri**](RetrieveURIInformationForAQRC721TokenApi.md#readQRC721SmartContractUri) | **POST** /v2/tokenise/tokens/qrc721/token-uri | Retrieve the URI for a specific QRC721 token



## readQRC721SmartContractUri

> TokenReadQRC721Response readQRC721SmartContractUri(authorization, readApprovedAccountRequestSchema)

Retrieve the URI for a specific QRC721 token

Submits a query to the DLN and returns the URI that is assigned to a particular QRC721 token

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.RetrieveURIInformationForAQRC721TokenApi();
let authorization = "authorization_example"; // String | 
let readApprovedAccountRequestSchema = {"requestDetails":{"tokenId":"1","tokenName":"QNTNFT"},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // ReadApprovedAccountRequestSchema | 
apiInstance.readQRC721SmartContractUri(authorization, readApprovedAccountRequestSchema, (error, data, response) => {
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
 **readApprovedAccountRequestSchema** | [**ReadApprovedAccountRequestSchema**](ReadApprovedAccountRequestSchema.md)|  | 

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

