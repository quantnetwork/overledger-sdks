# RetrieveAccountBalanceForAQrc20TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRC20SmartContractBalance**](RetrieveAccountBalanceForAQrc20TokenApi.md#readQRC20SmartContractBalance) | **POST** /v2/tokenise/tokens/qrc20/account-balance | Retrieve the balance of QRC20 tokens for an account


<a name="readQRC20SmartContractBalance"></a>
# **readQRC20SmartContractBalance**
> TokenReadQRC20Response readQRC20SmartContractBalance(authorization, readAccountBalanceRequestSchema)

Retrieve the balance of QRC20 tokens for an account

Submits a query to the Blockchain Network and returns the balance of QRC20 tokens for an account .

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.RetrieveAccountBalanceForAQrc20TokenApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    RetrieveAccountBalanceForAQrc20TokenApi apiInstance = new RetrieveAccountBalanceForAQrc20TokenApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    ReadAccountBalanceRequestSchema readAccountBalanceRequestSchema = new ReadAccountBalanceRequestSchema(); // ReadAccountBalanceRequestSchema | 
    try {
      TokenReadQRC20Response result = apiInstance.readQRC20SmartContractBalance(authorization, readAccountBalanceRequestSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling RetrieveAccountBalanceForAQrc20TokenApi#readQRC20SmartContractBalance");
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
 **readAccountBalanceRequestSchema** | [**ReadAccountBalanceRequestSchema**](ReadAccountBalanceRequestSchema.md)|  |

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

