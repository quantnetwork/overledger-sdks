# RetrieveAccountBalanceForAQRC20TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC20SmartContractBalance**](RetrieveAccountBalanceForAQRC20TokenApi.md#readQRC20SmartContractBalance) | **POST** /v2/tokenise/tokens/qrc20/account-balance | Retrieve the balance of QRC20 tokens for an account


<a name="readQRC20SmartContractBalance"></a>
# **readQRC20SmartContractBalance**
> TokenReadQRC20Response readQRC20SmartContractBalance(authorization, readAccountBalanceRequestSchema)

Retrieve the balance of QRC20 tokens for an account

Submits a query to the Blockchain Network and returns the balance of QRC20 tokens for an account .

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = RetrieveAccountBalanceForAQRC20TokenApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val readAccountBalanceRequestSchema : ReadAccountBalanceRequestSchema = {"requestDetails":{"owner":{"accountId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d","unit":"ROCKET"}},"location":{"technology":"Ethereum","network":"Ropsten Testnet"}} // ReadAccountBalanceRequestSchema | 
try {
    val result : TokenReadQRC20Response = apiInstance.readQRC20SmartContractBalance(authorization, readAccountBalanceRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling RetrieveAccountBalanceForAQRC20TokenApi#readQRC20SmartContractBalance")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling RetrieveAccountBalanceForAQRC20TokenApi#readQRC20SmartContractBalance")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **readAccountBalanceRequestSchema** | [**ReadAccountBalanceRequestSchema**](ReadAccountBalanceRequestSchema.md)|  |

### Return type

[**TokenReadQRC20Response**](TokenReadQRC20Response.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

