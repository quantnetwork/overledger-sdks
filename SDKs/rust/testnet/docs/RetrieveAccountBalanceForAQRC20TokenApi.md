# \RetrieveAccountBalanceForAQRC20TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**read_qrc20_smart_contract_balance**](RetrieveAccountBalanceForAQRC20TokenApi.md#read_qrc20_smart_contract_balance) | **POST** /v2/tokenise/tokens/qrc20/account-balance | Retrieve the balance of QRC20 tokens for an account



## read_qrc20_smart_contract_balance

> crate::models::TokenReadQrc20Response read_qrc20_smart_contract_balance(authorization, read_account_balance_request_schema)
Retrieve the balance of QRC20 tokens for an account

Submits a query to the Blockchain Network and returns the balance of QRC20 tokens for an account .

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**read_account_balance_request_schema** | [**ReadAccountBalanceRequestSchema**](ReadAccountBalanceRequestSchema.md) |  | [required] |

### Return type

[**crate::models::TokenReadQrc20Response**](TokenReadQRC20Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

