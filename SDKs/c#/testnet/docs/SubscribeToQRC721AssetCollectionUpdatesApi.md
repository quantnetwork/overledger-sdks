# Org.OpenAPITools.Api.SubscribeToQRC721AssetCollectionUpdatesApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscribeCollectEvent**](SubscribeToQRC721AssetCollectionUpdatesApi.md#subscribecollectevent) | **POST** /v2/tokenise/tokens/subscription/qrc721/collect | Receive updates each time a QRC721 token is approved for collection or collected



## SubscribeCollectEvent

> EventSubscriptionResponse SubscribeCollectEvent (string authorization, Object body)

Receive updates each time a QRC721 token is approved for collection or collected

Set up a subscription to receive updates to a callback URL each time a QRC721 token is either approved for collected or collected. Use the type \"Approve Asset Collect\" to receive an update each time a token has been approved for collection, or use the type \"Collect Asset\" to receive an update each time a token has been collected.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class SubscribeCollectEventExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.sandbox.overledger.io";
            var apiInstance = new SubscribeToQRC721AssetCollectionUpdatesApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Approve Asset Collect","requestDetails":{"tokenName":"QNTNFT"}};  // Object | 

            try
            {
                // Receive updates each time a QRC721 token is approved for collection or collected
                EventSubscriptionResponse result = apiInstance.SubscribeCollectEvent(authorization, body);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling SubscribeToQRC721AssetCollectionUpdatesApi.SubscribeCollectEvent: " + e.Message );
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

