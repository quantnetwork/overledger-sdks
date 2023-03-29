# QuantOverledgerApi.RetrieveApprovedAccountInformationOfAQRC721TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC721SmartContractApprovedAccount**](RetrieveApprovedAccountInformationOfAQRC721TokenApi.md#readQRC721SmartContractApprovedAccount) | **POST** /v2/tokenise/tokens/qrc721/approved-account | Retrieve which account is approved to collect a QRC721 token



## readQRC721SmartContractApprovedAccount

> TokenReadQRC721Response readQRC721SmartContractApprovedAccount(authorization, readApprovedAccountRequestSchema)

Retrieve which account is approved to collect a QRC721 token

Submits a query to the DLN and returns the address that is approved to collect a particular QRC721 token ID.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.RetrieveApprovedAccountInformationOfAQRC721TokenApi();
let authorization = "authorization_example"; // String | 
let readApprovedAccountRequestSchema = {"requestDetails":{"tokenId":"1","tokenName":"QNTNFT"},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // ReadApprovedAccountRequestSchema | 
apiInstance.readQRC721SmartContractApprovedAccount(authorization, readApprovedAccountRequestSchema, (error, data, response) => {
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

