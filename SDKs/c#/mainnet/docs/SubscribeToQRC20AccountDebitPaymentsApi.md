# Org.OpenAPITools.Api.SubscribeToQRC20AccountDebitPaymentsApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscribeQRC20DebitEvent**](SubscribeToQRC20AccountDebitPaymentsApi.md#subscribeqrc20debitevent) | **POST** /v2/tokenise/tokens/subscription/qrc20/debit | Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved



## SubscribeQRC20DebitEvent

> EventSubscriptionResponse SubscribeQRC20DebitEvent (string authorization, Object body)

Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved

Set up a subscription to receive updates to a callback URL each time there is a debit on a QRC20 token or a QRC20 debit is approved. Use the type \"Create Debit\" to get an update when there is a debit payment on your account or \"Approve Debit\" to receive an update each time a token has been approved for debit.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class SubscribeQRC20DebitEventExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            var apiInstance = new SubscribeToQRC20AccountDebitPaymentsApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Create Debit","requestDetails":{"tokenUnit":"QNTNS"}};  // Object | 

            try
            {
                // Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved
                EventSubscriptionResponse result = apiInstance.SubscribeQRC20DebitEvent(authorization, body);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling SubscribeToQRC20AccountDebitPaymentsApi.SubscribeQRC20DebitEvent: " + e.Message );
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

