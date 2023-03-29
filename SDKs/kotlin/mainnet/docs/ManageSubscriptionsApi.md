# ManageSubscriptionsApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**deleteSubscription**](ManageSubscriptionsApi.md#deleteSubscription) | **DELETE** /v2/webhook/subscription/{subscriptionId} | Remove a subscription created by your application
[**listSubscriptions**](ManageSubscriptionsApi.md#listSubscriptions) | **GET** /v2/webhook/subscriptions | Retrieve a list of subscriptions created by your application
[**updateSubscription**](ManageSubscriptionsApi.md#updateSubscription) | **PATCH** /v2/webhook/subscription/{subscriptionId} | Update a specific subscription created by your application


<a name="deleteSubscription"></a>
# **deleteSubscription**
> WebhookSubscriptionStatusUpdateResponse deleteSubscription(authorization, subscriptionId)

Remove a subscription created by your application

Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageSubscriptionsApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val subscriptionId : kotlin.String = subscriptionId_example // kotlin.String | 
try {
    val result : WebhookSubscriptionStatusUpdateResponse = apiInstance.deleteSubscription(authorization, subscriptionId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageSubscriptionsApi#deleteSubscription")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageSubscriptionsApi#deleteSubscription")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **subscriptionId** | **kotlin.String**|  |

### Return type

[**WebhookSubscriptionStatusUpdateResponse**](WebhookSubscriptionStatusUpdateResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="listSubscriptions"></a>
# **listSubscriptions**
> kotlin.collections.List&lt;ListWebhookSubscriptionResponseSchema&gt; listSubscriptions(authorization)

Retrieve a list of subscriptions created by your application

Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageSubscriptionsApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
try {
    val result : kotlin.collections.List<ListWebhookSubscriptionResponseSchema> = apiInstance.listSubscriptions(authorization)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageSubscriptionsApi#listSubscriptions")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageSubscriptionsApi#listSubscriptions")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |

### Return type

[**kotlin.collections.List&lt;ListWebhookSubscriptionResponseSchema&gt;**](ListWebhookSubscriptionResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="updateSubscription"></a>
# **updateSubscription**
> WebhookSubscriptionStatusUpdateResponse updateSubscription(authorization, subscriptionId, updateWebhookSubscriptionRequestSchema)

Update a specific subscription created by your application

Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageSubscriptionsApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val subscriptionId : kotlin.String = subscriptionId_example // kotlin.String | 
val updateWebhookSubscriptionRequestSchema : UpdateWebhookSubscriptionRequestSchema = {"statusUpdate":{"value":"ACTIVE"},"callbackUrl":"https://newcallbackUrl/endpoint"} // UpdateWebhookSubscriptionRequestSchema | 
try {
    val result : WebhookSubscriptionStatusUpdateResponse = apiInstance.updateSubscription(authorization, subscriptionId, updateWebhookSubscriptionRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageSubscriptionsApi#updateSubscription")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageSubscriptionsApi#updateSubscription")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **subscriptionId** | **kotlin.String**|  |
 **updateWebhookSubscriptionRequestSchema** | [**UpdateWebhookSubscriptionRequestSchema**](UpdateWebhookSubscriptionRequestSchema.md)|  |

### Return type

[**WebhookSubscriptionStatusUpdateResponse**](WebhookSubscriptionStatusUpdateResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

