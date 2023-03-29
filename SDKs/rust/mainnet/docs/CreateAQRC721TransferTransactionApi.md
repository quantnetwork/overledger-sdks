# \CreateAQRC721TransferTransactionApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepare_transaction_request**](CreateAQRC721TransferTransactionApi.md#prepare_transaction_request) | **POST** /v2/tokenise/preparation/transaction/qrc721/transfer | Prepare a QRC721 token transfer transaction for signing



## prepare_transaction_request

> crate::models::PrepareTransactionResponse prepare_transaction_request(authorization, prepare_payment_transaction_request_schema)
Prepare a QRC721 token transfer transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is “Create Transfer” which will allow you to transfer a QRC721 token to another specified account. Successfully prepared transactions can then be executed using the /execution/transaction API.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**prepare_payment_transaction_request_schema** | [**PreparePaymentTransactionRequestSchema**](PreparePaymentTransactionRequestSchema.md) |  | [required] |

### Return type

[**crate::models::PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

