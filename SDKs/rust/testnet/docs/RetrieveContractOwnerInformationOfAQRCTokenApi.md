# \RetrieveContractOwnerInformationOfAQRCTokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**read_qrc_smart_contract_owner**](RetrieveContractOwnerInformationOfAQRCTokenApi.md#read_qrc_smart_contract_owner) | **POST** /v2/tokenise/tokens/{flowType}/contract-owner | Retrieve which account has contract owner permissions for a QRC token



## read_qrc_smart_contract_owner

> crate::models::TokenReadQrc721Response read_qrc_smart_contract_owner(authorization, flow_type, prepare_request)
Retrieve which account has contract owner permissions for a QRC token

Submits a query to the Blockchain Network and returns the address that currently has contract owner permissions for a particular QRC token.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**flow_type** | **String** |  | [required] |
**prepare_request** | [**PrepareRequest**](PrepareRequest.md) |  | [required] |

### Return type

[**crate::models::TokenReadQrc721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

