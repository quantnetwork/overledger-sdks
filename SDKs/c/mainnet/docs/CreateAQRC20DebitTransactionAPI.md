# CreateAQRC20DebitTransactionAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateAQRC20DebitTransactionAPI_prepareDebitRequest**](CreateAQRC20DebitTransactionAPI.md#CreateAQRC20DebitTransactionAPI_prepareDebitRequest) | **POST** /v2/preparation/debit | Prepare a QRC20 token debit transaction for signing


# **CreateAQRC20DebitTransactionAPI_prepareDebitRequest**
```c
// Prepare a QRC20 token debit transaction for signing
//
// Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are \"Approve Debit\" and \"Create Debit\". The 'Approve Debit' transaction type will allow you to approve someone to make a pull payment from your account and the \"Create Debit\" transaction type will create the payment to pull the approved amount from an account.
//
prepare_transaction_response_t* CreateAQRC20DebitTransactionAPI_prepareDebitRequest(apiClient_t *apiClient, char * Authorization, prepare_credit_transaction_request_schema_t * prepare_credit_transaction_request_schema);
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

