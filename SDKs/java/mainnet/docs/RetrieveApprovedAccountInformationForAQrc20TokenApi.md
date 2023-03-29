# RetrieveApprovedAccountInformationForAQrc20TokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC20SecondaryAccountOwner**](RetrieveApprovedAccountInformationForAQrc20TokenApi.md#readQRC20SecondaryAccountOwner) | **POST** /v2/tokenise/tokens/qrc20/secondary-account-owner | Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.


<a name="readQRC20SecondaryAccountOwner"></a>
# **readQRC20SecondaryAccountOwner**
> TokenReadQRC20Response readQRC20SecondaryAccountOwner(authorization, readContractOwnerRequestSchema)

Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.

Submits a query to the Blockchain Network and returns whether an account is approved to make payments on behalf of another account for a particular QRC20 token.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.RetrieveApprovedAccountInformationForAQrc20TokenApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    RetrieveApprovedAccountInformationForAQrc20TokenApi apiInstance = new RetrieveApprovedAccountInformationForAQrc20TokenApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    ReadContractOwnerRequestSchema readContractOwnerRequestSchema = new ReadContractOwnerRequestSchema(); // ReadContractOwnerRequestSchema | 
    try {
      TokenReadQRC20Response result = apiInstance.readQRC20SecondaryAccountOwner(authorization, readContractOwnerRequestSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling RetrieveApprovedAccountInformationForAQrc20TokenApi#readQRC20SecondaryAccountOwner");
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
 **readContractOwnerRequestSchema** | [**ReadContractOwnerRequestSchema**](ReadContractOwnerRequestSchema.md)|  |

### Return type

[**TokenReadQRC20Response**](TokenReadQRC20Response.md)

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

