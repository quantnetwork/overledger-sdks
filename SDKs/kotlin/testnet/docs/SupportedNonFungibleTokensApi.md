# SupportedNonFungibleTokensApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getAllNonFungibleTokens**](SupportedNonFungibleTokensApi.md#getAllNonFungibleTokens) | **GET** /v2/tokenise/tokens/nonfungible | Retrieve a list of ERC721 and QRC721 tokens


<a name="getAllNonFungibleTokens"></a>
# **getAllNonFungibleTokens**
> NonFungibleTokenResponse getAllNonFungibleTokens(authorization, contractType, technology, network, tokenName)

Retrieve a list of ERC721 and QRC721 tokens

Retrieves a list of non-fungible tokens supported by Overledger and which API&#39;s and functions you can use for each. You can retrieve all non-fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC721 or QRC721 as a contract type parameter. You can then filter further by including the resource using technology and network parameters. You can also look for a specific token by passing in the tokenName as a parameter.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = SupportedNonFungibleTokensApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val contractType : kotlin.String = contractType_example // kotlin.String | 
val technology : kotlin.String = technology_example // kotlin.String | 
val network : kotlin.String = network_example // kotlin.String | 
val tokenName : kotlin.String = tokenName_example // kotlin.String | 
try {
    val result : NonFungibleTokenResponse = apiInstance.getAllNonFungibleTokens(authorization, contractType, technology, network, tokenName)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling SupportedNonFungibleTokensApi#getAllNonFungibleTokens")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SupportedNonFungibleTokensApi#getAllNonFungibleTokens")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **contractType** | **kotlin.String**|  | [optional]
 **technology** | **kotlin.String**|  | [optional]
 **network** | **kotlin.String**|  | [optional]
 **tokenName** | **kotlin.String**|  | [optional]

### Return type

[**NonFungibleTokenResponse**](NonFungibleTokenResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

