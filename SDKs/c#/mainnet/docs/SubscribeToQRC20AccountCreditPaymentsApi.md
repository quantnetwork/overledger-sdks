# Org.OpenAPITools.Api.SubscribeToQRC20AccountCreditPaymentsApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscribeCreditEvent**](SubscribeToQRC20AccountCreditPaymentsApi.md#subscribecreditevent) | **POST** /v2/tokenise/tokens/subscription/qrc20/credit | Receive updates each time there is a credit payment on your account



## SubscribeCreditEvent

> EventSubscriptionResponse SubscribeCreditEvent (string authorization, Object body)

Receive updates each time there is a credit payment on your account

Set up a subscription to receive updates to a callback URL each time there is a credit on a QRC20 token.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class SubscribeCreditEventExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            var apiInstance = new SubscribeToQRC20AccountCreditPaymentsApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Create Credit","requestDetails":{"tokenUnit":"QNTNS"}};  // Object | 

            try
            {
                // Receive updates each time there is a credit payment on your account
                EventSubscriptionResponse result = apiInstance.SubscribeCreditEvent(authorization, body);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling SubscribeToQRC20AccountCreditPaymentsApi.SubscribeCreditEvent: " + e.Message );
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

