# SmartContractSearchApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedSearchRequest**](SmartContractSearchApi.md#executePreparedSearchRequest) | **POST** /v2/execution/search/smartcontract | Execute a read of a smart contract on a DLT
[**prepareSmartContractQueryRequest**](SmartContractSearchApi.md#prepareSmartContractQueryRequest) | **POST** /v2/preparation/search/smartcontract | Prepare a read of a smart contract on a DLT


<a name="executePreparedSearchRequest"></a>
# **executePreparedSearchRequest**
> ExecuteSmartContractReadResponseSchema executePreparedSearchRequest(authorization, requestId)

Execute a read of a smart contract on a DLT

Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SmartContractSearchApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    SmartContractSearchApi apiInstance = new SmartContractSearchApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String requestId = "requestId_example"; // String | 
    try {
      ExecuteSmartContractReadResponseSchema result = apiInstance.executePreparedSearchRequest(authorization, requestId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SmartContractSearchApi#executePreparedSearchRequest");
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

[**ExecuteSmartContractReadResponseSchema**](ExecuteSmartContractReadResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | All good! |  -  |
**401** | Unauthorised |  -  |
**404** | Not Found |  -  |
**500** | Something went wrong on our side |  -  |

<a name="prepareSmartContractQueryRequest"></a>
# **prepareSmartContractQueryRequest**
> PrepareSearchResponseSchema prepareSmartContractQueryRequest(authorization, prepareSearchSmartContractRequestSchema)

Prepare a read of a smart contract on a DLT

Returns a request ID for executing a smart contract read on Ethereum.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SmartContractSearchApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    SmartContractSearchApi apiInstance = new SmartContractSearchApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    PrepareSearchSmartContractRequestSchema prepareSearchSmartContractRequestSchema = new PrepareSearchSmartContractRequestSchema(); // PrepareSearchSmartContractRequestSchema | 
    try {
      PrepareSearchResponseSchema result = apiInstance.prepareSmartContractQueryRequest(authorization, prepareSearchSmartContractRequestSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SmartContractSearchApi#prepareSmartContractQueryRequest");
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
 **prepareSearchSmartContractRequestSchema** | [**PrepareSearchSmartContractRequestSchema**](PrepareSearchSmartContractRequestSchema.md)|  |

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

