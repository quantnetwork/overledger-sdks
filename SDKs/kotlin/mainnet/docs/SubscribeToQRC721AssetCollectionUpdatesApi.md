# SubscribeToQRC721AssetCollectionUpdatesApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeCollectEvent**](SubscribeToQRC721AssetCollectionUpdatesApi.md#subscribeCollectEvent) | **POST** /v2/tokenise/tokens/subscription/qrc721/collect | Receive updates each time a QRC721 token is approved for collection or collected


<a name="subscribeCollectEvent"></a>
# **subscribeCollectEvent**
> EventSubscriptionResponse subscribeCollectEvent(authorization, body)

Receive updates each time a QRC721 token is approved for collection or collected

Set up a subscription to receive updates to a callback URL each time a QRC721 token is either approved for collected or collected. Use the type \&quot;Approve Asset Collect\&quot; to receive an update each time a token has been approved for collection, or use the type \&quot;Collect Asset\&quot; to receive an update each time a token has been collected.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = SubscribeToQRC721AssetCollectionUpdatesApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val body : kotlin.Any = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Approve Asset Collect","requestDetails":{"tokenName":"QNTNFT"}} // kotlin.Any | 
try {
    val result : EventSubscriptionResponse = apiInstance.subscribeCollectEvent(authorization, body)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling SubscribeToQRC721AssetCollectionUpdatesApi#subscribeCollectEvent")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SubscribeToQRC721AssetCollectionUpdatesApi#subscribeCollectEvent")
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

