# RetrieveURIInformationForAQRC721TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC721SmartContractUri**](RetrieveURIInformationForAQRC721TokenApi.md#readQRC721SmartContractUri) | **POST** /v2/tokenise/tokens/qrc721/token-uri | Retrieve the URI for a specific QRC721 token


<a name="readQRC721SmartContractUri"></a>
# **readQRC721SmartContractUri**
> TokenReadQRC721Response readQRC721SmartContractUri(authorization, readApprovedAccountRequestSchema)

Retrieve the URI for a specific QRC721 token

Submits a query to the DLN and returns the URI that is assigned to a particular QRC721 token

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = RetrieveURIInformationForAQRC721TokenApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val readApprovedAccountRequestSchema : ReadApprovedAccountRequestSchema = {"requestDetails":{"tokenId":"1","tokenName":"QNTNFT"},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}} // ReadApprovedAccountRequestSchema | 
try {
    val result : TokenReadQRC721Response = apiInstance.readQRC721SmartContractUri(authorization, readApprovedAccountRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling RetrieveURIInformationForAQRC721TokenApi#readQRC721SmartContractUri")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling RetrieveURIInformationForAQRC721TokenApi#readQRC721SmartContractUri")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **readApprovedAccountRequestSchema** | [**ReadApprovedAccountRequestSchema**](ReadApprovedAccountRequestSchema.md)|  |

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

