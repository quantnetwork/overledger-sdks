# \CreateAndPayFromAQRC20SharedAccountApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**execute_prepared_request_transaction**](CreateAndPayFromAQRC20SharedAccountApi.md#execute_prepared_request_transaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**prepare_secondary_owner_request**](CreateAndPayFromAQRC20SharedAccountApi.md#prepare_secondary_owner_request) | **POST** /v2/preparation/secondaryaccountowner | Prepare a request for a QRC20 shared account



## execute_prepared_request_transaction

> crate::models::ExecuteTransactionResponse execute_prepared_request_transaction(authorization, execute_transaction_request)
Execute a transaction on a DLT

Takes a request ID and submits a signed transaction to the requested DLT.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**execute_transaction_request** | [**ExecuteTransactionRequest**](ExecuteTransactionRequest.md) |  | [required] |

### Return type

[**crate::models::ExecuteTransactionResponse**](ExecuteTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## prepare_secondary_owner_request

> crate::models::PrepareTransactionResponse prepare_secondary_owner_request(authorization, prepare_add_secondary_account_request_schema)
Prepare a request for a QRC20 shared account

Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \"Remove Account\" which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**prepare_add_secondary_account_request_schema** | [**PrepareAddSecondaryAccountRequestSchema**](PrepareAddSecondaryAccountRequestSchema.md) |  | [required] |

### Return type

[**crate::models::PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

