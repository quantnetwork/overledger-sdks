# FungibleTokenControllerApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getToken**](FungibleTokenControllerApi.md#getToken) | **GET** /v2/token/fungible | 


<a name="getToken"></a>
# **getToken**
> Erc20DTO getToken(technology, network, unit)



### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = FungibleTokenControllerApi()
val technology : kotlin.String = technology_example // kotlin.String | 
val network : kotlin.String = network_example // kotlin.String | 
val unit : kotlin.String = unit_example // kotlin.String | 
try {
    val result : Erc20DTO = apiInstance.getToken(technology, network, unit)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling FungibleTokenControllerApi#getToken")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling FungibleTokenControllerApi#getToken")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **technology** | **kotlin.String**|  |
 **network** | **kotlin.String**|  |
 **unit** | **kotlin.String**|  |

### Return type

[**Erc20DTO**](Erc20DTO.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: */*

