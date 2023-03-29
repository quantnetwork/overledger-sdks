# TokenControllerApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getNonFungibleToken**](TokenControllerApi.md#getNonFungibleToken) | **GET** /v2/nonfungibletoken | 


<a name="getNonFungibleToken"></a>
# **getNonFungibleToken**
> NonFungibleTokenDTO getNonFungibleToken(tokenName, technology, network)



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.models.*;
import org.openapitools.client.api.TokenControllerApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");

    TokenControllerApi apiInstance = new TokenControllerApi(defaultClient);
    String tokenName = "tokenName_example"; // String | 
    String technology = "technology_example"; // String | 
    String network = "network_example"; // String | 
    try {
      NonFungibleTokenDTO result = apiInstance.getNonFungibleToken(tokenName, technology, network);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling TokenControllerApi#getNonFungibleToken");
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
 **tokenName** | **String**|  |
 **technology** | **String**|  |
 **network** | **String**|  |

### Return type

[**NonFungibleTokenDTO**](NonFungibleTokenDTO.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: */*

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | OK |  -  |

