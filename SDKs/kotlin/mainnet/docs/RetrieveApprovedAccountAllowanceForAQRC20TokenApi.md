# RetrieveApprovedAccountAllowanceForAQRC20TokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readApprovedDebitAmount**](RetrieveApprovedAccountAllowanceForAQRC20TokenApi.md#readApprovedDebitAmount) | **POST** /v2/tokenise/tokens/qrc20/approved-debit-amount | Retrieve how many QRC20 tokens an address is allowed to debit


<a name="readApprovedDebitAmount"></a>
# **readApprovedDebitAmount**
> TokenReadQRC20Response readApprovedDebitAmount(authorization, readApprovedAccountAllowanceRequestSchema)

Retrieve how many QRC20 tokens an address is allowed to debit

Submits a query to the Blockchain Network and returns the number of QRC20 tokens a particular account is allowed to debit from another account

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = RetrieveApprovedAccountAllowanceForAQRC20TokenApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val readApprovedAccountAllowanceRequestSchema : ReadApprovedAccountAllowanceRequestSchema = {"requestDetails":{"payer":[{"payerId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d"}],"tokenUnit":"RobTK","mandate":[{"payeeId":"0x37dC24Fd0b91Bd2B17C5e4b52d90f13DAcc057aA"}]},"location":{"technology":"Ethereum","network":"ethereum goerli testnet"}} // ReadApprovedAccountAllowanceRequestSchema | 
try {
    val result : TokenReadQRC20Response = apiInstance.readApprovedDebitAmount(authorization, readApprovedAccountAllowanceRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling RetrieveApprovedAccountAllowanceForAQRC20TokenApi#readApprovedDebitAmount")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling RetrieveApprovedAccountAllowanceForAQRC20TokenApi#readApprovedDebitAmount")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **readApprovedAccountAllowanceRequestSchema** | [**ReadApprovedAccountAllowanceRequestSchema**](ReadApprovedAccountAllowanceRequestSchema.md)|  |

### Return type

[**TokenReadQRC20Response**](TokenReadQRC20Response.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

