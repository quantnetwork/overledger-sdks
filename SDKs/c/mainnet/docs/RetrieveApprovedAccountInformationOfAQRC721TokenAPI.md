# RetrieveApprovedAccountInformationOfAQRC721TokenAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RetrieveApprovedAccountInformationOfAQRC721TokenAPI_readQRC721SmartContractApprovedAccount**](RetrieveApprovedAccountInformationOfAQRC721TokenAPI.md#RetrieveApprovedAccountInformationOfAQRC721TokenAPI_readQRC721SmartContractApprovedAccount) | **POST** /v2/tokenise/tokens/qrc721/approved-account | Retrieve which account is approved to collect a QRC721 token


# **RetrieveApprovedAccountInformationOfAQRC721TokenAPI_readQRC721SmartContractApprovedAccount**
```c
// Retrieve which account is approved to collect a QRC721 token
//
// Submits a query to the DLN and returns the address that is approved to collect a particular QRC721 token ID.
//
token_read_qrc721_response_t* RetrieveApprovedAccountInformationOfAQRC721TokenAPI_readQRC721SmartContractApprovedAccount(apiClient_t *apiClient, char * Authorization, read_approved_account_request_schema_t * read_approved_account_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**read_approved_account_request_schema** | **[read_approved_account_request_schema_t](read_approved_account_request_schema.md) \*** |  | 

### Return type

[token_read_qrc721_response_t](token_read_qrc721_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

