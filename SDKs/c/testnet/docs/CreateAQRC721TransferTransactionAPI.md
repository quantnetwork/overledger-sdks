# CreateAQRC721TransferTransactionAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateAQRC721TransferTransactionAPI_prepareTransactionRequest**](CreateAQRC721TransferTransactionAPI.md#CreateAQRC721TransferTransactionAPI_prepareTransactionRequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/transfer | Prepare a QRC721 token transfer transaction for signing


# **CreateAQRC721TransferTransactionAPI_prepareTransactionRequest**
```c
// Prepare a QRC721 token transfer transaction for signing
//
// Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is “Create Transfer” which will allow you to transfer a QRC721 token to another specified account. Successfully prepared transactions can then be executed using the /execution/transaction API.
//
prepare_transaction_response_t* CreateAQRC721TransferTransactionAPI_prepareTransactionRequest(apiClient_t *apiClient, char * Authorization, prepare_payment_transaction_request_schema_t * prepare_payment_transaction_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**prepare_payment_transaction_request_schema** | **[prepare_payment_transaction_request_schema_t](prepare_payment_transaction_request_schema.md) \*** |  | 

### Return type

[prepare_transaction_response_t](prepare_transaction_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

