# Org.OpenAPITools.Api.SubscribeToQRC20SharedAccountUpdatesApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscribeSecondaryOwnerEvent**](SubscribeToQRC20SharedAccountUpdatesApi.md#subscribesecondaryownerevent) | **POST** /v2/tokenise/tokens/subscription/qrc20/secondaryaccountowner | Receive updates for a shared account



## SubscribeSecondaryOwnerEvent

> EventSubscriptionResponse SubscribeSecondaryOwnerEvent (string authorization, Object body)

Receive updates for a shared account

Set up a subscription to receive updates to a callback URL each time a secondary account owner is added or removed using the \"Add Account\" & \"Remove Account\" Request Types. Also sends update when a shared account creates a QRC20 credit payment using the \"Create Credit\" Request Type.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class SubscribeSecondaryOwnerEventExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            var apiInstance = new SubscribeToQRC20SharedAccountUpdatesApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Add Account","requestDetails":{"tokenUnit":"QNTNS"}};  // Object | 

            try
            {
                // Receive updates for a shared account
                EventSubscriptionResponse result = apiInstance.SubscribeSecondaryOwnerEvent(authorization, body);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling SubscribeToQRC20SharedAccountUpdatesApi.SubscribeSecondaryOwnerEvent: " + e.Message );
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
 **body** | **Object**|  | 

### Return type

[**EventSubscriptionResponse**](EventSubscriptionResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | All good! |  -  |
| **400** | Bad Request |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

