# ManageQRC20TokenSupplyApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedRequestTransaction**](ManageQRC20TokenSupplyApi.md#executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**prepareSupplyRequest1**](ManageQRC20TokenSupplyApi.md#prepareSupplyRequest1) | **POST** /v2/preparation/supply | Prepare a request to manage QRC20 token supply


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

val apiInstance = ManageQRC20TokenSupplyApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val executeTransactionRequest : ExecuteTransactionRequest = {"signed":"0xf8a9398501ef4f86e682a0c294f9cd6c86992fce1481dbc4bdb7e1b101c1e8cee280b844a9059cbb000000000000000000000000d8b31b65878a6b1a6caf9f4819c1a42d68a7a11600000000000000000000000000000000000000000000000000038d7ea4c6800029a088680bffd2eb74053e968ac8bcd1f76beaa61b353d8616a8cc559e57685080bea07a77b7591f09290fbb9cda5263471e8a9ca46f4c7b30d6a4885e583771d809f5","requestId":"79763168-a4f9-42bf-9f10-2e08491136a7"} // ExecuteTransactionRequest | 
try {
    val result : ExecuteTransactionResponse = apiInstance.executePreparedRequestTransaction(authorization, executeTransactionRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageQRC20TokenSupplyApi#executePreparedRequestTransaction")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageQRC20TokenSupplyApi#executePreparedRequestTransaction")
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

<a name="prepareSupplyRequest1"></a>
# **prepareSupplyRequest1**
> PrepareTransactionResponse prepareSupplyRequest1(authorization, prepareMintTransactionRequestSchemaQrc20)

Prepare a request to manage QRC20 token supply

Transforms a transaction request to manage QRC20 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue more tokens for your QRC20 token, and \&quot;Burn Tokens\&quot; which will allow you to destroy your QRC20 tokens. Successfully prepared transactions can then be executed using the /execution/transaction API.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageQRC20TokenSupplyApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val prepareMintTransactionRequestSchemaQrc20 : PrepareMintTransactionRequestSchemaQrc20 = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Burn Tokens","urgency":"normal","requestDetails":{"owner":{"accountId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d","burn":{"amount":"100","unit":"TTT"}},"message":"A message","overledgerSigningType":"overledger-javascript-library"}} // PrepareMintTransactionRequestSchemaQrc20 | 
try {
    val result : PrepareTransactionResponse = apiInstance.prepareSupplyRequest1(authorization, prepareMintTransactionRequestSchemaQrc20)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageQRC20TokenSupplyApi#prepareSupplyRequest1")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageQRC20TokenSupplyApi#prepareSupplyRequest1")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **prepareMintTransactionRequestSchemaQrc20** | [**PrepareMintTransactionRequestSchemaQrc20**](PrepareMintTransactionRequestSchemaQrc20.md)|  |

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

