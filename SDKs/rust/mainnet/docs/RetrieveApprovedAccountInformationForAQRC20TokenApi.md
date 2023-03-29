# \RetrieveApprovedAccountInformationForAQRC20TokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**read_qrc20_secondary_account_owner**](RetrieveApprovedAccountInformationForAQRC20TokenApi.md#read_qrc20_secondary_account_owner) | **POST** /v2/tokenise/tokens/qrc20/secondary-account-owner | Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.



## read_qrc20_secondary_account_owner

> crate::models::TokenReadQrc20Response read_qrc20_secondary_account_owner(authorization, read_contract_owner_request_schema)
Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.

Submits a query to the Blockchain Network and returns whether an account is approved to make payments on behalf of another account for a particular QRC20 token.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**read_contract_owner_request_schema** | [**ReadContractOwnerRequestSchema**](ReadContractOwnerRequestSchema.md) |  | [required] |

### Return type

[**crate::models::TokenReadQrc20Response**](TokenReadQRC20Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

