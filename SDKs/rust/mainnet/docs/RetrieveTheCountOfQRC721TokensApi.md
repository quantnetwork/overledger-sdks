# \RetrieveTheCountOfQRC721TokensApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_token_count**](RetrieveTheCountOfQRC721TokensApi.md#get_token_count) | **POST** /v2/tokenise/tokens/qrc721/token-count | Retrieve the count of a QRC721 token for a particular account



## get_token_count

> crate::models::TokenReadQrc721Response get_token_count(authorization, read_balance_request_schema)
Retrieve the count of a QRC721 token for a particular account

Submits a query to the DLN and returns the number of QRC721 tokens held by the given account ID

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**read_balance_request_schema** | [**ReadBalanceRequestSchema**](ReadBalanceRequestSchema.md) |  | [required] |

### Return type

[**crate::models::TokenReadQrc721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

