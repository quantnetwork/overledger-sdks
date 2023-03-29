# SubscribeToQrc721SupplyChangeUpdatesApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeSupplyEvent**](SubscribeToQrc721SupplyChangeUpdatesApi.md#subscribeSupplyEvent) | **POST** /v2/tokenise/tokens/subscription/{flowtype}/supply | Receive updates each time a supply changes for a QRC721 or QRC20 token


<a name="subscribeSupplyEvent"></a>
# **subscribeSupplyEvent**
> EventSubscriptionResponse subscribeSupplyEvent(authorization, flowtype, body)

Receive updates each time a supply changes for a QRC721 or QRC20 token

Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \&quot;Mint Tokens\&quot; to receive an update each time a new token is created, or use the type \&quot;Burn Tokens\&quot; to receive an update each time a token is destroyed.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SubscribeToQrc721SupplyChangeUpdatesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");

    SubscribeToQrc721SupplyChangeUpdatesApi apiInstance = new SubscribeToQrc721SupplyChangeUpdatesApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String flowtype = "flowtype_example"; // String | 
    Object body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Burn Tokens","requestDetails":{"tokenName":"QNTNFT"}}; // Object | 
    try {
      EventSubscriptionResponse result = apiInstance.subscribeSupplyEvent(authorization, flowtype, body);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SubscribeToQrc721SupplyChangeUpdatesApi#subscribeSupplyEvent");
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
 **flowtype** | **String**|  |
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

