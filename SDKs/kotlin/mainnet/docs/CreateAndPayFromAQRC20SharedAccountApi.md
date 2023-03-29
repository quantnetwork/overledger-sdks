# CreateAndPayFromAQRC20SharedAccountApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedRequestTransaction**](CreateAndPayFromAQRC20SharedAccountApi.md#executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**prepareSecondaryOwnerRequest**](CreateAndPayFromAQRC20SharedAccountApi.md#prepareSecondaryOwnerRequest) | **POST** /v2/preparation/secondaryaccountowner | Prepare a request for a QRC20 shared account


<a name="executePreparedRequestTransaction"></a>
# **executePreparedRequestTransaction**
> ExecuteTransactionResponse executePreparedRequestTransaction(authorization, executeTransactionRequest)

Execute a transaction on a DLT

Takes a request ID and submits a signed transaction to the requested DLT.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = CreateAndPayFromAQRC20SharedAccountApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val executeTransactionRequest : ExecuteTransactionRequest = {"signed":"0xf8a9398501ef4f86e682a0c294f9cd6c86992fce1481dbc4bdb7e1b101c1e8cee280b844a9059cbb000000000000000000000000d8b31b65878a6b1a6caf9f4819c1a42d68a7a11600000000000000000000000000000000000000000000000000038d7ea4c6800029a088680bffd2eb74053e968ac8bcd1f76beaa61b353d8616a8cc559e57685080bea07a77b7591f09290fbb9cda5263471e8a9ca46f4c7b30d6a4885e583771d809f5","requestId":"79763168-a4f9-42bf-9f10-2e08491136a7"} // ExecuteTransactionRequest | 
try {
    val result : ExecuteTransactionResponse = apiInstance.executePreparedRequestTransaction(authorization, executeTransactionRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CreateAndPayFromAQRC20SharedAccountApi#executePreparedRequestTransaction")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CreateAndPayFromAQRC20SharedAccountApi#executePreparedRequestTransaction")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **executeTransactionRequest** | [**ExecuteTransactionRequest**](ExecuteTransactionRequest.md)|  |

### Return type

[**ExecuteTransactionResponse**](ExecuteTransactionResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="prepareSecondaryOwnerRequest"></a>
# **prepareSecondaryOwnerRequest**
> PrepareTransactionResponse prepareSecondaryOwnerRequest(authorization, prepareAddSecondaryAccountRequestSchema)

Prepare a request for a QRC20 shared account

Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \&quot;Remove Account\&quot; which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = CreateAndPayFromAQRC20SharedAccountApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val prepareAddSecondaryAccountRequestSchema : PrepareAddSecondaryAccountRequestSchema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Create Credit","urgency":"normal","requestDetails":{"owner":{"accountId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d"},"payee":[{"payment":{"amount":"0.00001","unit":"FRZ"},"payeeId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116"}],"payer":[{"payerId":"0x37dc24fd0b91bd2b17c5e4b52d90f13dacc057aa"}]}} // PrepareAddSecondaryAccountRequestSchema | 
try {
    val result : PrepareTransactionResponse = apiInstance.prepareSecondaryOwnerRequest(authorization, prepareAddSecondaryAccountRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CreateAndPayFromAQRC20SharedAccountApi#prepareSecondaryOwnerRequest")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CreateAndPayFromAQRC20SharedAccountApi#prepareSecondaryOwnerRequest")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **prepareAddSecondaryAccountRequestSchema** | [**PrepareAddSecondaryAccountRequestSchema**](PrepareAddSecondaryAccountRequestSchema.md)|  |

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

