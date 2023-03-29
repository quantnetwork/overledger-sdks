# TokenControllerApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getNonFungibleToken**](TokenControllerApi.md#getNonFungibleToken) | **GET** /v2/nonfungibletoken | 


<a name="getNonFungibleToken"></a>
# **getNonFungibleToken**
> NonFungibleTokenDTO getNonFungibleToken(tokenName, technology, network)



### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = TokenControllerApi()
val tokenName : kotlin.String = tokenName_example // kotlin.String | 
val technology : kotlin.String = technology_example // kotlin.String | 
val network : kotlin.String = network_example // kotlin.String | 
try {
    val result : NonFungibleTokenDTO = apiInstance.getNonFungibleToken(tokenName, technology, network)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TokenControllerApi#getNonFungibleToken")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TokenControllerApi#getNonFungibleToken")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tokenName** | **kotlin.String**|  |
 **technology** | **kotlin.String**|  |
 **network** | **kotlin.String**|  |

### Return type

[**NonFungibleTokenDTO**](NonFungibleTokenDTO.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: */*

