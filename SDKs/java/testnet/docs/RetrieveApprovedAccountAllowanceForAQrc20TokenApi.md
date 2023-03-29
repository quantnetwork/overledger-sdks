# RetrieveApprovedAccountAllowanceForAQrc20TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readApprovedDebitAmount**](RetrieveApprovedAccountAllowanceForAQrc20TokenApi.md#readApprovedDebitAmount) | **POST** /v2/tokenise/tokens/qrc20/approved-debit-amount | Retrieve how many QRC20 tokens an address is allowed to debit


<a name="readApprovedDebitAmount"></a>
# **readApprovedDebitAmount**
> TokenReadQRC20Response readApprovedDebitAmount(authorization, readApprovedAccountAllowanceRequestSchema)

Retrieve how many QRC20 tokens an address is allowed to debit

Submits a query to the Blockchain Network and returns the number of QRC20 tokens a particular account is allowed to debit from another account

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.RetrieveApprovedAccountAllowanceForAQrc20TokenApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    RetrieveApprovedAccountAllowanceForAQrc20TokenApi apiInstance = new RetrieveApprovedAccountAllowanceForAQrc20TokenApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    ReadApprovedAccountAllowanceRequestSchema readApprovedAccountAllowanceRequestSchema = new ReadApprovedAccountAllowanceRequestSchema(); // ReadApprovedAccountAllowanceRequestSchema | 
    try {
      TokenReadQRC20Response result = apiInstance.readApprovedDebitAmount(authorization, readApprovedAccountAllowanceRequestSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling RetrieveApprovedAccountAllowanceForAQrc20TokenApi#readApprovedDebitAmount");
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
 **readApprovedAccountAllowanceRequestSchema** | [**ReadApprovedAccountAllowanceRequestSchema**](ReadApprovedAccountAllowanceRequestSchema.md)|  |

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

