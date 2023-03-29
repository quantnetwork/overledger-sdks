# CreateAndPayFromAQRC20SharedAccountAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateAndPayFromAQRC20SharedAccountAPI_executePreparedRequestTransaction**](CreateAndPayFromAQRC20SharedAccountAPI.md#CreateAndPayFromAQRC20SharedAccountAPI_executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**CreateAndPayFromAQRC20SharedAccountAPI_prepareSecondaryOwnerRequest**](CreateAndPayFromAQRC20SharedAccountAPI.md#CreateAndPayFromAQRC20SharedAccountAPI_prepareSecondaryOwnerRequest) | **POST** /v2/preparation/secondaryaccountowner | Prepare a request for a QRC20 shared account


# **CreateAndPayFromAQRC20SharedAccountAPI_executePreparedRequestTransaction**
```c
// Execute a transaction on a DLT
//
// Takes a request ID and submits a signed transaction to the requested DLT.
//
execute_transaction_response_t* CreateAndPayFromAQRC20SharedAccountAPI_executePreparedRequestTransaction(apiClient_t *apiClient, char * Authorization, execute_transaction_request_t * execute_transaction_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**execute_transaction_request** | **[execute_transaction_request_t](execute_transaction_request.md) \*** |  | 

### Return type

[execute_transaction_response_t](execute_transaction_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CreateAndPayFromAQRC20SharedAccountAPI_prepareSecondaryOwnerRequest**
```c
// Prepare a request for a QRC20 shared account
//
// Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \"Remove Account\" which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API
//
prepare_transaction_response_t* CreateAndPayFromAQRC20SharedAccountAPI_prepareSecondaryOwnerRequest(apiClient_t *apiClient, char * Authorization, prepare_add_secondary_account_request_schema_t * prepare_add_secondary_account_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**prepare_add_secondary_account_request_schema** | **[prepare_add_secondary_account_request_schema_t](prepare_add_secondary_account_request_schema.md) \*** |  | 

### Return type

[prepare_transaction_response_t](prepare_transaction_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

