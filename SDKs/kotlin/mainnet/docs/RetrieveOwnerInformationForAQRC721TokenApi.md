# RetrieveOwnerInformationForAQRC721TokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC721SmartContractTokenOwner**](RetrieveOwnerInformationForAQRC721TokenApi.md#readQRC721SmartContractTokenOwner) | **POST** /v2/tokenise/tokens/qrc721/token-owner | Retrieve which account currently owns a specific QRC721 token


<a name="readQRC721SmartContractTokenOwner"></a>
# **readQRC721SmartContractTokenOwner**
> TokenReadQRC721Response readQRC721SmartContractTokenOwner(authorization, readTokenOwnerRequestSchema)

Retrieve which account currently owns a specific QRC721 token

Submits a query to the DLN and returns the address that currently has owns a particular QRC721 token.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = RetrieveOwnerInformationForAQRC721TokenApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val readTokenOwnerRequestSchema : ReadTokenOwnerRequestSchema = {"requestDetails":{"tokenId":"1","tokenName":"QNTNFT"},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}} // ReadTokenOwnerRequestSchema | 
try {
    val result : TokenReadQRC721Response = apiInstance.readQRC721SmartContractTokenOwner(authorization, readTokenOwnerRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling RetrieveOwnerInformationForAQRC721TokenApi#readQRC721SmartContractTokenOwner")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling RetrieveOwnerInformationForAQRC721TokenApi#readQRC721SmartContractTokenOwner")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **readTokenOwnerRequestSchema** | [**ReadTokenOwnerRequestSchema**](ReadTokenOwnerRequestSchema.md)|  |

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

