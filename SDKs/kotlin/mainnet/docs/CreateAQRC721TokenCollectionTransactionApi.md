# CreateAQRC721TokenCollectionTransactionApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepareCollectRequest**](CreateAQRC721TokenCollectionTransactionApi.md#prepareCollectRequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/collect | Prepare a QRC721 token collection transaction for signing


<a name="prepareCollectRequest"></a>
# **prepareCollectRequest**
> PrepareTransactionResponse prepareCollectRequest(authorization, preparePaymentTransactionRequestSchema)

Prepare a QRC721 token collection transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are “Approve Asset Collect” and “Collect Asset”. The “Approve Asset Collect” transaction type will allow you to approve someone to subsequently make a transaction that takes the NFT from your address into their own. The “Collect Asset” transaction type will create the transaction to pull the approved NFT from an account into the receiving account. Successfully prepared transactions can then be executed using the /execution/transaction API.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = CreateAQRC721TokenCollectionTransactionApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val preparePaymentTransactionRequestSchema : PreparePaymentTransactionRequestSchema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Approve Asset Collect","urgency":"normal","requestDetails":{"owner":{"accountId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116"},"collector":{"accountId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116","transfer":{"tokenId":"2","tokenName":"QNTNFT"}},"overledgerSigningType":"overledger-javascript-library"}} // PreparePaymentTransactionRequestSchema | 
try {
    val result : PrepareTransactionResponse = apiInstance.prepareCollectRequest(authorization, preparePaymentTransactionRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CreateAQRC721TokenCollectionTransactionApi#prepareCollectRequest")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CreateAQRC721TokenCollectionTransactionApi#prepareCollectRequest")
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

