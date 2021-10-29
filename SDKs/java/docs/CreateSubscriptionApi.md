# CreateSubscriptionApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscription**](CreateSubscriptionApi.md#subscription) | **POST** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource 


<a name="subscription"></a>
# **subscription**
> List&lt;CreateSubscriptionResponseSchema&gt; subscription(authorization, createSubscriptionRequestSchema)

Create a subscription for a transaction or monitored resource 

Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.CreateSubscriptionApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    CreateSubscriptionApi apiInstance = new CreateSubscriptionApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    CreateSubscriptionRequestSchema createSubscriptionRequestSchema = new CreateSubscriptionRequestSchema(); // CreateSubscriptionRequestSchema | 
    try {
      List<CreateSubscriptionResponseSchema> result = apiInstance.subscription(authorization, createSubscriptionRequestSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling CreateSubscriptionApi#subscription");
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
 **createSubscriptionRequestSchema** | [**CreateSubscriptionRequestSchema**](CreateSubscriptionRequestSchema.md)|  |

### Return type

[**List&lt;CreateSubscriptionResponseSchema&gt;**](CreateSubscriptionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**400** | Something went wrong on your side |  -  |
**401** | Unauthorised |  -  |
**404** | {id} does not exist |  -  |
**500** | Something went wrong on our side |  -  |

