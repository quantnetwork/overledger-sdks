# CreateTransactionAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateTransactionAPI_executePreparedRequestNativeTransaction**](CreateTransactionAPI.md#CreateTransactionAPI_executePreparedRequestNativeTransaction) | **POST** /v2/execution/nativetransaction | Execute a native transaction on the DLT
[**CreateTransactionAPI_executePreparedRequestTransaction**](CreateTransactionAPI.md#CreateTransactionAPI_executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on the DLT
[**CreateTransactionAPI_prepareNativeTransaction**](CreateTransactionAPI.md#CreateTransactionAPI_prepareNativeTransaction) | **POST** /v2/preparation/nativetransaction | Prepare a DLT native transaction
[**CreateTransactionAPI_prepareTransactionRequest**](CreateTransactionAPI.md#CreateTransactionAPI_prepareTransactionRequest) | **POST** /v2/preparation/transaction | Prepare a DLT transaction for signing


# **CreateTransactionAPI_executePreparedRequestNativeTransaction**
```c
// Execute a native transaction on the DLT
//
// Takes a request ID and submits a signed native transaction to the requested DLT
//
execute_transaction_response_t* CreateTransactionAPI_executePreparedRequestNativeTransaction(apiClient_t *apiClient, char * Authorization, execute_transaction_request_t * execute_transaction_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**execute_transaction_request** | **[execute_transaction_request_t](execute_transaction_request.md) \*** |  | 

### Return type

[execute_transaction_response_t](execute_transaction_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CreateTransactionAPI_executePreparedRequestTransaction**
```c
// Execute a transaction on the DLT
//
// Takes a request ID and submits a signed transaction to the requested DLT.
//
execute_transaction_response_t* CreateTransactionAPI_executePreparedRequestTransaction(apiClient_t *apiClient, char * Authorization, execute_transaction_request_t * execute_transaction_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**execute_transaction_request** | **[execute_transaction_request_t](execute_transaction_request.md) \*** |  | 

### Return type

[execute_transaction_response_t](execute_transaction_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CreateTransactionAPI_prepareNativeTransaction**
```c
// Prepare a DLT native transaction
//
// Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT
//
prepare_search_response_schema_t* CreateTransactionAPI_prepareNativeTransaction(apiClient_t *apiClient, char * Authorization, prepare_native_transaction_request_schema_t * prepare_native_transaction_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**prepare_native_transaction_request_schema** | **[prepare_native_transaction_request_schema_t](prepare_native_transaction_request_schema.md) \*** |  | 

### Return type

[prepare_search_response_schema_t](prepare_search_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CreateTransactionAPI_prepareTransactionRequest**
```c
// Prepare a DLT transaction for signing
//
// Transforms a transaction request into a payload ready for signing for the requested DLT and returns a request ID for executing. Supported transaction types in this release are “Payment” (to send payments) and “Smart Contract Invoke” (to invoke arbitrary smart contract functions)
//
prepare_transaction_response_t* CreateTransactionAPI_prepareTransactionRequest(apiClient_t *apiClient, char * Authorization,  UNKNOWN_BASE_TYPE);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**UNKNOWN_BASE_TYPE** |  |  | 

### Return type

[prepare_transaction_response_t](prepare_transaction_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

