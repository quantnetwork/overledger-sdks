# SubscribeToQrc721AssetTransfersApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscribeTransferEvent**](SubscribeToQrc721AssetTransfersApi.md#subscribeTransferEvent) | **POST** /v2/tokenise/tokens/subscription/qrc721/transfer | Receive updates each time a QRC721 token is transferred


<a name="subscribeTransferEvent"></a>
# **subscribeTransferEvent**
> EventSubscriptionResponse subscribeTransferEvent(authorization, body)

Receive updates each time a QRC721 token is transferred

Set up a subscription to receive updates to a callback URL each time a QRC721 token is transferred to a different owner. Use the type \&quot;Create Transfer\&quot; to receive an update each time a token is transferred to a different owner.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SubscribeToQrc721AssetTransfersApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");

    SubscribeToQrc721AssetTransfersApi apiInstance = new SubscribeToQrc721AssetTransfersApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    Object body = {"location":{"technology":"Ethereum","network":"Ethereum Goerli Testnet"},"callbackUrl":"https://eo2vmypzncjgeoi.m.pipedream.net","type":"Create Transfer","requestDetails":{"tokenName":"QNTNS"}}; // Object | 
    try {
      EventSubscriptionResponse result = apiInstance.subscribeTransferEvent(authorization, body);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SubscribeToQrc721AssetTransfersApi#subscribeTransferEvent");
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

