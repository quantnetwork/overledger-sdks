# RetrieveApprovedAccountAllowanceForAQRC20TokenAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RetrieveApprovedAccountAllowanceForAQRC20TokenAPI_readApprovedDebitAmount**](RetrieveApprovedAccountAllowanceForAQRC20TokenAPI.md#RetrieveApprovedAccountAllowanceForAQRC20TokenAPI_readApprovedDebitAmount) | **POST** /v2/tokenise/tokens/qrc20/approved-debit-amount | Retrieve how many QRC20 tokens an address is allowed to debit


# **RetrieveApprovedAccountAllowanceForAQRC20TokenAPI_readApprovedDebitAmount**
```c
// Retrieve how many QRC20 tokens an address is allowed to debit
//
// Submits a query to the Blockchain Network and returns the number of QRC20 tokens a particular account is allowed to debit from another account
//
token_read_qrc20_response_t* RetrieveApprovedAccountAllowanceForAQRC20TokenAPI_readApprovedDebitAmount(apiClient_t *apiClient, char * Authorization, read_approved_account_allowance_request_schema_t * read_approved_account_allowance_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**read_approved_account_allowance_request_schema** | **[read_approved_account_allowance_request_schema_t](read_approved_account_allowance_request_schema.md) \*** |  | 

### Return type

[token_read_qrc20_response_t](token_read_qrc20_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

