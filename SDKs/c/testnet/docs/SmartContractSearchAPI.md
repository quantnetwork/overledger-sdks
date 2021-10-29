# SmartContractSearchAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SmartContractSearchAPI_executePreparedSearchRequest**](SmartContractSearchAPI.md#SmartContractSearchAPI_executePreparedSearchRequest) | **POST** /v2/execution/search/smartcontract | Execute a read of a smart contract on a DLT
[**SmartContractSearchAPI_prepareSmartContractQueryRequest**](SmartContractSearchAPI.md#SmartContractSearchAPI_prepareSmartContractQueryRequest) | **POST** /v2/preparation/search/smartcontract | Prepare a read of a smart contract on a DLT


# **SmartContractSearchAPI_executePreparedSearchRequest**
```c
// Execute a read of a smart contract on a DLT
//
// Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.
//
execute_smart_contract_read_response_schema_t* SmartContractSearchAPI_executePreparedSearchRequest(apiClient_t *apiClient, char * Authorization, char * requestId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**requestId** | **char \*** |  | 

### Return type

[execute_smart_contract_read_response_schema_t](execute_smart_contract_read_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SmartContractSearchAPI_prepareSmartContractQueryRequest**
```c
// Prepare a read of a smart contract on a DLT
//
// Returns a request ID for executing a smart contract read on Ethereum.
//
prepare_search_response_schema_t* SmartContractSearchAPI_prepareSmartContractQueryRequest(apiClient_t *apiClient, char * Authorization, prepare_search_smart_contract_request_schema_t * prepare_search_smart_contract_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**prepare_search_smart_contract_request_schema** | **[prepare_search_smart_contract_request_schema_t](prepare_search_smart_contract_request_schema.md) \*** |  | 

### Return type

[prepare_search_response_schema_t](prepare_search_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

