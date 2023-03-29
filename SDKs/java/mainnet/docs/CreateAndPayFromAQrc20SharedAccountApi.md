# CreateAndPayFromAQrc20SharedAccountApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedRequestTransaction**](CreateAndPayFromAQrc20SharedAccountApi.md#executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**prepareSecondaryOwnerRequest**](CreateAndPayFromAQrc20SharedAccountApi.md#prepareSecondaryOwnerRequest) | **POST** /v2/preparation/secondaryaccountowner | Prepare a request for a QRC20 shared account


<a name="executePreparedRequestTransaction"></a>
# **executePreparedRequestTransaction**
> ExecuteTransactionResponse executePreparedRequestTransaction(authorization, executeTransactionRequest)

Execute a transaction on a DLT

Takes a request ID and submits a signed transaction to the requested DLT.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.CreateAndPayFromAQrc20SharedAccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    CreateAndPayFromAQrc20SharedAccountApi apiInstance = new CreateAndPayFromAQrc20SharedAccountApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    ExecuteTransactionRequest executeTransactionRequest = new ExecuteTransactionRequest(); // ExecuteTransactionRequest | 
    try {
      ExecuteTransactionResponse result = apiInstance.executePreparedRequestTransaction(authorization, executeTransactionRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling CreateAndPayFromAQrc20SharedAccountApi#executePreparedRequestTransaction");
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
 **executeTransactionRequest** | [**ExecuteTransactionRequest**](ExecuteTransactionRequest.md)|  |

### Return type

[**ExecuteTransactionResponse**](ExecuteTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**401** | Unauthorised |  -  |
**404** | Not Found |  -  |
**500** | Something went wrong on our side |  -  |

<a name="prepareSecondaryOwnerRequest"></a>
# **prepareSecondaryOwnerRequest**
> PrepareTransactionResponse prepareSecondaryOwnerRequest(authorization, prepareAddSecondaryAccountRequestSchema)

Prepare a request for a QRC20 shared account

Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \&quot;Remove Account\&quot; which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.CreateAndPayFromAQrc20SharedAccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    CreateAndPayFromAQrc20SharedAccountApi apiInstance = new CreateAndPayFromAQrc20SharedAccountApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    PrepareAddSecondaryAccountRequestSchema prepareAddSecondaryAccountRequestSchema = new PrepareAddSecondaryAccountRequestSchema(); // PrepareAddSecondaryAccountRequestSchema | 
    try {
      PrepareTransactionResponse result = apiInstance.prepareSecondaryOwnerRequest(authorization, prepareAddSecondaryAccountRequestSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling CreateAndPayFromAQrc20SharedAccountApi#prepareSecondaryOwnerRequest");
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
 **prepareAddSecondaryAccountRequestSchema** | [**PrepareAddSecondaryAccountRequestSchema**](PrepareAddSecondaryAccountRequestSchema.md)|  |

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

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

