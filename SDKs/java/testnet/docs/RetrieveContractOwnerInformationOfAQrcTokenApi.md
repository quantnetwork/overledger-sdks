# RetrieveContractOwnerInformationOfAQrcTokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRCSmartContractOwner**](RetrieveContractOwnerInformationOfAQrcTokenApi.md#readQRCSmartContractOwner) | **POST** /v2/tokenise/tokens/{flowType}/contract-owner | Retrieve which account has contract owner permissions for a QRC token


<a name="readQRCSmartContractOwner"></a>
# **readQRCSmartContractOwner**
> TokenReadQRC721Response readQRCSmartContractOwner(authorization, flowType, prepareRequest)

Retrieve which account has contract owner permissions for a QRC token

Submits a query to the Blockchain Network and returns the address that currently has contract owner permissions for a particular QRC token.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.RetrieveContractOwnerInformationOfAQrcTokenApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    RetrieveContractOwnerInformationOfAQrcTokenApi apiInstance = new RetrieveContractOwnerInformationOfAQrcTokenApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String flowType = "flowType_example"; // String | 
    PrepareRequest prepareRequest = new PrepareRequest(); // PrepareRequest | 
    try {
      TokenReadQRC721Response result = apiInstance.readQRCSmartContractOwner(authorization, flowType, prepareRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling RetrieveContractOwnerInformationOfAQrcTokenApi#readQRCSmartContractOwner");
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

