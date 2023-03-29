# AddressSearchAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddressSearchAPI_autoExecuteSearchAddressBalanceRequest**](AddressSearchAPI.md#AddressSearchAPI_autoExecuteSearchAddressBalanceRequest) | **POST** /v2/autoexecution/search/address/balance/{addressId} | Prepare and automatically execute a search for an address balance on a DLT.
[**AddressSearchAPI_executePreparedSearchRequestAddressBalance**](AddressSearchAPI.md#AddressSearchAPI_executePreparedSearchRequestAddressBalance) | **POST** /v2/execution/search/address/balance | Execute a search for an address balance on a DLT
[**AddressSearchAPI_executePreparedSearchRequestAddressSequence**](AddressSearchAPI.md#AddressSearchAPI_executePreparedSearchRequestAddressSequence) | **POST** /v2/execution/search/address/sequence | Execute a search for an address sequence on a DLT
[**AddressSearchAPI_prepareAddressBalanceSearchRequest**](AddressSearchAPI.md#AddressSearchAPI_prepareAddressBalanceSearchRequest) | **POST** /v2/preparation/search/address/balance/{addressId} | Prepare Search for an Address Balance.
[**AddressSearchAPI_prepareAddressSequenceSearchRequest**](AddressSearchAPI.md#AddressSearchAPI_prepareAddressSequenceSearchRequest) | **POST** /v2/preparation/search/address/sequence/{addressId} | Prepare Search for an Address Sequence.
[**AddressSearchAPI_prepareAddressSequenceSearchRequest1**](AddressSearchAPI.md#AddressSearchAPI_prepareAddressSequenceSearchRequest1) | **POST** /v2/autoexecution/search/address/sequence/{addressId} | Prepare and automatically execute a search for an Address Sequence.


# **AddressSearchAPI_autoExecuteSearchAddressBalanceRequest**
```c
// Prepare and automatically execute a search for an address balance on a DLT.
//
// Generates a request ID and automatically executes the address balance search on the requested DLT.
//
auto_execute_search_address_balance_response_schema_t* AddressSearchAPI_autoExecuteSearchAddressBalanceRequest(apiClient_t *apiClient, char * Authorization, char * addressId, prepare_search_schema_t * prepare_search_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**addressId** | **char \*** |  | 
**prepare_search_schema** | **[prepare_search_schema_t](prepare_search_schema.md) \*** |  | 

### Return type

[auto_execute_search_address_balance_response_schema_t](auto_execute_search_address_balance_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AddressSearchAPI_executePreparedSearchRequestAddressBalance**
```c
// Execute a search for an address balance on a DLT
//
// Takes a request ID, searches for the address and retrieves the balance on the requested DLT. This API is only applicable for account based DLTs
//
execute_search_balance_response_t* AddressSearchAPI_executePreparedSearchRequestAddressBalance(apiClient_t *apiClient, char * Authorization, char * requestId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**requestId** | **char \*** |  | 

### Return type

[execute_search_balance_response_t](execute_search_balance_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AddressSearchAPI_executePreparedSearchRequestAddressSequence**
```c
// Execute a search for an address sequence on a DLT
//
// Takes a request ID, searches for the address and retrieves the sequence on the requested DLT. This API is only applicable for account based DLT’s
//
execute_search_sequence_response_t* AddressSearchAPI_executePreparedSearchRequestAddressSequence(apiClient_t *apiClient, char * Authorization, char * requestId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**requestId** | **char \*** |  | 

### Return type

[execute_search_sequence_response_t](execute_search_sequence_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AddressSearchAPI_prepareAddressBalanceSearchRequest**
```c
// Prepare Search for an Address Balance.
//
// Perform an address balance search on the requested DLT. Returns a request ID to execute
//
prepare_search_response_schema_t* AddressSearchAPI_prepareAddressBalanceSearchRequest(apiClient_t *apiClient, char * Authorization, char * addressId, prepare_search_schema_t * prepare_search_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**addressId** | **char \*** |  | 
**prepare_search_schema** | **[prepare_search_schema_t](prepare_search_schema.md) \*** |  | 

### Return type

[prepare_search_response_schema_t](prepare_search_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AddressSearchAPI_prepareAddressSequenceSearchRequest**
```c
// Prepare Search for an Address Sequence.
//
// Perform an address sequence search on the requested DLT.Returns a request ID to execute
//
prepare_search_response_schema_t* AddressSearchAPI_prepareAddressSequenceSearchRequest(apiClient_t *apiClient, char * Authorization, char * addressId, prepare_search_schema_t * prepare_search_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**addressId** | **char \*** |  | 
**prepare_search_schema** | **[prepare_search_schema_t](prepare_search_schema.md) \*** |  | 

### Return type

[prepare_search_response_schema_t](prepare_search_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AddressSearchAPI_prepareAddressSequenceSearchRequest1**
```c
// Prepare and automatically execute a search for an Address Sequence.
//
// Generates a request ID and automatically executes the address sequence search on the requested DLT.
//
auto_exec_search_address_sequence_response_schema_t* AddressSearchAPI_prepareAddressSequenceSearchRequest1(apiClient_t *apiClient, char * Authorization, char * addressId, prepare_search_schema_t * prepare_search_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**addressId** | **char \*** |  | 
**prepare_search_schema** | **[prepare_search_schema_t](prepare_search_schema.md) \*** |  | 

### Return type

[auto_exec_search_address_sequence_response_schema_t](auto_exec_search_address_sequence_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

