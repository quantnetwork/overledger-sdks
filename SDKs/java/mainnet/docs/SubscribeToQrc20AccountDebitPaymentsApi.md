# SubscribeToQrc20AccountDebitPaymentsApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeQRC20DebitEvent**](SubscribeToQrc20AccountDebitPaymentsApi.md#subscribeQRC20DebitEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/debit | Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved


<a name="subscribeQRC20DebitEvent"></a>
# **subscribeQRC20DebitEvent**
> EventSubscriptionResponse subscribeQRC20DebitEvent(authorization, body)

Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved

Set up a subscription to receive updates to a callback URL each time there is a debit on a QRC20 token or a QRC20 debit is approved. Use the type \&quot;Create Debit\&quot; to get an update when there is a debit payment on your account or \&quot;Approve Debit\&quot; to receive an update each time a token has been approved for debit.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SubscribeToQrc20AccountDebitPaymentsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");

    SubscribeToQrc20AccountDebitPaymentsApi apiInstance = new SubscribeToQrc20AccountDebitPaymentsApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    Object body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Create Debit","requestDetails":{"tokenUnit":"QNTNS"}}; // Object | 
    try {
      EventSubscriptionResponse result = apiInstance.subscribeQRC20DebitEvent(authorization, body);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SubscribeToQrc20AccountDebitPaymentsApi#subscribeQRC20DebitEvent");
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

