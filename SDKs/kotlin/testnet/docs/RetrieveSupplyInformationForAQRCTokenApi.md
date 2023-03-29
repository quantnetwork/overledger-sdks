# RetrieveSupplyInformationForAQRCTokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC721SmartContractCurrentSupply**](RetrieveSupplyInformationForAQRCTokenApi.md#readQRC721SmartContractCurrentSupply) | **POST** /v2/tokenise/tokens/{flowType}/current-supply | Retrieve how many QRC tokens are currently in supply


<a name="readQRC721SmartContractCurrentSupply"></a>
# **readQRC721SmartContractCurrentSupply**
> TokenReadQRC721Response readQRC721SmartContractCurrentSupply(authorization, flowType, prepareRequest)

Retrieve how many QRC tokens are currently in supply

Submits a query to the Blockchain Network and returns the number of QRC tokens that are currently in circulation after tokens have been minted and burned.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = RetrieveSupplyInformationForAQRCTokenApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val flowType : kotlin.String = flowType_example // kotlin.String | 
val prepareRequest : PrepareRequest =  // PrepareRequest | 
try {
    val result : TokenReadQRC721Response = apiInstance.readQRC721SmartContractCurrentSupply(authorization, flowType, prepareRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling RetrieveSupplyInformationForAQRCTokenApi#readQRC721SmartContractCurrentSupply")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling RetrieveSupplyInformationForAQRCTokenApi#readQRC721SmartContractCurrentSupply")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **flowType** | **kotlin.String**|  |
 **prepareRequest** | [**PrepareRequest**](PrepareRequest.md)|  |

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

