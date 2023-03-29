# SupportedFungibleTokensApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTokens**](SupportedFungibleTokensApi.md#getTokens) | **GET** /v2/tokens/fungible | Retrieve a list of ERC20 and QRC20 tokens


<a name="getTokens"></a>
# **getTokens**
> FungibleTokenResponseDTO getTokens(location, contractType, unit)

Retrieve a list of ERC20 and QRC20 tokens

Retrieves a list of fungible tokens supported by Overledger and which APIs and functions you can use for each. You can retrieve all fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC20 or QRC20 as a contract type parameter. You can then filter further by including the resource using the technology and network parameters. You can also look for a specific token by passing in the unit as a parameter.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SupportedFungibleTokensApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");

    SupportedFungibleTokensApi apiInstance = new SupportedFungibleTokensApi(defaultClient);
    Location location = new Location(); // Location | 
    String contractType = "contractType_example"; // String | 
    String unit = "unit_example"; // String | 
    try {
      FungibleTokenResponseDTO result = apiInstance.getTokens(location, contractType, unit);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SupportedFungibleTokensApi#getTokens");
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
 **location** | [**Location**](.md)|  | [optional]
 **contractType** | **String**|  | [optional]
 **unit** | **String**|  | [optional]

### Return type

[**FungibleTokenResponseDTO**](FungibleTokenResponseDTO.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**400** | Bad Request |  -  |
**401** | Unauthorised |  -  |
**500** | Something went wrong on our side |  -  |

