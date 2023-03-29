# QuantOverledgerApi.RetrieveAccountBalanceForAQRC20TokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC20SmartContractBalance**](RetrieveAccountBalanceForAQRC20TokenApi.md#readQRC20SmartContractBalance) | **POST** /v2/tokenise/tokens/qrc20/account-balance | Retrieve the balance of QRC20 tokens for an account



## readQRC20SmartContractBalance

> TokenReadQRC20Response readQRC20SmartContractBalance(authorization, readAccountBalanceRequestSchema)

Retrieve the balance of QRC20 tokens for an account

Submits a query to the Blockchain Network and returns the balance of QRC20 tokens for an account .

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.RetrieveAccountBalanceForAQRC20TokenApi();
let authorization = "authorization_example"; // String | 
let readAccountBalanceRequestSchema = {"requestDetails":{"owner":{"accountId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d","unit":"ROCKET"}},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // ReadAccountBalanceRequestSchema | 
apiInstance.readQRC20SmartContractBalance(authorization, readAccountBalanceRequestSchema, (error, data, response) => {
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
 **readAccountBalanceRequestSchema** | [**ReadAccountBalanceRequestSchema**](ReadAccountBalanceRequestSchema.md)|  | 

### Return type

[**TokenReadQRC20Response**](TokenReadQRC20Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

