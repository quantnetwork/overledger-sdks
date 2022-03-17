# UTXOStatusSearchAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UTXOStatusSearchAPI_autoExecuteSearchUtxoRequest**](UTXOStatusSearchAPI.md#UTXOStatusSearchAPI_autoExecuteSearchUtxoRequest) | **POST** /v2/autoexecution/search/utxo/{utxoId} | Prepare and automatically execute a search for a UTXO on a DLT.
[**UTXOStatusSearchAPI_executeUTXOPreparedSearchRequest**](UTXOStatusSearchAPI.md#UTXOStatusSearchAPI_executeUTXOPreparedSearchRequest) | **POST** /v2/execution/search/utxo | Execute a search for UTXO state on a DLT
[**UTXOStatusSearchAPI_prepareSearchUTXOState**](UTXOStatusSearchAPI.md#UTXOStatusSearchAPI_prepareSearchUTXOState) | **POST** /v2/preparation/search/utxo/{utxoId} | Prepare Search for a UTXO State.


# **UTXOStatusSearchAPI_autoExecuteSearchUtxoRequest**
```c
// Prepare and automatically execute a search for a UTXO on a DLT.
//
// Generates a request ID and automatically executes the utxo search on the requested DLT.
//
auto_execute_search_utxo_response_schema_t* UTXOStatusSearchAPI_autoExecuteSearchUtxoRequest(apiClient_t *apiClient, char * Authorization, char * utxoId, prepare_search_schema_t * prepare_search_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**utxoId** | **char \*** |  | 
**prepare_search_schema** | **[prepare_search_schema_t](prepare_search_schema.md) \*** |  | 

### Return type

[auto_execute_search_utxo_response_schema_t](auto_execute_search_utxo_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UTXOStatusSearchAPI_executeUTXOPreparedSearchRequest**
```c
// Execute a search for UTXO state on a DLT
//
// Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
//
execute_search_utxo_response_schema_t* UTXOStatusSearchAPI_executeUTXOPreparedSearchRequest(apiClient_t *apiClient, char * Authorization, char * requestId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**requestId** | **char \*** |  | 

### Return type

[execute_search_utxo_response_schema_t](execute_search_utxo_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UTXOStatusSearchAPI_prepareSearchUTXOState**
```c
// Prepare Search for a UTXO State.
//
// Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT's
//
prepare_search_response_schema_t* UTXOStatusSearchAPI_prepareSearchUTXOState(apiClient_t *apiClient, char * Authorization, char * utxoId, prepare_search_schema_t * prepare_search_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**utxoId** | **char \*** |  | 
**prepare_search_schema** | **[prepare_search_schema_t](prepare_search_schema.md) \*** |  | 

### Return type

[prepare_search_response_schema_t](prepare_search_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

