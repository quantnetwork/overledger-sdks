# CreateAQRC20DebitTransactionApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepareDebitRequest**](CreateAQRC20DebitTransactionApi.md#prepareDebitRequest) | **POST** /v2/preparation/debit | Prepare a QRC20 token debit transaction for signing


<a name="prepareDebitRequest"></a>
# **prepareDebitRequest**
> PrepareTransactionResponse prepareDebitRequest(authorization, prepareCreditTransactionRequestSchema)

Prepare a QRC20 token debit transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are \&quot;Approve Debit\&quot; and \&quot;Create Debit\&quot;. The &#39;Approve Debit&#39; transaction type will allow you to approve someone to make a pull payment from your account and the \&quot;Create Debit\&quot; transaction type will create the payment to pull the approved amount from an account.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = CreateAQRC20DebitTransactionApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val prepareCreditTransactionRequestSchema : PrepareCreditTransactionRequestSchema = {"urgency":"normal","requestDetails":{"payee":[{"payment":{"amount":"1.0","unit":"QNT"},"payeeId":"0x8917cf2A57DF39D311a96c53FCCA76dAFB25392B"}],"overledgerSigningType":"overledger-javascript-library","message":"OVL Transaction Message","payer":[{"payerId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d"}]},"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Create Debit"} // PrepareCreditTransactionRequestSchema | 
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

