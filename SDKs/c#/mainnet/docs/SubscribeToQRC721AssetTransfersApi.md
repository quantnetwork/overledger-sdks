# Org.OpenAPITools.Api.SubscribeToQRC721AssetTransfersApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscribeTransferEvent**](SubscribeToQRC721AssetTransfersApi.md#subscribetransferevent) | **POST** /v2/tokenise/tokens/subscription/qrc721/transfer | Receive updates each time a QRC721 token is transferred



## SubscribeTransferEvent

> EventSubscriptionResponse SubscribeTransferEvent (string authorization, Object body)

Receive updates each time a QRC721 token is transferred

Set up a subscription to receive updates to a callback URL each time a QRC721 token is transferred to a different owner. Use the type \"Create Transfer\" to receive an update each time a token is transferred to a different owner.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class SubscribeTransferEventExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            var apiInstance = new SubscribeToQRC721AssetTransfersApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Create Transfer","requestDetails":{"tokenName":"QNTNS"}};  // Object | 

            try
            {
                // Receive updates each time a QRC721 token is transferred
                EventSubscriptionResponse result = apiInstance.SubscribeTransferEvent(authorization, body);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling SubscribeToQRC721AssetTransfersApi.SubscribeTransferEvent: " + e.Message );
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

