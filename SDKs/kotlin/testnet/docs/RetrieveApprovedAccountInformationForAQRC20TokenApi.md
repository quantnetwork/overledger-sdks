# RetrieveApprovedAccountInformationForAQRC20TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC20SecondaryAccountOwner**](RetrieveApprovedAccountInformationForAQRC20TokenApi.md#readQRC20SecondaryAccountOwner) | **POST** /v2/tokenise/tokens/qrc20/secondary-account-owner | Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.


<a name="readQRC20SecondaryAccountOwner"></a>
# **readQRC20SecondaryAccountOwner**
> TokenReadQRC20Response readQRC20SecondaryAccountOwner(authorization, readContractOwnerRequestSchema)

Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.

Submits a query to the Blockchain Network and returns whether an account is approved to make payments on behalf of another account for a particular QRC20 token.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = RetrieveApprovedAccountInformationForAQRC20TokenApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val readContractOwnerRequestSchema : ReadContractOwnerRequestSchema = {"tokenName":"QNTNFT","responseDetails":{"name":"Approved Account","type":"bool","value":"true"},"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"requestId":"a7db0ee3-ed9c-409a-9b51-57075a570aa0"} // ReadContractOwnerRequestSchema | 
try {
    val result : TokenReadQRC20Response = apiInstance.readQRC20SecondaryAccountOwner(authorization, readContractOwnerRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling RetrieveApprovedAccountInformationForAQRC20TokenApi#readQRC20SecondaryAccountOwner")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling RetrieveApprovedAccountInformationForAQRC20TokenApi#readQRC20SecondaryAccountOwner")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **readContractOwnerRequestSchema** | [**ReadContractOwnerRequestSchema**](ReadContractOwnerRequestSchema.md)|  |

### Return type

[**TokenReadQRC20Response**](TokenReadQRC20Response.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

