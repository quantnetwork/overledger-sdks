# CreateAQrc20CreditTransactionApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedRequestTransaction**](CreateAQrc20CreditTransactionApi.md#executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**prepareCreditRequest**](CreateAQrc20CreditTransactionApi.md#prepareCreditRequest) | **POST** /v2/preparation/credit | Prepare a QRC20 token credit transaction for signing


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
import org.openapitools.client.api.CreateAQrc20CreditTransactionApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    CreateAQrc20CreditTransactionApi apiInstance = new CreateAQrc20CreditTransactionApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    ExecuteTransactionRequest executeTransactionRequest = new ExecuteTransactionRequest(); // ExecuteTransactionRequest | 
    try {
      ExecuteTransactionResponse result = apiInstance.executePreparedRequestTransaction(authorization, executeTransactionRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling CreateAQrc20CreditTransactionApi#executePreparedRequestTransaction");
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

<a name="prepareCreditRequest"></a>
# **prepareCreditRequest**
> PrepareTransactionResponse prepareCreditRequest(authorization, prepareCreditTransactionRequestSchema)

Prepare a QRC20 token credit transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is “Create Credit” which will allow you to make a payment to another specified account.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.CreateAQrc20CreditTransactionApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    CreateAQrc20CreditTransactionApi apiInstance = new CreateAQrc20CreditTransactionApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    PrepareCreditTransactionRequestSchema prepareCreditTransactionRequestSchema = new PrepareCreditTransactionRequestSchema(); // PrepareCreditTransactionRequestSchema | 
    try {
      PrepareTransactionResponse result = apiInstance.prepareCreditRequest(authorization, prepareCreditTransactionRequestSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling CreateAQrc20CreditTransactionApi#prepareCreditRequest");
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
 **prepareCreditTransactionRequestSchema** | [**PrepareCreditTransactionRequestSchema**](PrepareCreditTransactionRequestSchema.md)|  |

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

