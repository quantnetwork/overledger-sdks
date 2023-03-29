# ManageQRC721TokenSupplyApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepareSupplyRequest**](ManageQRC721TokenSupplyApi.md#prepareSupplyRequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/supply | Prepare a transaction to manage QRC721 token supply


<a name="prepareSupplyRequest"></a>
# **prepareSupplyRequest**
> PrepareTransactionResponse prepareSupplyRequest(authorization, prepareMintTransactionRequestSchemaQrc721)

Prepare a transaction to manage QRC721 token supply

Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \&quot;Burn Tokens\&quot; which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageQRC721TokenSupplyApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val prepareMintTransactionRequestSchemaQrc721 : PrepareMintTransactionRequestSchemaQrc721 = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"Burn Tokens","urgency":"normal","requestDetails":{"owner":{"accountId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116","burn":{"tokenId":"2","tokenName":"QNTNFT","metadata":"something"}},"overledgerSigningType":"overledger-javascript-library"}} // PrepareMintTransactionRequestSchemaQrc721 | 
try {
    val result : PrepareTransactionResponse = apiInstance.prepareSupplyRequest(authorization, prepareMintTransactionRequestSchemaQrc721)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageQRC721TokenSupplyApi#prepareSupplyRequest")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageQRC721TokenSupplyApi#prepareSupplyRequest")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **prepareMintTransactionRequestSchemaQrc721** | [**PrepareMintTransactionRequestSchemaQrc721**](PrepareMintTransactionRequestSchemaQrc721.md)|  |

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

