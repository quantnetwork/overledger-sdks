# CreateAQRC721TransferTransactionApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepareTransactionRequest**](CreateAQRC721TransferTransactionApi.md#prepareTransactionRequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/transfer | Prepare a QRC721 token transfer transaction for signing


<a name="prepareTransactionRequest"></a>
# **prepareTransactionRequest**
> PrepareTransactionResponse prepareTransactionRequest(authorization, preparePaymentTransactionRequestSchema)

Prepare a QRC721 token transfer transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is “Create Transfer” which will allow you to transfer a QRC721 token to another specified account. Successfully prepared transactions can then be executed using the /execution/transaction API.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = CreateAQRC721TransferTransactionApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val preparePaymentTransactionRequestSchema : PreparePaymentTransactionRequestSchema = {"location":{"technology":"Substrate","network":"Polkadot Westend Testnet"},"type":"PAYMENT","urgency":"normal","requestDetails":{"destination":[{"destinationId":"5FLSigC9HGRKVhB9FiEo4Y3koPsNmBmLJbpXg2mp1hXcS59Y","payment":{"amount":"0.0000000001","unit":"WND"}}],"message":"OVL Transaction Message","overledgerSigningType":"overledger-javascript-library","origin":[{"originId":"5GrwvaEF5zXb26Fz9rcQpDWS57CtERHpNehXCPcNoHGKutQY"}]}} // PreparePaymentTransactionRequestSchema | 
try {
    val result : PrepareTransactionResponse = apiInstance.prepareTransactionRequest(authorization, preparePaymentTransactionRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CreateAQRC721TransferTransactionApi#prepareTransactionRequest")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CreateAQRC721TransferTransactionApi#prepareTransactionRequest")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **preparePaymentTransactionRequestSchema** | [**PreparePaymentTransactionRequestSchema**](PreparePaymentTransactionRequestSchema.md)|  |

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

