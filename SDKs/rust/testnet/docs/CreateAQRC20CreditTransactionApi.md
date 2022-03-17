# \CreateAQRC20CreditTransactionApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepare_credit_request**](CreateAQRC20CreditTransactionApi.md#prepare_credit_request) | **POST** /v2/preparation/credit | Prepare a QRC20 token credit transaction for signing



## prepare_credit_request

> crate::models::PrepareTransactionResponse prepare_credit_request(authorization, prepare_credit_transaction_request_schema)
Prepare a QRC20 token credit transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is \"Create Credit\" which will allow you to make a payment to another specified account.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**prepare_credit_transaction_request_schema** | [**PrepareCreditTransactionRequestSchema**](PrepareCreditTransactionRequestSchema.md) |  | [required] |

### Return type

[**crate::models::PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

