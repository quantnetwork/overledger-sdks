# SupportedFungibleTokensApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTokens**](SupportedFungibleTokensApi.md#getTokens) | **GET** /v2/tokens/fungible | Retrieve a list of ERC20 and QRC20 tokens


<a name="getTokens"></a>
# **getTokens**
> FungibleTokenResponseDTO getTokens(location, contractType, unit)

Retrieve a list of ERC20 and QRC20 tokens

Retrieves a list of fungible tokens supported by Overledger and which APIs and functions you can use for each. You can retrieve all fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC20 or QRC20 as a contract type parameter. You can then filter further by including the resource using the technology and network parameters. You can also look for a specific token by passing in the unit as a parameter.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = SupportedFungibleTokensApi()
val location : Location =  // Location | 
val contractType : kotlin.String = contractType_example // kotlin.String | 
val unit : kotlin.String = unit_example // kotlin.String | 
try {
    val result : FungibleTokenResponseDTO = apiInstance.getTokens(location, contractType, unit)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling SupportedFungibleTokensApi#getTokens")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SupportedFungibleTokensApi#getTokens")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **location** | [**Location**](.md)|  | [optional]
 **contractType** | **kotlin.String**|  | [optional]
 **unit** | **kotlin.String**|  | [optional]

### Return type

[**FungibleTokenResponseDTO**](FungibleTokenResponseDTO.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

