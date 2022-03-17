# CreateAQRC20CreditTransactionApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepareCreditRequest**](CreateAQRC20CreditTransactionApi.md#prepareCreditRequest) | **POST** /v2/preparation/credit | Prepare a QRC20 token credit transaction for signing


<a name="prepareCreditRequest"></a>
# **prepareCreditRequest**
> PrepareTransactionResponse prepareCreditRequest(authorization, prepareCreditTransactionRequestSchema)

Prepare a QRC20 token credit transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is \&quot;Create Credit\&quot; which will allow you to make a payment to another specified account.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = CreateAQRC20CreditTransactionApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val prepareCreditTransactionRequestSchema : PrepareCreditTransactionRequestSchema = {"urgency":"normal","requestDetails":{"payee":[{"payment":{"amount":"0.0000001","unit":"TEST"},"payeeId":"0x8917cf2A57DF39D311a96c53FCCA76dAFB25392B"}],"overledgerSigningType":"overledger-javascript-library","message":"OVL Transaction Message","payer":[{"payerId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d"}]},"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Create Credit"} // PrepareCreditTransactionRequestSchema | 
try {
    val result : PrepareTransactionResponse = apiInstance.prepareCreditRequest(authorization, prepareCreditTransactionRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CreateAQRC20CreditTransactionApi#prepareCreditRequest")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CreateAQRC20CreditTransactionApi#prepareCreditRequest")
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

