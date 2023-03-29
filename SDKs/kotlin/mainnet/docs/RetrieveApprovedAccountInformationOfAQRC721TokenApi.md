# RetrieveApprovedAccountInformationOfAQRC721TokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC721SmartContractApprovedAccount**](RetrieveApprovedAccountInformationOfAQRC721TokenApi.md#readQRC721SmartContractApprovedAccount) | **POST** /v2/tokenise/tokens/qrc721/approved-account | Retrieve which account is approved to collect a QRC721 token


<a name="readQRC721SmartContractApprovedAccount"></a>
# **readQRC721SmartContractApprovedAccount**
> TokenReadQRC721Response readQRC721SmartContractApprovedAccount(authorization, readApprovedAccountRequestSchema)

Retrieve which account is approved to collect a QRC721 token

Submits a query to the DLN and returns the address that is approved to collect a particular QRC721 token ID.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = RetrieveApprovedAccountInformationOfAQRC721TokenApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val readApprovedAccountRequestSchema : ReadApprovedAccountRequestSchema = {"requestDetails":{"tokenId":"1","tokenName":"QNTNFT"},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}} // ReadApprovedAccountRequestSchema | 
try {
    val result : TokenReadQRC721Response = apiInstance.readQRC721SmartContractApprovedAccount(authorization, readApprovedAccountRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling RetrieveApprovedAccountInformationOfAQRC721TokenApi#readQRC721SmartContractApprovedAccount")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling RetrieveApprovedAccountInformationOfAQRC721TokenApi#readQRC721SmartContractApprovedAccount")
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

