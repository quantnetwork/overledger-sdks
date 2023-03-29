# FungibleTokenControllerApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getToken**](FungibleTokenControllerApi.md#getToken) | **GET** /v2/token/fungible | 


<a name="getToken"></a>
# **getToken**
> Erc20DTO getToken(technology, network, unit)



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.models.*;
import org.openapitools.client.api.FungibleTokenControllerApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");

    FungibleTokenControllerApi apiInstance = new FungibleTokenControllerApi(defaultClient);
    String technology = "technology_example"; // String | 
    String network = "network_example"; // String | 
    String unit = "unit_example"; // String | 
    try {
      Erc20DTO result = apiInstance.getToken(technology, network, unit);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling FungibleTokenControllerApi#getToken");
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
 **technology** | **String**|  |
 **network** | **String**|  |
 **unit** | **String**|  |

### Return type

[**Erc20DTO**](Erc20DTO.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: */*

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | OK |  -  |

