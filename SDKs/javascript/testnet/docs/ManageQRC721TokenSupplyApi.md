# QuantOverledgerApi.ManageQRC721TokenSupplyApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepareSupplyRequest**](ManageQRC721TokenSupplyApi.md#prepareSupplyRequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/supply | Prepare a transaction to manage QRC721 token supply



## prepareSupplyRequest

> PrepareTransactionResponse prepareSupplyRequest(authorization, prepareMintTransactionRequestSchemaQrc721)

Prepare a transaction to manage QRC721 token supply

Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \&quot;Burn Tokens\&quot; which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.ManageQRC721TokenSupplyApi();
let authorization = "authorization_example"; // String | 
let prepareMintTransactionRequestSchemaQrc721 = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Burn Tokens","urgency":"normal","requestDetails":{"owner":{"accountId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116","burn":{"tokenId":"2","tokenName":"QNTNFT","metadata":"something"}},"overledgerSigningType":"overledger-javascript-library"}}; // PrepareMintTransactionRequestSchemaQrc721 | 
apiInstance.prepareSupplyRequest(authorization, prepareMintTransactionRequestSchemaQrc721, (error, data, response) => {
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
 **prepareMintTransactionRequestSchemaQrc721** | [**PrepareMintTransactionRequestSchemaQrc721**](PrepareMintTransactionRequestSchemaQrc721.md)|  | 

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

