# \TransactionSearchApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**execute_prepared_search_request_transaction**](TransactionSearchApi.md#execute_prepared_search_request_transaction) | **POST** /v2/execution/search/transaction | Execute a search for a transaction on a DLT
[**prepare_search_request**](TransactionSearchApi.md#prepare_search_request) | **POST** /v2/preparation/search/transaction | Prepare a search for a transaction on a DLT



## execute_prepared_search_request_transaction

> crate::models::ExecuteSearchTransactionResponse execute_prepared_search_request_transaction(authorization, request_id)
Execute a search for a transaction on a DLT

Takes a request ID and searches for the transaction on the requested DLT

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**request_id** | **String** |  | [required] |

### Return type

[**crate::models::ExecuteSearchTransactionResponse**](ExecuteSearchTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## prepare_search_request

> crate::models::PrepareSearchResponseSchema prepare_search_request(authorization, transaction_id, prepare_search_schema)
Prepare a search for a transaction on a DLT

Searches for and returns data on transactions on a particular DLT. Returns a request ID for executing a transaction search on the requested DLT

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**transaction_id** | **String** |  | [required] |
**prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  | [required] |

### Return type

[**crate::models::PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

