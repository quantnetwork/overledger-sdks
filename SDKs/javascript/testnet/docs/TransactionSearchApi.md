# QuantOverledgerApi.TransactionSearchApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**autoExecuteSearchTransactionRequest**](TransactionSearchApi.md#autoExecuteSearchTransactionRequest) | **POST** /v2/autoexecution/search/transaction | Prepare and automatically execute a search for a transaction on a DLT.
[**executePreparedSearchRequestTransaction**](TransactionSearchApi.md#executePreparedSearchRequestTransaction) | **POST** /v2/execution/search/transaction | Execute a search for a transaction on a DLT
[**prepareSearchRequest**](TransactionSearchApi.md#prepareSearchRequest) | **POST** /v2/preparation/search/transaction | Prepare a search for a transaction on a DLT



## autoExecuteSearchTransactionRequest

> PrepareAndExecuteTransactionResponse autoExecuteSearchTransactionRequest(authorization, transactionId, prepareSearchSchema)

Prepare and automatically execute a search for a transaction on a DLT.

Generates a request ID and automatically executes the transaction search on the requested DLT.

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.TransactionSearchApi();
let authorization = "authorization_example"; // String | 
let transactionId = 0x5169fb4538904777b272041ef2ec43a6cfa69515dffead2809d54d9f53c172ab; // String | The transactionId to search for
let prepareSearchSchema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // PrepareSearchSchema | 
apiInstance.autoExecuteSearchTransactionRequest(authorization, transactionId, prepareSearchSchema, (error, data, response) => {
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
 **transactionId** | **String**| The transactionId to search for | 
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**PrepareAndExecuteTransactionResponse**](PrepareAndExecuteTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## executePreparedSearchRequestTransaction

> ExecuteSearchTransactionResponse executePreparedSearchRequestTransaction(authorization, requestId)

Execute a search for a transaction on a DLT

Takes a request ID and searches for the transaction on the requested DLT

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.TransactionSearchApi();
let authorization = "authorization_example"; // String | 
let requestId = "requestId_example"; // String | 
apiInstance.executePreparedSearchRequestTransaction(authorization, requestId, (error, data, response) => {
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

[**ExecuteSearchTransactionResponse**](ExecuteSearchTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## prepareSearchRequest

> PrepareSearchResponseSchema prepareSearchRequest(authorization, transactionId, prepareSearchSchema)

Prepare a search for a transaction on a DLT

Searches for and returns data on transactions on a particular DLT. Returns a request ID for executing a transaction search on the requested DLT

### Example

```javascript
import QuantOverledgerApi from 'quant_overledger_api';
let defaultClient = QuantOverledgerApi.ApiClient.instance;
// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
let OAuth2_Security_Scheme = defaultClient.authentications['OAuth2_Security_Scheme'];
OAuth2_Security_Scheme.accessToken = 'YOUR ACCESS TOKEN';

let apiInstance = new QuantOverledgerApi.TransactionSearchApi();
let authorization = "authorization_example"; // String | 
let transactionId = 0x5169fb4538904777b272041ef2ec43a6cfa69515dffead2809d54d9f53c172ab; // String | The transactionId to search for
let prepareSearchSchema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // PrepareSearchSchema | 
apiInstance.prepareSearchRequest(authorization, transactionId, prepareSearchSchema, (error, data, response) => {
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
 **transactionId** | **String**| The transactionId to search for | 
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

