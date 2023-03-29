# SubscribeToQrc20SharedAccountUpdatesApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeSecondaryOwnerEvent**](SubscribeToQrc20SharedAccountUpdatesApi.md#subscribeSecondaryOwnerEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/secondaryaccountowner | Receive updates for a shared account


<a name="subscribeSecondaryOwnerEvent"></a>
# **subscribeSecondaryOwnerEvent**
> EventSubscriptionResponse subscribeSecondaryOwnerEvent(authorization, body)

Receive updates for a shared account

Set up a subscription to receive updates to a callback URL each time a secondary account owner is added or removed using the \&quot;Add Account\&quot; &amp; \&quot;Remove Account\&quot; Request Types. Also sends update when a shared account creates a QRC20 credit payment using the \&quot;Create Credit\&quot; Request Type.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SubscribeToQrc20SharedAccountUpdatesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");

    SubscribeToQrc20SharedAccountUpdatesApi apiInstance = new SubscribeToQrc20SharedAccountUpdatesApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    Object body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Add Account","requestDetails":{"tokenUnit":"QNTNS"}}; // Object | 
    try {
      EventSubscriptionResponse result = apiInstance.subscribeSecondaryOwnerEvent(authorization, body);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SubscribeToQrc20SharedAccountUpdatesApi#subscribeSecondaryOwnerEvent");
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

