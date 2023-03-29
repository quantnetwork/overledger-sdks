# ManageQRC20TokenSupplyAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ManageQRC20TokenSupplyAPI_executePreparedRequestTransaction**](ManageQRC20TokenSupplyAPI.md#ManageQRC20TokenSupplyAPI_executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**ManageQRC20TokenSupplyAPI_prepareSupplyRequest1**](ManageQRC20TokenSupplyAPI.md#ManageQRC20TokenSupplyAPI_prepareSupplyRequest1) | **POST** /v2/preparation/supply | Prepare a request to manage QRC20 token supply


# **ManageQRC20TokenSupplyAPI_executePreparedRequestTransaction**
```c
// Execute a transaction on a DLT
//
// Takes a request ID and submits a signed transaction to the requested DLT.
//
execute_transaction_response_t* ManageQRC20TokenSupplyAPI_executePreparedRequestTransaction(apiClient_t *apiClient, char * Authorization, execute_transaction_request_t * execute_transaction_request);
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

# **ManageQRC20TokenSupplyAPI_prepareSupplyRequest1**
```c
// Prepare a request to manage QRC20 token supply
//
// Transforms a transaction request to manage QRC20 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue more tokens for your QRC20 token, and \"Burn Tokens\" which will allow you to destroy your QRC20 tokens. Successfully prepared transactions can then be executed using the /execution/transaction API.
//
prepare_transaction_response_t* ManageQRC20TokenSupplyAPI_prepareSupplyRequest1(apiClient_t *apiClient, char * Authorization, prepare_mint_transaction_request_schema_qrc20_t * prepare_mint_transaction_request_schema_qrc20);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**prepare_mint_transaction_request_schema_qrc20** | **[prepare_mint_transaction_request_schema_qrc20_t](prepare_mint_transaction_request_schema_qrc20.md) \*** |  | 

### Return type

[prepare_transaction_response_t](prepare_transaction_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

