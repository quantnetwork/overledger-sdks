# SupportedNonFungibleTokensAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SupportedNonFungibleTokensAPI_getAllNonFungibleTokens**](SupportedNonFungibleTokensAPI.md#SupportedNonFungibleTokensAPI_getAllNonFungibleTokens) | **GET** /v2/tokenise/tokens/nonfungible | Retrieve a list of ERC721 and QRC721 tokens


# **SupportedNonFungibleTokensAPI_getAllNonFungibleTokens**
```c
// Retrieve a list of ERC721 and QRC721 tokens
//
// Retrieves a list of non-fungible tokens supported by Overledger and which API's and functions you can use for each. You can retrieve all non-fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC721 or QRC721 as a contract type parameter. You can then filter further by including the resource using technology and network parameters. You can also look for a specific token by passing in the tokenName as a parameter.
//
non_fungible_token_response_t* SupportedNonFungibleTokensAPI_getAllNonFungibleTokens(apiClient_t *apiClient, char * Authorization, char * contractType, char * technology, char * network, char * tokenName);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**contractType** | **char \*** |  | [optional] 
**technology** | **char \*** |  | [optional] 
**network** | **char \*** |  | [optional] 
**tokenName** | **char \*** |  | [optional] 

### Return type

[non_fungible_token_response_t](non_fungible_token_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

