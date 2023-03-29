# QuantOverledgerApi.CreateAQRC721TokenCollectionTransactionApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepareCollectRequest**](CreateAQRC721TokenCollectionTransactionApi.md#prepareCollectRequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/collect | Prepare a QRC721 token collection transaction for signing



## prepareCollectRequest

> PrepareTransactionResponse prepareCollectRequest(authorization, preparePaymentTransactionRequestSchema)

Prepare a QRC721 token collection transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are “Approve Asset Collect” and “Collect Asset”. The “Approve Asset Collect” transaction type will allow you to approve someone to subsequently make a transaction that takes the NFT from your address into their own. The “Collect Asset” transaction type will create the transaction to pull the approved NFT from an account into the receiving account. Successfully prepared transactions can then be executed using the /execution/transaction API.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.CreateAQRC721TokenCollectionTransactionApi();
let authorization = "authorization_example"; // String | 
let preparePaymentTransactionRequestSchema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Approve Asset Collect","urgency":"normal","requestDetails":{"owner":{"accountId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116"},"collector":{"accountId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116","transfer":{"tokenId":"2","tokenName":"QNTNFT"}},"overledgerSigningType":"overledger-javascript-library"}}; // PreparePaymentTransactionRequestSchema | 
apiInstance.prepareCollectRequest(authorization, preparePaymentTransactionRequestSchema, (error, data, response) => {
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
 **preparePaymentTransactionRequestSchema** | [**PreparePaymentTransactionRequestSchema**](PreparePaymentTransactionRequestSchema.md)|  | 

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

