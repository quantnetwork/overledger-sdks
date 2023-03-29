# QuantOverledgerApi.RetrieveApprovedAccountAllowanceForAQRC20TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readApprovedDebitAmount**](RetrieveApprovedAccountAllowanceForAQRC20TokenApi.md#readApprovedDebitAmount) | **POST** /v2/tokenise/tokens/qrc20/approved-debit-amount | Retrieve how many QRC20 tokens an address is allowed to debit



## readApprovedDebitAmount

> TokenReadQRC20Response readApprovedDebitAmount(authorization, readApprovedAccountAllowanceRequestSchema)

Retrieve how many QRC20 tokens an address is allowed to debit

Submits a query to the Blockchain Network and returns the number of QRC20 tokens a particular account is allowed to debit from another account

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.RetrieveApprovedAccountAllowanceForAQRC20TokenApi();
let authorization = "authorization_example"; // String | 
let readApprovedAccountAllowanceRequestSchema = {"requestDetails":{"payer":[{"payerId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d"}],"tokenUnit":"RobTK","mandate":[{"payeeId":"0x37dC24Fd0b91Bd2B17C5e4b52d90f13DAcc057aA"}]},"location":{"technology":"Ethereum","network":"ethereum goerli testnet"}}; // ReadApprovedAccountAllowanceRequestSchema | 
apiInstance.readApprovedDebitAmount(authorization, readApprovedAccountAllowanceRequestSchema, (error, data, response) => {
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
 **readApprovedAccountAllowanceRequestSchema** | [**ReadApprovedAccountAllowanceRequestSchema**](ReadApprovedAccountAllowanceRequestSchema.md)|  | 

### Return type

[**TokenReadQRC20Response**](TokenReadQRC20Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

