# \RetrieveOwnerInformationForAQRC721TokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**read_qrc721_smart_contract_token_owner**](RetrieveOwnerInformationForAQRC721TokenApi.md#read_qrc721_smart_contract_token_owner) | **POST** /v2/tokenise/tokens/qrc721/token-owner | Retrieve which account currently owns a specific QRC721 token



## read_qrc721_smart_contract_token_owner

> crate::models::TokenReadQrc721Response read_qrc721_smart_contract_token_owner(authorization, read_token_owner_request_schema)
Retrieve which account currently owns a specific QRC721 token

Submits a query to the DLN and returns the address that currently has owns a particular QRC721 token.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**read_token_owner_request_schema** | [**ReadTokenOwnerRequestSchema**](ReadTokenOwnerRequestSchema.md) |  | [required] |

### Return type

[**crate::models::TokenReadQrc721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

