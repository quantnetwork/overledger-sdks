# CreateAQRC20CreditTransactionAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateAQRC20CreditTransactionAPI_executePreparedRequestTransaction**](CreateAQRC20CreditTransactionAPI.md#CreateAQRC20CreditTransactionAPI_executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**CreateAQRC20CreditTransactionAPI_prepareCreditRequest**](CreateAQRC20CreditTransactionAPI.md#CreateAQRC20CreditTransactionAPI_prepareCreditRequest) | **POST** /v2/preparation/credit | Prepare a QRC20 token credit transaction for signing


# **CreateAQRC20CreditTransactionAPI_executePreparedRequestTransaction**
```c
// Execute a transaction on a DLT
//
// Takes a request ID and submits a signed transaction to the requested DLT.
//
execute_transaction_response_t* CreateAQRC20CreditTransactionAPI_executePreparedRequestTransaction(apiClient_t *apiClient, char * Authorization, execute_transaction_request_t * execute_transaction_request);
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

# **CreateAQRC20CreditTransactionAPI_prepareCreditRequest**
```c
// Prepare a QRC20 token credit transaction for signing
//
// Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is “Create Credit” which will allow you to make a payment to another specified account.
//
prepare_transaction_response_t* CreateAQRC20CreditTransactionAPI_prepareCreditRequest(apiClient_t *apiClient, char * Authorization, prepare_credit_transaction_request_schema_t * prepare_credit_transaction_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**prepare_credit_transaction_request_schema** | **[prepare_credit_transaction_request_schema_t](prepare_credit_transaction_request_schema.md) \*** |  | 

### Return type

[prepare_transaction_response_t](prepare_transaction_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

