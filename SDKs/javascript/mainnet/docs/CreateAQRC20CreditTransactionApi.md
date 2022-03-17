# QuantOverledgerApi.CreateAQRC20CreditTransactionApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepareCreditRequest**](CreateAQRC20CreditTransactionApi.md#prepareCreditRequest) | **POST** /v2/preparation/credit | Prepare a QRC20 token credit transaction for signing



## prepareCreditRequest

> PrepareTransactionResponse prepareCreditRequest(authorization, prepareCreditTransactionRequestSchema)

Prepare a QRC20 token credit transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is \&quot;Create Credit\&quot; which will allow you to make a payment to another specified account.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.CreateAQRC20CreditTransactionApi();
let authorization = "authorization_example"; // String | 
let prepareCreditTransactionRequestSchema = {"urgency":"normal","requestDetails":{"payee":[{"payment":{"amount":"0.0000001","unit":"TEST"},"payeeId":"0x8917cf2A57DF39D311a96c53FCCA76dAFB25392B"}],"overledgerSigningType":"overledger-javascript-library","message":"OVL Transaction Message","payer":[{"payerId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d"}]},"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Create Credit"}; // PrepareCreditTransactionRequestSchema | 
apiInstance.prepareCreditRequest(authorization, prepareCreditTransactionRequestSchema, (error, data, response) => {
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
 **prepareCreditTransactionRequestSchema** | [**PrepareCreditTransactionRequestSchema**](PrepareCreditTransactionRequestSchema.md)|  | 

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

