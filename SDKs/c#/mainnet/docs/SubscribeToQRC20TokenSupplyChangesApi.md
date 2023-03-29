# Org.OpenAPITools.Api.SubscribeToQRC20TokenSupplyChangesApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscribeSupplyEvent**](SubscribeToQRC20TokenSupplyChangesApi.md#subscribesupplyevent) | **POST** /v2/tokenise/tokens/subscription/{flowtype}/supply | Receive updates each time a supply changes for a QRC721 or QRC20 token



## SubscribeSupplyEvent

> EventSubscriptionResponse SubscribeSupplyEvent (string authorization, string flowtype, Object body)

Receive updates each time a supply changes for a QRC721 or QRC20 token

Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \"Mint Tokens\" to receive an update each time a new token is created, or use the type \"Burn Tokens\" to receive an update each time a token is destroyed.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class SubscribeSupplyEventExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            var apiInstance = new SubscribeToQRC20TokenSupplyChangesApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var flowtype = flowtype_example;  // string | 
            var body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Burn Tokens","requestDetails":{"tokenName":"QNTNFT"}};  // Object | 

            try
            {
                // Receive updates each time a supply changes for a QRC721 or QRC20 token
                EventSubscriptionResponse result = apiInstance.SubscribeSupplyEvent(authorization, flowtype, body);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling SubscribeToQRC20TokenSupplyChangesApi.SubscribeSupplyEvent: " + e.Message );
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
 **flowtype** | **string**|  | 
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

