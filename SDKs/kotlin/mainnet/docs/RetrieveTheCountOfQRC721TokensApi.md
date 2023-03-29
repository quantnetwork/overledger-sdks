# RetrieveTheCountOfQRC721TokensApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTokenCount**](RetrieveTheCountOfQRC721TokensApi.md#getTokenCount) | **POST** /v2/tokenise/tokens/qrc721/token-count | Retrieve the count of a QRC721 token for a particular account


<a name="getTokenCount"></a>
# **getTokenCount**
> TokenReadQRC721Response getTokenCount(authorization, readBalanceRequestSchema)

Retrieve the count of a QRC721 token for a particular account

Submits a query to the DLN and returns the number of QRC721 tokens held by the given account ID

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = RetrieveTheCountOfQRC721TokensApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val readBalanceRequestSchema : ReadBalanceRequestSchema = {"requestDetails":{"tokenName":"QNTNFT","accountId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116"},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}} // ReadBalanceRequestSchema | 
try {
    val result : TokenReadQRC721Response = apiInstance.getTokenCount(authorization, readBalanceRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling RetrieveTheCountOfQRC721TokensApi#getTokenCount")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling RetrieveTheCountOfQRC721TokensApi#getTokenCount")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **readBalanceRequestSchema** | [**ReadBalanceRequestSchema**](ReadBalanceRequestSchema.md)|  |

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

