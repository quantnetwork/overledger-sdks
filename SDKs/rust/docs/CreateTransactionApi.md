# \CreateTransactionApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**execute_prepared_request_native_transaction**](CreateTransactionApi.md#execute_prepared_request_native_transaction) | **POST** /v2/execution/nativetransaction | Execute a native transaction on the DLT
[**execute_prepared_request_transaction**](CreateTransactionApi.md#execute_prepared_request_transaction) | **POST** /v2/execution/transaction | Execute a transaction on the DLT
[**prepare_native_transaction**](CreateTransactionApi.md#prepare_native_transaction) | **POST** /v2/preparation/nativetransaction | Prepare a DLT native transaction
[**prepare_transaction_request**](CreateTransactionApi.md#prepare_transaction_request) | **POST** /v2/preparation/transaction | Prepare a DLT transaction for signing



## execute_prepared_request_native_transaction

> crate::models::ExecuteTransactionResponse execute_prepared_request_native_transaction(authorization, execute_transaction_request)
Execute a native transaction on the DLT

Takes a request ID and submits a signed native transaction to the requested DLT

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


## execute_prepared_request_transaction

> crate::models::ExecuteTransactionResponse execute_prepared_request_transaction(authorization, execute_transaction_request)
Execute a transaction on the DLT

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


## prepare_native_transaction

> crate::models::PrepareSearchResponseSchema prepare_native_transaction(authorization, prepare_native_transaction_request_schema)
Prepare a DLT native transaction

Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**prepare_native_transaction_request_schema** | [**PrepareNativeTransactionRequestSchema**](PrepareNativeTransactionRequestSchema.md) |  | [required] |

### Return type

[**crate::models::PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## prepare_transaction_request

> crate::models::PrepareTransactionResponse prepare_transaction_request(authorization, UNKNOWN_BASE_TYPE)
Prepare a DLT transaction for signing

Transforms a transaction request into a payload ready for signing for the requested DLT and returns a request ID for executing. Supported transaction types in this release are “Payment” (to send payments) and “Smart Contract Invoke” (to invoke arbitrary smart contract functions)

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**UNKNOWN_BASE_TYPE** | Option<[**UNKNOWN_BASE_TYPE**](UNKNOWN_BASE_TYPE.md)> |  | [required] |

### Return type

[**crate::models::PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

