# SubscribeToQRC20SharedAccountUpdatesApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeSecondaryOwnerEvent**](SubscribeToQRC20SharedAccountUpdatesApi.md#subscribeSecondaryOwnerEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/secondaryaccountowner | Receive updates for a shared account


<a name="subscribeSecondaryOwnerEvent"></a>
# **subscribeSecondaryOwnerEvent**
> EventSubscriptionResponse subscribeSecondaryOwnerEvent(authorization, body)

Receive updates for a shared account

Set up a subscription to receive updates to a callback URL each time a secondary account owner is added or removed using the \&quot;Add Account\&quot; &amp; \&quot;Remove Account\&quot; Request Types. Also sends update when a shared account creates a QRC20 credit payment using the \&quot;Create Credit\&quot; Request Type.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = SubscribeToQRC20SharedAccountUpdatesApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val body : kotlin.Any = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Add Account","requestDetails":{"tokenUnit":"QNTNS"}} // kotlin.Any | 
try {
    val result : EventSubscriptionResponse = apiInstance.subscribeSecondaryOwnerEvent(authorization, body)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling SubscribeToQRC20SharedAccountUpdatesApi#subscribeSecondaryOwnerEvent")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SubscribeToQRC20SharedAccountUpdatesApi#subscribeSecondaryOwnerEvent")
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

