# TransactionSearchApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**autoExecuteSearchTransactionRequest**](TransactionSearchApi.md#autoExecuteSearchTransactionRequest) | **POST** /v2/autoexecution/search/transaction | Prepare and automatically execute a search for a transaction on a DLT.
[**executePreparedSearchRequestTransaction**](TransactionSearchApi.md#executePreparedSearchRequestTransaction) | **POST** /v2/execution/search/transaction | Execute a search for a transaction on a DLT
[**prepareSearchRequest**](TransactionSearchApi.md#prepareSearchRequest) | **POST** /v2/preparation/search/transaction | Prepare a search for a transaction on a DLT


<a name="autoExecuteSearchTransactionRequest"></a>
# **autoExecuteSearchTransactionRequest**
> PrepareAndExecuteTransactionResponse autoExecuteSearchTransactionRequest(authorization, transactionId, prepareSearchSchema)

Prepare and automatically execute a search for a transaction on a DLT.

Generates a request ID and automatically executes the transaction search on the requested DLT.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.TransactionSearchApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    TransactionSearchApi apiInstance = new TransactionSearchApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String transactionId = "0x5169fb4538904777b272041ef2ec43a6cfa69515dffead2809d54d9f53c172ab"; // String | The transactionId to search for
    PrepareSearchSchema prepareSearchSchema = new PrepareSearchSchema(); // PrepareSearchSchema | 
    try {
      PrepareAndExecuteTransactionResponse result = apiInstance.autoExecuteSearchTransactionRequest(authorization, transactionId, prepareSearchSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling TransactionSearchApi#autoExecuteSearchTransactionRequest");
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
 **transactionId** | **String**| The transactionId to search for |
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  |

### Return type

[**PrepareAndExecuteTransactionResponse**](PrepareAndExecuteTransactionResponse.md)

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
**404** | Not Found |  -  |
**500** | Something went wrong on our side |  -  |

<a name="executePreparedSearchRequestTransaction"></a>
# **executePreparedSearchRequestTransaction**
> ExecuteSearchTransactionResponse executePreparedSearchRequestTransaction(authorization, requestId)

Execute a search for a transaction on a DLT

Takes a request ID and searches for the transaction on the requested DLT

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.TransactionSearchApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    TransactionSearchApi apiInstance = new TransactionSearchApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String requestId = "requestId_example"; // String | 
    try {
      ExecuteSearchTransactionResponse result = apiInstance.executePreparedSearchRequestTransaction(authorization, requestId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling TransactionSearchApi#executePreparedSearchRequestTransaction");
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
 **requestId** | **String**|  |

### Return type

[**ExecuteSearchTransactionResponse**](ExecuteSearchTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**400** | Bad Request |  -  |
**401** | Unauthorised |  -  |
**404** | Not Found |  -  |
**500** | Something went wrong on our side |  -  |

<a name="prepareSearchRequest"></a>
# **prepareSearchRequest**
> PrepareSearchResponseSchema prepareSearchRequest(authorization, transactionId, prepareSearchSchema)

Prepare a search for a transaction on a DLT

Searches for and returns data on transactions on a particular DLT. Returns a request ID for executing a transaction search on the requested DLT

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.TransactionSearchApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    TransactionSearchApi apiInstance = new TransactionSearchApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String transactionId = "0x5169fb4538904777b272041ef2ec43a6cfa69515dffead2809d54d9f53c172ab"; // String | The transactionId to search for
    PrepareSearchSchema prepareSearchSchema = new PrepareSearchSchema(); // PrepareSearchSchema | 
    try {
      PrepareSearchResponseSchema result = apiInstance.prepareSearchRequest(authorization, transactionId, prepareSearchSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling TransactionSearchApi#prepareSearchRequest");
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
 **transactionId** | **String**| The transactionId to search for |
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  |

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

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
**500** | Something went wrong on our side |  -  |

