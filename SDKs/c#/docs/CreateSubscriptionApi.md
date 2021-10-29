# Org.OpenAPITools.Api.CreateSubscriptionApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Subscription**](CreateSubscriptionApi.md#subscription) | **POST** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource 



## Subscription

> List&lt;CreateSubscriptionResponseSchema&gt; Subscription (string authorization, CreateSubscriptionRequestSchema createSubscriptionRequestSchema)

Create a subscription for a transaction or monitored resource 

Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class SubscriptionExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://OVL 2.0";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new CreateSubscriptionApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var createSubscriptionRequestSchema = new CreateSubscriptionRequestSchema(); // CreateSubscriptionRequestSchema | 

            try
            {
                // Create a subscription for a transaction or monitored resource 
                List<CreateSubscriptionResponseSchema> result = apiInstance.Subscription(authorization, createSubscriptionRequestSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling CreateSubscriptionApi.Subscription: " + e.Message );
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
| **200** | All good! |  -  |
| **400** | Something went wrong on your side |  -  |
| **401** | Unauthorised |  -  |
| **404** | {id} does not exist |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

