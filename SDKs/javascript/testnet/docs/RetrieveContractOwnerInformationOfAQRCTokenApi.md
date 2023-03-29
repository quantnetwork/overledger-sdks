# QuantOverledgerApi.RetrieveContractOwnerInformationOfAQRCTokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRCSmartContractOwner**](RetrieveContractOwnerInformationOfAQRCTokenApi.md#readQRCSmartContractOwner) | **POST** /v2/tokenise/tokens/{flowType}/contract-owner | Retrieve which account has contract owner permissions for a QRC token



## readQRCSmartContractOwner

> TokenReadQRC721Response readQRCSmartContractOwner(authorization, flowType, prepareRequest)

Retrieve which account has contract owner permissions for a QRC token

Submits a query to the Blockchain Network and returns the address that currently has contract owner permissions for a particular QRC token.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.RetrieveContractOwnerInformationOfAQRCTokenApi();
let authorization = "authorization_example"; // String | 
let flowType = "flowType_example"; // String | 
let prepareRequest = new QuantOverledgerApi.PrepareRequest(); // PrepareRequest | 
apiInstance.readQRCSmartContractOwner(authorization, flowType, prepareRequest, (error, data, response) => {
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
 **flowType** | **String**|  | 
 **prepareRequest** | [**PrepareRequest**](PrepareRequest.md)|  | 

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

