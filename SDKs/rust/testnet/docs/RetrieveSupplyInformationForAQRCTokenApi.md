# \RetrieveSupplyInformationForAQRCTokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**read_qrc721_smart_contract_current_supply**](RetrieveSupplyInformationForAQRCTokenApi.md#read_qrc721_smart_contract_current_supply) | **POST** /v2/tokenise/tokens/{flowType}/current-supply | Retrieve how many QRC tokens are currently in supply



## read_qrc721_smart_contract_current_supply

> crate::models::TokenReadQrc721Response read_qrc721_smart_contract_current_supply(authorization, flow_type, prepare_request)
Retrieve how many QRC tokens are currently in supply

Submits a query to the Blockchain Network and returns the number of QRC tokens that are currently in circulation after tokens have been minted and burned.

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

