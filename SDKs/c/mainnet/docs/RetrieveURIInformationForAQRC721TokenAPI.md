# RetrieveURIInformationForAQRC721TokenAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RetrieveURIInformationForAQRC721TokenAPI_readQRC721SmartContractUri**](RetrieveURIInformationForAQRC721TokenAPI.md#RetrieveURIInformationForAQRC721TokenAPI_readQRC721SmartContractUri) | **POST** /v2/tokenise/tokens/qrc721/token-uri | Retrieve the URI for a specific QRC721 token


# **RetrieveURIInformationForAQRC721TokenAPI_readQRC721SmartContractUri**
```c
// Retrieve the URI for a specific QRC721 token
//
// Submits a query to the DLN and returns the URI that is assigned to a particular QRC721 token
//
token_read_qrc721_response_t* RetrieveURIInformationForAQRC721TokenAPI_readQRC721SmartContractUri(apiClient_t *apiClient, char * Authorization, read_approved_account_request_schema_t * read_approved_account_request_schema);
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

