# ManageSubscriptionsApi

All URIs are relative to *https://api.sandbox.overledger.io*

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
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ManageSubscriptionsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageSubscriptionsApi apiInstance = new ManageSubscriptionsApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String subscriptionId = "subscriptionId_example"; // String | 
    try {
      WebhookSubscriptionStatusUpdateResponse result = apiInstance.deleteSubscription(authorization, subscriptionId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageSubscriptionsApi#deleteSubscription");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  |
 **subscriptionId** | **String**|  |

### Return type

[**WebhookSubscriptionStatusUpdateResponse**](WebhookSubscriptionStatusUpdateResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**401** | Unauthorised |  -  |
**404** | You do not currently have any subscriptions |  -  |
**500** | Something went wrong on our side |  -  |

<a name="listSubscriptions"></a>
# **listSubscriptions**
> List&lt;ListWebhookSubscriptionResponseSchema&gt; listSubscriptions(authorization)

Retrieve a list of subscriptions created by your application

Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ManageSubscriptionsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageSubscriptionsApi apiInstance = new ManageSubscriptionsApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    try {
      List<ListWebhookSubscriptionResponseSchema> result = apiInstance.listSubscriptions(authorization);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageSubscriptionsApi#listSubscriptions");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  |

### Return type

[**List&lt;ListWebhookSubscriptionResponseSchema&gt;**](ListWebhookSubscriptionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**204** | You do not currently have any subscriptions |  -  |
**401** | Unauthorised |  -  |
**500** | Something went wrong on our side |  -  |

<a name="updateSubscription"></a>
# **updateSubscription**
> WebhookSubscriptionStatusUpdateResponse updateSubscription(authorization, subscriptionId, updateWebhookSubscriptionRequestSchema)

Update a specific subscription created by your application

Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ManageSubscriptionsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageSubscriptionsApi apiInstance = new ManageSubscriptionsApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String subscriptionId = "subscriptionId_example"; // String | 
    UpdateWebhookSubscriptionRequestSchema updateWebhookSubscriptionRequestSchema = new UpdateWebhookSubscriptionRequestSchema(); // UpdateWebhookSubscriptionRequestSchema | 
    try {
      WebhookSubscriptionStatusUpdateResponse result = apiInstance.updateSubscription(authorization, subscriptionId, updateWebhookSubscriptionRequestSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageSubscriptionsApi#updateSubscription");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **String**|  |
 **subscriptionId** | **String**|  |
 **updateWebhookSubscriptionRequestSchema** | [**UpdateWebhookSubscriptionRequestSchema**](UpdateWebhookSubscriptionRequestSchema.md)|  |

### Return type

[**WebhookSubscriptionStatusUpdateResponse**](WebhookSubscriptionStatusUpdateResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**401** | Unauthorised |  -  |
**404** | You do not currently have any subscriptions |  -  |
**405** | Method is not allowed |  -  |
**500** | Something went wrong on our side |  -  |

