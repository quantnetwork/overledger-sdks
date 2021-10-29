# QuantOverledgerApi.TransactionSearchApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedSearchRequestTransaction**](TransactionSearchApi.md#executePreparedSearchRequestTransaction) | **POST** /v2/execution/search/transaction | Execute a search for a transaction on a DLT
[**prepareSearchRequest**](TransactionSearchApi.md#prepareSearchRequest) | **POST** /v2/preparation/search/transaction | Prepare a search for a transaction on a DLT



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
let transactionId = "transactionId_example"; // String | 
let prepareSearchSchema = {"location":{"technology":"Bitcoin","network":"Testnet"}}; // PrepareSearchSchema | 
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
 **transactionId** | **String**|  | 
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

