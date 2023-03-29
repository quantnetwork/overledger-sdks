# SubscribeToQRC721AssetTransfersApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeTransferEvent**](SubscribeToQRC721AssetTransfersApi.md#subscribeTransferEvent) | **POST** /v2/tokenise/tokens/subscription/qrc721/transfer | Receive updates each time a QRC721 token is transferred


<a name="subscribeTransferEvent"></a>
# **subscribeTransferEvent**
> EventSubscriptionResponse subscribeTransferEvent(authorization, body)

Receive updates each time a QRC721 token is transferred

Set up a subscription to receive updates to a callback URL each time a QRC721 token is transferred to a different owner. Use the type \&quot;Create Transfer\&quot; to receive an update each time a token is transferred to a different owner.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = SubscribeToQRC721AssetTransfersApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val body : kotlin.Any = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Create Transfer","requestDetails":{"tokenName":"QNTNS"}} // kotlin.Any | 
try {
    val result : EventSubscriptionResponse = apiInstance.subscribeTransferEvent(authorization, body)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling SubscribeToQRC721AssetTransfersApi#subscribeTransferEvent")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SubscribeToQRC721AssetTransfersApi#subscribeTransferEvent")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **body** | **kotlin.Any**|  |

### Return type

[**EventSubscriptionResponse**](EventSubscriptionResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

