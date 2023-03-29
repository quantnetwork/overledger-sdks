# \ManageQRC20TokenSupplyApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**execute_prepared_request_transaction**](ManageQRC20TokenSupplyApi.md#execute_prepared_request_transaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**prepare_supply_request1**](ManageQRC20TokenSupplyApi.md#prepare_supply_request1) | **POST** /v2/preparation/supply | Prepare a request to manage QRC20 token supply



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


## prepare_supply_request1

> crate::models::PrepareTransactionResponse prepare_supply_request1(authorization, prepare_mint_transaction_request_schema_qrc20)
Prepare a request to manage QRC20 token supply

Transforms a transaction request to manage QRC20 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue more tokens for your QRC20 token, and \"Burn Tokens\" which will allow you to destroy your QRC20 tokens. Successfully prepared transactions can then be executed using the /execution/transaction API.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**prepare_mint_transaction_request_schema_qrc20** | [**PrepareMintTransactionRequestSchemaQrc20**](PrepareMintTransactionRequestSchemaQrc20.md) |  | [required] |

### Return type

[**crate::models::PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

