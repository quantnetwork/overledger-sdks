# RetrieveAccountBalanceForAQRC20TokenAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RetrieveAccountBalanceForAQRC20TokenAPI_readQRC20SmartContractBalance**](RetrieveAccountBalanceForAQRC20TokenAPI.md#RetrieveAccountBalanceForAQRC20TokenAPI_readQRC20SmartContractBalance) | **POST** /v2/tokenise/tokens/qrc20/account-balance | Retrieve the balance of QRC20 tokens for an account


# **RetrieveAccountBalanceForAQRC20TokenAPI_readQRC20SmartContractBalance**
```c
// Retrieve the balance of QRC20 tokens for an account
//
// Submits a query to the Blockchain Network and returns the balance of QRC20 tokens for an account .
//
token_read_qrc20_response_t* RetrieveAccountBalanceForAQRC20TokenAPI_readQRC20SmartContractBalance(apiClient_t *apiClient, char * Authorization, read_account_balance_request_schema_t * read_account_balance_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**read_account_balance_request_schema** | **[read_account_balance_request_schema_t](read_account_balance_request_schema.md) \*** |  | 

### Return type

[token_read_qrc20_response_t](token_read_qrc20_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

