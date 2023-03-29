# QuantOverledgerApi.RetrieveOwnerInformationForAQRC721TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC721SmartContractTokenOwner**](RetrieveOwnerInformationForAQRC721TokenApi.md#readQRC721SmartContractTokenOwner) | **POST** /v2/tokenise/tokens/qrc721/token-owner | Retrieve which account currently owns a specific QRC721 token



## readQRC721SmartContractTokenOwner

> TokenReadQRC721Response readQRC721SmartContractTokenOwner(authorization, readTokenOwnerRequestSchema)

Retrieve which account currently owns a specific QRC721 token

Submits a query to the DLN and returns the address that currently has owns a particular QRC721 token.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.RetrieveOwnerInformationForAQRC721TokenApi();
let authorization = "authorization_example"; // String | 
let readTokenOwnerRequestSchema = {"requestDetails":{"tokenId":"1","tokenName":"QNTNFT"},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // ReadTokenOwnerRequestSchema | 
apiInstance.readQRC721SmartContractTokenOwner(authorization, readTokenOwnerRequestSchema, (error, data, response) => {
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
 **readTokenOwnerRequestSchema** | [**ReadTokenOwnerRequestSchema**](ReadTokenOwnerRequestSchema.md)|  | 

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

