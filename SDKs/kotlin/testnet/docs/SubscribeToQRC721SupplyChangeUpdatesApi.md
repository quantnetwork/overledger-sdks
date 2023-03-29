# SubscribeToQRC721SupplyChangeUpdatesApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeSupplyEvent**](SubscribeToQRC721SupplyChangeUpdatesApi.md#subscribeSupplyEvent) | **POST** /v2/tokenise/tokens/subscription/{flowtype}/supply | Receive updates each time a supply changes for a QRC721 or QRC20 token


<a name="subscribeSupplyEvent"></a>
# **subscribeSupplyEvent**
> EventSubscriptionResponse subscribeSupplyEvent(authorization, flowtype, body)

Receive updates each time a supply changes for a QRC721 or QRC20 token

Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \&quot;Mint Tokens\&quot; to receive an update each time a new token is created, or use the type \&quot;Burn Tokens\&quot; to receive an update each time a token is destroyed.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = SubscribeToQRC721SupplyChangeUpdatesApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val flowtype : kotlin.String = flowtype_example // kotlin.String | 
val body : kotlin.Any = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Burn Tokens","requestDetails":{"tokenName":"QNTNFT"}} // kotlin.Any | 
try {
    val result : EventSubscriptionResponse = apiInstance.subscribeSupplyEvent(authorization, flowtype, body)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling SubscribeToQRC721SupplyChangeUpdatesApi#subscribeSupplyEvent")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SubscribeToQRC721SupplyChangeUpdatesApi#subscribeSupplyEvent")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **flowtype** | **kotlin.String**|  |
 **body** | **kotlin.Any**|  |

### Return type

[**EventSubscriptionResponse**](EventSubscriptionResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

