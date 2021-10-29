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
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ManageSubscriptionApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageSubscriptionApi apiInstance = new ManageSubscriptionApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String subscriptionId = "subscriptionId_example"; // String | 
    try {
      SubscriptionDeletionResponse result = apiInstance.deleteSubscription(authorization, subscriptionId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageSubscriptionApi#deleteSubscription");
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

[**SubscriptionDeletionResponse**](SubscriptionDeletionResponse.md)

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
> List&lt;ListSubscriptionResponseSchema&gt; listSubscriptions(authorization)

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
import org.openapitools.client.api.ManageSubscriptionApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageSubscriptionApi apiInstance = new ManageSubscriptionApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    try {
      List<ListSubscriptionResponseSchema> result = apiInstance.listSubscriptions(authorization);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageSubscriptionApi#listSubscriptions");
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

[**List&lt;ListSubscriptionResponseSchema&gt;**](ListSubscriptionResponseSchema.md)

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
> SubscriptionUpdateResponse updateSubscription(authorization, subscriptionId, updateSubscriptionRequestSchema)

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
import org.openapitools.client.api.ManageSubscriptionApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageSubscriptionApi apiInstance = new ManageSubscriptionApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String subscriptionId = "subscriptionId_example"; // String | 
    UpdateSubscriptionRequestSchema updateSubscriptionRequestSchema = new UpdateSubscriptionRequestSchema(); // UpdateSubscriptionRequestSchema | 
    try {
      SubscriptionUpdateResponse result = apiInstance.updateSubscription(authorization, subscriptionId, updateSubscriptionRequestSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageSubscriptionApi#updateSubscription");
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
 **updateSubscriptionRequestSchema** | [**UpdateSubscriptionRequestSchema**](UpdateSubscriptionRequestSchema.md)|  |

### Return type

[**SubscriptionUpdateResponse**](SubscriptionUpdateResponse.md)

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

