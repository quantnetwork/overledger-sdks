# QuantOverledgerApi.CreateAQRC721TransferTransactionApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepareTransactionRequest**](CreateAQRC721TransferTransactionApi.md#prepareTransactionRequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/transfer | Prepare a QRC721 token transfer transaction for signing



## prepareTransactionRequest

> PrepareTransactionResponse prepareTransactionRequest(authorization, preparePaymentTransactionRequestSchema)

Prepare a QRC721 token transfer transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is “Create Transfer” which will allow you to transfer a QRC721 token to another specified account. Successfully prepared transactions can then be executed using the /execution/transaction API.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.CreateAQRC721TransferTransactionApi();
let authorization = "authorization_example"; // String | 
let preparePaymentTransactionRequestSchema = {"location":{"technology":"Substrate","network":"Polkadot Westend Testnet"},"type":"PAYMENT","urgency":"normal","requestDetails":{"destination":[{"destinationId":"5FLSigC9HGRKVhB9FiEo4Y3koPsNmBmLJbpXg2mp1hXcS59Y","payment":{"amount":"0.0000000001","unit":"WND"}}],"message":"OVL Transaction Message","overledgerSigningType":"overledger-javascript-library","origin":[{"originId":"5GrwvaEF5zXb26Fz9rcQpDWS57CtERHpNehXCPcNoHGKutQY"}]}}; // PreparePaymentTransactionRequestSchema | 
apiInstance.prepareTransactionRequest(authorization, preparePaymentTransactionRequestSchema, (error, data, response) => {
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

