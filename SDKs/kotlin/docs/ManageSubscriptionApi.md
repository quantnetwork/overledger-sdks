# ManageSubscriptionApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**deleteSubscription**](ManageSubscriptionApi.md#deleteSubscription) | **DELETE** /v2/webhook/subscription/{subscriptionId} | Remove a subscription created by your application
[**listSubscriptions**](ManageSubscriptionApi.md#listSubscriptions) | **GET** /v2/webhook/subscriptions | Retrieve a list of subscriptions created by your application
[**updateSubscription**](ManageSubscriptionApi.md#updateSubscription) | **PATCH** /v2/webhook/subscription/{subscriptionId} | Update a specific subscription created by your application


<a name="deleteSubscription"></a>
# **deleteSubscription**
> SubscriptionDeletionResponse deleteSubscription(authorization, subscriptionId)

Remove a subscription created by your application

Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageSubscriptionApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val subscriptionId : kotlin.String = subscriptionId_example // kotlin.String | 
try {
    val result : SubscriptionDeletionResponse = apiInstance.deleteSubscription(authorization, subscriptionId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageSubscriptionApi#deleteSubscription")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageSubscriptionApi#deleteSubscription")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **subscriptionId** | **kotlin.String**|  |

### Return type

[**SubscriptionDeletionResponse**](SubscriptionDeletionResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="listSubscriptions"></a>
# **listSubscriptions**
> kotlin.collections.List&lt;ListSubscriptionResponseSchema&gt; listSubscriptions(authorization)

Retrieve a list of subscriptions created by your application

Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageSubscriptionApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
try {
    val result : kotlin.collections.List<ListSubscriptionResponseSchema> = apiInstance.listSubscriptions(authorization)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageSubscriptionApi#listSubscriptions")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageSubscriptionApi#listSubscriptions")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |

### Return type

[**kotlin.collections.List&lt;ListSubscriptionResponseSchema&gt;**](ListSubscriptionResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="updateSubscription"></a>
# **updateSubscription**
> SubscriptionUpdateResponse updateSubscription(authorization, subscriptionId, updateSubscriptionRequestSchema)

Update a specific subscription created by your application

Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = ManageSubscriptionApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val subscriptionId : kotlin.String = subscriptionId_example // kotlin.String | 
val updateSubscriptionRequestSchema : UpdateSubscriptionRequestSchema = {"statusUpdate":{"value":"ACTIVE"},"callbackUrl":"https://newcallbackUrl/endpoint"} // UpdateSubscriptionRequestSchema | 
try {
    val result : SubscriptionUpdateResponse = apiInstance.updateSubscription(authorization, subscriptionId, updateSubscriptionRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling ManageSubscriptionApi#updateSubscription")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling ManageSubscriptionApi#updateSubscription")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **subscriptionId** | **kotlin.String**|  |
 **updateSubscriptionRequestSchema** | [**UpdateSubscriptionRequestSchema**](UpdateSubscriptionRequestSchema.md)|  |

### Return type

[**SubscriptionUpdateResponse**](SubscriptionUpdateResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

