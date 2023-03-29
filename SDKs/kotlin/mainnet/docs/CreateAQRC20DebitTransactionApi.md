# CreateAQRC20DebitTransactionApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedRequestTransaction**](CreateAQRC20DebitTransactionApi.md#executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**prepareDebitRequest**](CreateAQRC20DebitTransactionApi.md#prepareDebitRequest) | **POST** /v2/preparation/debit | Prepare a QRC20 token debit transaction for signing


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

val apiInstance = CreateAQRC20DebitTransactionApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val executeTransactionRequest : ExecuteTransactionRequest = {"signed":"0xf8a9398501ef4f86e682a0c294f9cd6c86992fce1481dbc4bdb7e1b101c1e8cee280b844a9059cbb000000000000000000000000d8b31b65878a6b1a6caf9f4819c1a42d68a7a11600000000000000000000000000000000000000000000000000038d7ea4c6800029a088680bffd2eb74053e968ac8bcd1f76beaa61b353d8616a8cc559e57685080bea07a77b7591f09290fbb9cda5263471e8a9ca46f4c7b30d6a4885e583771d809f5","requestId":"79763168-a4f9-42bf-9f10-2e08491136a7"} // ExecuteTransactionRequest | 
try {
    val result : ExecuteTransactionResponse = apiInstance.executePreparedRequestTransaction(authorization, executeTransactionRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CreateAQRC20DebitTransactionApi#executePreparedRequestTransaction")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CreateAQRC20DebitTransactionApi#executePreparedRequestTransaction")
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

<a name="prepareDebitRequest"></a>
# **prepareDebitRequest**
> PrepareTransactionResponse prepareDebitRequest(authorization, prepareCreditTransactionRequestSchema)

Prepare a QRC20 token debit transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are “Approve Debit” and “Create Debit”. The ‘Approve Debit’ transaction type will allow you to approve someone to make a pull payment from your account and the “Create Debit” transaction type will create the payment to pull the approved amount from an account.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = CreateAQRC20DebitTransactionApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val prepareCreditTransactionRequestSchema : PrepareCreditTransactionRequestSchema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Create Debit","urgency":"normal","requestDetails":{"payee":[{"payment":{"amount":"1.0","unit":"QNT"},"payeeId":"0x8917cf2A57DF39D311a96c53FCCA76dAFB25392B"}],"message":"OVL Transaction Message","payer":[{"payerId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d"}],"overledgerSigningType":"overledger-javascript-library"}} // PrepareCreditTransactionRequestSchema | 
try {
    val result : PrepareTransactionResponse = apiInstance.prepareDebitRequest(authorization, prepareCreditTransactionRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CreateAQRC20DebitTransactionApi#prepareDebitRequest")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CreateAQRC20DebitTransactionApi#prepareDebitRequest")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **prepareCreditTransactionRequestSchema** | [**PrepareCreditTransactionRequestSchema**](PrepareCreditTransactionRequestSchema.md)|  |

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

