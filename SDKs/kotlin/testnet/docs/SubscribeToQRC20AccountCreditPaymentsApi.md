# SubscribeToQRC20AccountCreditPaymentsApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeCreditEvent**](SubscribeToQRC20AccountCreditPaymentsApi.md#subscribeCreditEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/credit | Receive updates each time there is a credit payment on your account


<a name="subscribeCreditEvent"></a>
# **subscribeCreditEvent**
> EventSubscriptionResponse subscribeCreditEvent(authorization, body)

Receive updates each time there is a credit payment on your account

Set up a subscription to receive updates to a callback URL each time there is a credit on a QRC20 token.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = SubscribeToQRC20AccountCreditPaymentsApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val body : kotlin.Any = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Create Credit","requestDetails":{"tokenUnit":"QNTNS"}} // kotlin.Any | 
try {
    val result : EventSubscriptionResponse = apiInstance.subscribeCreditEvent(authorization, body)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling SubscribeToQRC20AccountCreditPaymentsApi#subscribeCreditEvent")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SubscribeToQRC20AccountCreditPaymentsApi#subscribeCreditEvent")
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

