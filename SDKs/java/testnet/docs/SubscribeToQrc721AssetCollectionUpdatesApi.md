# SubscribeToQrc721AssetCollectionUpdatesApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeCollectEvent**](SubscribeToQrc721AssetCollectionUpdatesApi.md#subscribeCollectEvent) | **POST** /v2/tokenise/tokens/subscription/qrc721/collect | Receive updates each time a QRC721 token is approved for collection or collected


<a name="subscribeCollectEvent"></a>
# **subscribeCollectEvent**
> EventSubscriptionResponse subscribeCollectEvent(authorization, body)

Receive updates each time a QRC721 token is approved for collection or collected

Set up a subscription to receive updates to a callback URL each time a QRC721 token is either approved for collected or collected. Use the type \&quot;Approve Asset Collect\&quot; to receive an update each time a token has been approved for collection, or use the type \&quot;Collect Asset\&quot; to receive an update each time a token has been collected.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SubscribeToQrc721AssetCollectionUpdatesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");

    SubscribeToQrc721AssetCollectionUpdatesApi apiInstance = new SubscribeToQrc721AssetCollectionUpdatesApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    Object body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Approve Asset Collect","requestDetails":{"tokenName":"QNTNFT"}}; // Object | 
    try {
      EventSubscriptionResponse result = apiInstance.subscribeCollectEvent(authorization, body);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SubscribeToQrc721AssetCollectionUpdatesApi#subscribeCollectEvent");
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

