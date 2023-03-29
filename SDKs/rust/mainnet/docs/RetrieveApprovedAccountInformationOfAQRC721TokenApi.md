# \RetrieveApprovedAccountInformationOfAQRC721TokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**read_qrc721_smart_contract_approved_account**](RetrieveApprovedAccountInformationOfAQRC721TokenApi.md#read_qrc721_smart_contract_approved_account) | **POST** /v2/tokenise/tokens/qrc721/approved-account | Retrieve which account is approved to collect a QRC721 token



## read_qrc721_smart_contract_approved_account

> crate::models::TokenReadQrc721Response read_qrc721_smart_contract_approved_account(authorization, read_approved_account_request_schema)
Retrieve which account is approved to collect a QRC721 token

Submits a query to the DLN and returns the address that is approved to collect a particular QRC721 token ID.

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

