# SupportedFungibleTokensAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SupportedFungibleTokensAPI_getTokens**](SupportedFungibleTokensAPI.md#SupportedFungibleTokensAPI_getTokens) | **GET** /v2/tokens/fungible | Retrieve a list of ERC20 and QRC20 tokens


# **SupportedFungibleTokensAPI_getTokens**
```c
// Retrieve a list of ERC20 and QRC20 tokens
//
// Retrieves a list of fungible tokens supported by Overledger and which APIs and functions you can use for each. You can retrieve all fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC20 or QRC20 as a contract type parameter. You can then filter further by including the resource using the technology and network parameters. You can also look for a specific token by passing in the unit as a parameter.
//
fungible_token_response_dto_t* SupportedFungibleTokensAPI_getTokens(apiClient_t *apiClient, location_t * location, char * contractType, char * unit);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**location** | **[location_t](.md) \*** |  | [optional] 
**contractType** | **char \*** |  | [optional] 
**unit** | **char \*** |  | [optional] 

### Return type

[fungible_token_response_dto_t](fungible_token_response_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

