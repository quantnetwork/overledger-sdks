# RetrieveOwnerInformationForAQRC721TokenAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RetrieveOwnerInformationForAQRC721TokenAPI_readQRC721SmartContractTokenOwner**](RetrieveOwnerInformationForAQRC721TokenAPI.md#RetrieveOwnerInformationForAQRC721TokenAPI_readQRC721SmartContractTokenOwner) | **POST** /v2/tokenise/tokens/qrc721/token-owner | Retrieve which account currently owns a specific QRC721 token


# **RetrieveOwnerInformationForAQRC721TokenAPI_readQRC721SmartContractTokenOwner**
```c
// Retrieve which account currently owns a specific QRC721 token
//
// Submits a query to the DLN and returns the address that currently has owns a particular QRC721 token.
//
token_read_qrc721_response_t* RetrieveOwnerInformationForAQRC721TokenAPI_readQRC721SmartContractTokenOwner(apiClient_t *apiClient, char * Authorization, read_token_owner_request_schema_t * read_token_owner_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**read_token_owner_request_schema** | **[read_token_owner_request_schema_t](read_token_owner_request_schema.md) \*** |  | 

### Return type

[token_read_qrc721_response_t](token_read_qrc721_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

