# TransactionSearchAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TransactionSearchAPI_executePreparedSearchRequestTransaction**](TransactionSearchAPI.md#TransactionSearchAPI_executePreparedSearchRequestTransaction) | **POST** /v2/execution/search/transaction | Execute a search for a transaction on a DLT
[**TransactionSearchAPI_prepareSearchRequest**](TransactionSearchAPI.md#TransactionSearchAPI_prepareSearchRequest) | **POST** /v2/preparation/search/transaction | Prepare a search for a transaction on a DLT


# **TransactionSearchAPI_executePreparedSearchRequestTransaction**
```c
// Execute a search for a transaction on a DLT
//
// Takes a request ID and searches for the transaction on the requested DLT
//
execute_search_transaction_response_t* TransactionSearchAPI_executePreparedSearchRequestTransaction(apiClient_t *apiClient, char * Authorization, char * requestId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**requestId** | **char \*** |  | 

### Return type

[execute_search_transaction_response_t](execute_search_transaction_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransactionSearchAPI_prepareSearchRequest**
```c
// Prepare a search for a transaction on a DLT
//
// Searches for and returns data on transactions on a particular DLT. Returns a request ID for executing a transaction search on the requested DLT
//
prepare_search_response_schema_t* TransactionSearchAPI_prepareSearchRequest(apiClient_t *apiClient, char * Authorization, char * transactionId, prepare_search_schema_t * prepare_search_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**transactionId** | **char \*** |  | 
**prepare_search_schema** | **[prepare_search_schema_t](prepare_search_schema.md) \*** |  | 

### Return type

[prepare_search_response_schema_t](prepare_search_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

