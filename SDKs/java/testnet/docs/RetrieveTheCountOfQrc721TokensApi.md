# RetrieveTheCountOfQrc721TokensApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTokenCount**](RetrieveTheCountOfQrc721TokensApi.md#getTokenCount) | **POST** /v2/tokenise/tokens/qrc721/token-count | Retrieve the count of a QRC721 token for a particular account


<a name="getTokenCount"></a>
# **getTokenCount**
> TokenReadQRC721Response getTokenCount(authorization, readBalanceRequestSchema)

Retrieve the count of a QRC721 token for a particular account

Submits a query to the DLN and returns the number of QRC721 tokens held by the given account ID

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.RetrieveTheCountOfQrc721TokensApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    RetrieveTheCountOfQrc721TokensApi apiInstance = new RetrieveTheCountOfQrc721TokensApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    ReadBalanceRequestSchema readBalanceRequestSchema = new ReadBalanceRequestSchema(); // ReadBalanceRequestSchema | 
    try {
      TokenReadQRC721Response result = apiInstance.getTokenCount(authorization, readBalanceRequestSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling RetrieveTheCountOfQrc721TokensApi#getTokenCount");
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
 **readBalanceRequestSchema** | [**ReadBalanceRequestSchema**](ReadBalanceRequestSchema.md)|  |

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
**400** | Invalid Request-Body |  -  |
**401** | Unauthorised |  -  |
**500** | Something went wrong on our side |  -  |

