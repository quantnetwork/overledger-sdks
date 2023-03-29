# SubscribeToQrc20AccountCreditPaymentsApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeCreditEvent**](SubscribeToQrc20AccountCreditPaymentsApi.md#subscribeCreditEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/credit | Receive updates each time there is a credit payment on your account


<a name="subscribeCreditEvent"></a>
# **subscribeCreditEvent**
> EventSubscriptionResponse subscribeCreditEvent(authorization, body)

Receive updates each time there is a credit payment on your account

Set up a subscription to receive updates to a callback URL each time there is a credit on a QRC20 token.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SubscribeToQrc20AccountCreditPaymentsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");

    SubscribeToQrc20AccountCreditPaymentsApi apiInstance = new SubscribeToQrc20AccountCreditPaymentsApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    Object body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Create Credit","requestDetails":{"tokenUnit":"QNTNS"}}; // Object | 
    try {
      EventSubscriptionResponse result = apiInstance.subscribeCreditEvent(authorization, body);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SubscribeToQrc20AccountCreditPaymentsApi#subscribeCreditEvent");
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
**200** | All good! |  -  |
**400** | Bad Request |  -  |
**401** | Unauthorised |  -  |
**500** | Something went wrong on our side |  -  |

