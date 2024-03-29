# CreateASubscriptionApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscription**](CreateASubscriptionApi.md#subscription) | **POST** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource 


<a name="subscription"></a>
# **subscription**
> kotlin.collections.List&lt;CreateWebhookSubscriptionResponseSchema&gt; subscription(authorization, createWebhookSubscriptionRequestSchema)

Create a subscription for a transaction or monitored resource 

Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = CreateASubscriptionApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val createWebhookSubscriptionRequestSchema : CreateWebhookSubscriptionRequestSchema = {"type":"resourceMonitoringId","ids":["71633eb9-dcda-4a7d-a176-12ac0d0bb076"],"callbackUrl":"https://callbackurl/endpoint"} // CreateWebhookSubscriptionRequestSchema | 
try {
    val result : kotlin.collections.List<CreateWebhookSubscriptionResponseSchema> = apiInstance.subscription(authorization, createWebhookSubscriptionRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CreateASubscriptionApi#subscription")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CreateASubscriptionApi#subscription")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **createWebhookSubscriptionRequestSchema** | [**CreateWebhookSubscriptionRequestSchema**](CreateWebhookSubscriptionRequestSchema.md)|  |

### Return type

[**kotlin.collections.List&lt;CreateWebhookSubscriptionResponseSchema&gt;**](CreateWebhookSubscriptionResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

