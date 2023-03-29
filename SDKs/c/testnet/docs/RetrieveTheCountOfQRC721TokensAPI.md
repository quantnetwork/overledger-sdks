# RetrieveTheCountOfQRC721TokensAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RetrieveTheCountOfQRC721TokensAPI_getTokenCount**](RetrieveTheCountOfQRC721TokensAPI.md#RetrieveTheCountOfQRC721TokensAPI_getTokenCount) | **POST** /v2/tokenise/tokens/qrc721/token-count | Retrieve the count of a QRC721 token for a particular account


# **RetrieveTheCountOfQRC721TokensAPI_getTokenCount**
```c
// Retrieve the count of a QRC721 token for a particular account
//
// Submits a query to the DLN and returns the number of QRC721 tokens held by the given account ID
//
token_read_qrc721_response_t* RetrieveTheCountOfQRC721TokensAPI_getTokenCount(apiClient_t *apiClient, char * Authorization, read_balance_request_schema_t * read_balance_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**read_balance_request_schema** | **[read_balance_request_schema_t](read_balance_request_schema.md) \*** |  | 

### Return type

[token_read_qrc721_response_t](token_read_qrc721_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

