# SupportedNonFungibleTokensApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getAllNonFungibleTokens**](SupportedNonFungibleTokensApi.md#getAllNonFungibleTokens) | **GET** /v2/tokenise/tokens/nonfungible | Retrieve a list of ERC721 and QRC721 tokens


<a name="getAllNonFungibleTokens"></a>
# **getAllNonFungibleTokens**
> NonFungibleTokenResponse getAllNonFungibleTokens(authorization, contractType, technology, network, tokenName)

Retrieve a list of ERC721 and QRC721 tokens

Retrieves a list of non-fungible tokens supported by Overledger and which API&#39;s and functions you can use for each. You can retrieve all non-fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC721 or QRC721 as a contract type parameter. You can then filter further by including the resource using technology and network parameters. You can also look for a specific token by passing in the tokenName as a parameter.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SupportedNonFungibleTokensApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");

    SupportedNonFungibleTokensApi apiInstance = new SupportedNonFungibleTokensApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String contractType = "contractType_example"; // String | 
    String technology = "technology_example"; // String | 
    String network = "network_example"; // String | 
    String tokenName = "tokenName_example"; // String | 
    try {
      NonFungibleTokenResponse result = apiInstance.getAllNonFungibleTokens(authorization, contractType, technology, network, tokenName);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SupportedNonFungibleTokensApi#getAllNonFungibleTokens");
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
 **contractType** | **String**|  | [optional]
 **technology** | **String**|  | [optional]
 **network** | **String**|  | [optional]
 **tokenName** | **String**|  | [optional]

### Return type

[**NonFungibleTokenResponse**](NonFungibleTokenResponse.md)

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

