# QuantOverledgerApi.CreateAQRC20DebitTransactionApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepareDebitRequest**](CreateAQRC20DebitTransactionApi.md#prepareDebitRequest) | **POST** /v2/preparation/debit | Prepare a QRC20 token debit transaction for signing



## prepareDebitRequest

> PrepareTransactionResponse prepareDebitRequest(authorization, prepareCreditTransactionRequestSchema)

Prepare a QRC20 token debit transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are \&quot;Approve Debit\&quot; and \&quot;Create Debit\&quot;. The &#39;Approve Debit&#39; transaction type will allow you to approve someone to make a pull payment from your account and the \&quot;Create Debit\&quot; transaction type will create the payment to pull the approved amount from an account.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.CreateAQRC20DebitTransactionApi();
let authorization = "authorization_example"; // String | 
let prepareCreditTransactionRequestSchema = {"urgency":"normal","requestDetails":{"payee":[{"payment":{"amount":"1.0","unit":"QNT"},"payeeId":"0x8917cf2A57DF39D311a96c53FCCA76dAFB25392B"}],"overledgerSigningType":"overledger-javascript-library","message":"OVL Transaction Message","payer":[{"payerId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d"}]},"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Create Debit"}; // PrepareCreditTransactionRequestSchema | 
apiInstance.prepareDebitRequest(authorization, prepareCreditTransactionRequestSchema, (error, data, response) => {
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

