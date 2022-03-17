# QuantOverledgerApi.SmartContractSearchApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**autoExecuteSearchSmartContractQueryRequest**](SmartContractSearchApi.md#autoExecuteSearchSmartContractQueryRequest) | **POST** /v2/autoexecution/search/smartcontract | Prepare and automatically execute a search for a smart contract query on a DLT.
[**executePreparedSearchRequest**](SmartContractSearchApi.md#executePreparedSearchRequest) | **POST** /v2/execution/search/smartcontract | Execute a read of a smart contract on a DLT
[**prepareSmartContractQueryRequest**](SmartContractSearchApi.md#prepareSmartContractQueryRequest) | **POST** /v2/preparation/search/smartcontract | Prepare a read of a smart contract on a DLT



## autoExecuteSearchSmartContractQueryRequest

> AutoExecuteSearchAddressBalanceResponseSchema autoExecuteSearchSmartContractQueryRequest(authorization, prepareSearchSchema)

Prepare and automatically execute a search for a smart contract query on a DLT.

Generates a request ID and automatically executes the smart contract query search on the requested DLT.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.SmartContractSearchApi();
let authorization = "authorization_example"; // String | 
let prepareSearchSchema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // PrepareSearchSchema | 
apiInstance.autoExecuteSearchSmartContractQueryRequest(authorization, prepareSearchSchema, (error, data, response) => {
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
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**AutoExecuteSearchAddressBalanceResponseSchema**](AutoExecuteSearchAddressBalanceResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## executePreparedSearchRequest

> ExecuteSmartContractReadResponseSchema executePreparedSearchRequest(authorization, requestId)

Execute a read of a smart contract on a DLT

Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.SmartContractSearchApi();
let authorization = "authorization_example"; // String | 
let requestId = "requestId_example"; // String | 
apiInstance.executePreparedSearchRequest(authorization, requestId, (error, data, response) => {
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
 **requestId** | **String**|  | 

### Return type

[**ExecuteSmartContractReadResponseSchema**](ExecuteSmartContractReadResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## prepareSmartContractQueryRequest

> PrepareSearchResponseSchema prepareSmartContractQueryRequest(authorization, prepareSearchSmartContractRequestSchema)

Prepare a read of a smart contract on a DLT

Returns a request ID for executing a smart contract read on Ethereum.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.SmartContractSearchApi();
let authorization = "authorization_example"; // String | 
let prepareSearchSmartContractRequestSchema = {"requestDetails":{"destination":[{"smartContract":{"function":{"name":"balanceOf","inputParameters":[{"type":"address","value":"0x8917cf2A57DF39D311a96c53FCCA76dAFB25392B"}],"outputParameters":[{"type":"uint256"}]},"smartContractId":"0xF9cd6C86992Fce1481dBc4bDB7E1b101c1e8cEE2"}}]},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // PrepareSearchSmartContractRequestSchema | 
apiInstance.prepareSmartContractQueryRequest(authorization, prepareSearchSmartContractRequestSchema, (error, data, response) => {
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
 **prepareSearchSmartContractRequestSchema** | [**PrepareSearchSmartContractRequestSchema**](PrepareSearchSmartContractRequestSchema.md)|  | 

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

