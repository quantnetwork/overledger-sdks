# Org.OpenAPITools.Api.ManageSubscriptionsApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DeleteSubscription**](ManageSubscriptionsApi.md#deletesubscription) | **DELETE** /v2/webhook/subscription/{subscriptionId} | Remove a subscription created by your application
[**ListSubscriptions**](ManageSubscriptionsApi.md#listsubscriptions) | **GET** /v2/webhook/subscriptions | Retrieve a list of subscriptions created by your application
[**UpdateSubscription**](ManageSubscriptionsApi.md#updatesubscription) | **PATCH** /v2/webhook/subscription/{subscriptionId} | Update a specific subscription created by your application



## DeleteSubscription

> WebhookSubscriptionStatusUpdateResponse DeleteSubscription (string authorization, string subscriptionId)

Remove a subscription created by your application

Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class DeleteSubscriptionExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new ManageSubscriptionsApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var subscriptionId = subscriptionId_example;  // string | 

            try
            {
                // Remove a subscription created by your application
                WebhookSubscriptionStatusUpdateResponse result = apiInstance.DeleteSubscription(authorization, subscriptionId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling ManageSubscriptionsApi.DeleteSubscription: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **subscriptionId** | **string**|  | 

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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **404** | You do not currently have any subscriptions |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ListSubscriptions

> List&lt;ListWebhookSubscriptionResponseSchema&gt; ListSubscriptions (string authorization)

Retrieve a list of subscriptions created by your application

Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ListSubscriptionsExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new ManageSubscriptionsApi(Configuration.Default);
            var authorization = authorization_example;  // string | 

            try
            {
                // Retrieve a list of subscriptions created by your application
                List<ListWebhookSubscriptionResponseSchema> result = apiInstance.ListSubscriptions(authorization);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling ManageSubscriptionsApi.ListSubscriptions: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 

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
| **200** | All good! |  -  |
| **204** | You do not currently have any subscriptions |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateSubscription

> WebhookSubscriptionStatusUpdateResponse UpdateSubscription (string authorization, string subscriptionId, UpdateWebhookSubscriptionRequestSchema updateWebhookSubscriptionRequestSchema)

Update a specific subscription created by your application

Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class UpdateSubscriptionExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new ManageSubscriptionsApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var subscriptionId = subscriptionId_example;  // string | 
            var updateWebhookSubscriptionRequestSchema = new UpdateWebhookSubscriptionRequestSchema(); // UpdateWebhookSubscriptionRequestSchema | 

            try
            {
                // Update a specific subscription created by your application
                WebhookSubscriptionStatusUpdateResponse result = apiInstance.UpdateSubscription(authorization, subscriptionId, updateWebhookSubscriptionRequestSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling ManageSubscriptionsApi.UpdateSubscription: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **subscriptionId** | **string**|  | 
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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **404** | You do not currently have any subscriptions |  -  |
| **405** | Method is not allowed |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

