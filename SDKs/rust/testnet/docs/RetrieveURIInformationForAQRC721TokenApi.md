# \RetrieveURIInformationForAQRC721TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**read_qrc721_smart_contract_uri**](RetrieveURIInformationForAQRC721TokenApi.md#read_qrc721_smart_contract_uri) | **POST** /v2/tokenise/tokens/qrc721/token-uri | Retrieve the URI for a specific QRC721 token



## read_qrc721_smart_contract_uri

> crate::models::TokenReadQrc721Response read_qrc721_smart_contract_uri(authorization, read_approved_account_request_schema)
Retrieve the URI for a specific QRC721 token

Submits a query to the DLN and returns the URI that is assigned to a particular QRC721 token

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**read_approved_account_request_schema** | [**ReadApprovedAccountRequestSchema**](ReadApprovedAccountRequestSchema.md) |  | [required] |

### Return type

[**crate::models::TokenReadQrc721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

