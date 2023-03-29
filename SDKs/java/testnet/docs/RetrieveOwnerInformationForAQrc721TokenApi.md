# RetrieveOwnerInformationForAQrc721TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC721SmartContractTokenOwner**](RetrieveOwnerInformationForAQrc721TokenApi.md#readQRC721SmartContractTokenOwner) | **POST** /v2/tokenise/tokens/qrc721/token-owner | Retrieve which account currently owns a specific QRC721 token


<a name="readQRC721SmartContractTokenOwner"></a>
# **readQRC721SmartContractTokenOwner**
> TokenReadQRC721Response readQRC721SmartContractTokenOwner(authorization, readTokenOwnerRequestSchema)

Retrieve which account currently owns a specific QRC721 token

Submits a query to the DLN and returns the address that currently has owns a particular QRC721 token.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.RetrieveOwnerInformationForAQrc721TokenApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    RetrieveOwnerInformationForAQrc721TokenApi apiInstance = new RetrieveOwnerInformationForAQrc721TokenApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    ReadTokenOwnerRequestSchema readTokenOwnerRequestSchema = new ReadTokenOwnerRequestSchema(); // ReadTokenOwnerRequestSchema | 
    try {
      TokenReadQRC721Response result = apiInstance.readQRC721SmartContractTokenOwner(authorization, readTokenOwnerRequestSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling RetrieveOwnerInformationForAQrc721TokenApi#readQRC721SmartContractTokenOwner");
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
 **readTokenOwnerRequestSchema** | [**ReadTokenOwnerRequestSchema**](ReadTokenOwnerRequestSchema.md)|  |

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

