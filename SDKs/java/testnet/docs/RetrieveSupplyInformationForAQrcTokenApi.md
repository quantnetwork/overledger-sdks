# RetrieveSupplyInformationForAQrcTokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC721SmartContractCurrentSupply**](RetrieveSupplyInformationForAQrcTokenApi.md#readQRC721SmartContractCurrentSupply) | **POST** /v2/tokenise/tokens/{flowType}/current-supply | Retrieve how many QRC tokens are currently in supply


<a name="readQRC721SmartContractCurrentSupply"></a>
# **readQRC721SmartContractCurrentSupply**
> TokenReadQRC721Response readQRC721SmartContractCurrentSupply(authorization, flowType, prepareRequest)

Retrieve how many QRC tokens are currently in supply

Submits a query to the Blockchain Network and returns the number of QRC tokens that are currently in circulation after tokens have been minted and burned.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.RetrieveSupplyInformationForAQrcTokenApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    RetrieveSupplyInformationForAQrcTokenApi apiInstance = new RetrieveSupplyInformationForAQrcTokenApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String flowType = "flowType_example"; // String | 
    PrepareRequest prepareRequest = new PrepareRequest(); // PrepareRequest | 
    try {
      TokenReadQRC721Response result = apiInstance.readQRC721SmartContractCurrentSupply(authorization, flowType, prepareRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling RetrieveSupplyInformationForAQrcTokenApi#readQRC721SmartContractCurrentSupply");
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
 **flowType** | **String**|  |
 **prepareRequest** | [**PrepareRequest**](PrepareRequest.md)|  |

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

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

