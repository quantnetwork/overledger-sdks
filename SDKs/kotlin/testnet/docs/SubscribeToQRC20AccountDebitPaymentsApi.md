# SubscribeToQRC20AccountDebitPaymentsApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeQRC20DebitEvent**](SubscribeToQRC20AccountDebitPaymentsApi.md#subscribeQRC20DebitEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/debit | Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved


<a name="subscribeQRC20DebitEvent"></a>
# **subscribeQRC20DebitEvent**
> EventSubscriptionResponse subscribeQRC20DebitEvent(authorization, body)

Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved

Set up a subscription to receive updates to a callback URL each time there is a debit on a QRC20 token or a QRC20 debit is approved. Use the type \&quot;Create Debit\&quot; to get an update when there is a debit payment on your account or \&quot;Approve Debit\&quot; to receive an update each time a token has been approved for debit.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = SubscribeToQRC20AccountDebitPaymentsApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val body : kotlin.Any = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Create Debit","requestDetails":{"tokenUnit":"QNTNS"}} // kotlin.Any | 
try {
    val result : EventSubscriptionResponse = apiInstance.subscribeQRC20DebitEvent(authorization, body)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling SubscribeToQRC20AccountDebitPaymentsApi#subscribeQRC20DebitEvent")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling SubscribeToQRC20AccountDebitPaymentsApi#subscribeQRC20DebitEvent")
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

