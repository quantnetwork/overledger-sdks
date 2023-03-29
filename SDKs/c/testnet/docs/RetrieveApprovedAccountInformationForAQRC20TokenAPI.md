# RetrieveApprovedAccountInformationForAQRC20TokenAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RetrieveApprovedAccountInformationForAQRC20TokenAPI_readQRC20SecondaryAccountOwner**](RetrieveApprovedAccountInformationForAQRC20TokenAPI.md#RetrieveApprovedAccountInformationForAQRC20TokenAPI_readQRC20SecondaryAccountOwner) | **POST** /v2/tokenise/tokens/qrc20/secondary-account-owner | Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.


# **RetrieveApprovedAccountInformationForAQRC20TokenAPI_readQRC20SecondaryAccountOwner**
```c
// Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.
//
// Submits a query to the Blockchain Network and returns whether an account is approved to make payments on behalf of another account for a particular QRC20 token.
//
token_read_qrc20_response_t* RetrieveApprovedAccountInformationForAQRC20TokenAPI_readQRC20SecondaryAccountOwner(apiClient_t *apiClient, char * Authorization, read_contract_owner_request_schema_t * read_contract_owner_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**read_contract_owner_request_schema** | **[read_contract_owner_request_schema_t](read_contract_owner_request_schema.md) \*** |  | 

### Return type

[token_read_qrc20_response_t](token_read_qrc20_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

