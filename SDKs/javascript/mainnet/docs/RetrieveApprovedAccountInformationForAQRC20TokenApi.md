# QuantOverledgerApi.RetrieveApprovedAccountInformationForAQRC20TokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC20SecondaryAccountOwner**](RetrieveApprovedAccountInformationForAQRC20TokenApi.md#readQRC20SecondaryAccountOwner) | **POST** /v2/tokenise/tokens/qrc20/secondary-account-owner | Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.



## readQRC20SecondaryAccountOwner

> TokenReadQRC20Response readQRC20SecondaryAccountOwner(authorization, readContractOwnerRequestSchema)

Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.

Submits a query to the Blockchain Network and returns whether an account is approved to make payments on behalf of another account for a particular QRC20 token.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.RetrieveApprovedAccountInformationForAQRC20TokenApi();
let authorization = "authorization_example"; // String | 
let readContractOwnerRequestSchema = {"tokenName":"QNTNFT","responseDetails":{"name":"Approved Account","type":"bool","value":"true"},"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"requestId":"a7db0ee3-ed9c-409a-9b51-57075a570aa0"}; // ReadContractOwnerRequestSchema | 
apiInstance.readQRC20SecondaryAccountOwner(authorization, readContractOwnerRequestSchema, (error, data, response) => {
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
 **readContractOwnerRequestSchema** | [**ReadContractOwnerRequestSchema**](ReadContractOwnerRequestSchema.md)|  | 

### Return type

[**TokenReadQRC20Response**](TokenReadQRC20Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

