# BlockSearchApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**autoExecuteSearchBlockRequest**](BlockSearchApi.md#autoExecuteSearchBlockRequest) | **POST** /v2/autoexecution/search/block/{blockId} | Prepare and automatically execute a search for a block on a DLT.
[**executePreparedSearchRequestBlock**](BlockSearchApi.md#executePreparedSearchRequestBlock) | **POST** /v2/execution/search/block | Execute a search for a block on a DLT
[**prepareSearchBlockByBlockId**](BlockSearchApi.md#prepareSearchBlockByBlockId) | **POST** /v2/preparation/search/block/{blockId} | Prepare Search Block by Block Id.


<a name="autoExecuteSearchBlockRequest"></a>
# **autoExecuteSearchBlockRequest**
> AutoExecuteSearchBlockResponseSchema autoExecuteSearchBlockRequest(authorization, blockId, prepareSearchSchema)

Prepare and automatically execute a search for a block on a DLT.

Generates a request ID and automatically executes the block search on the requested DLT.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.BlockSearchApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    BlockSearchApi apiInstance = new BlockSearchApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String blockId = "54678"; // String | 
    PrepareSearchSchema prepareSearchSchema = new PrepareSearchSchema(); // PrepareSearchSchema | 
    try {
      AutoExecuteSearchBlockResponseSchema result = apiInstance.autoExecuteSearchBlockRequest(authorization, blockId, prepareSearchSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling BlockSearchApi#autoExecuteSearchBlockRequest");
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
 **blockId** | **String**|  |
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  |

### Return type

[**AutoExecuteSearchBlockResponseSchema**](AutoExecuteSearchBlockResponseSchema.md)

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

<a name="executePreparedSearchRequestBlock"></a>
# **executePreparedSearchRequestBlock**
> ExecuteSearchBlockResponse executePreparedSearchRequestBlock(authorization, requestId)

Execute a search for a block on a DLT

Takes a request ID and searches for the block on the requested DLT based on the parameters specified in the prepare request

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.BlockSearchApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    BlockSearchApi apiInstance = new BlockSearchApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String requestId = "requestId_example"; // String | 
    try {
      ExecuteSearchBlockResponse result = apiInstance.executePreparedSearchRequestBlock(authorization, requestId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling BlockSearchApi#executePreparedSearchRequestBlock");
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

[**ExecuteSearchBlockResponse**](ExecuteSearchBlockResponse.md)

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

<a name="prepareSearchBlockByBlockId"></a>
# **prepareSearchBlockByBlockId**
> PrepareSearchResponseSchema prepareSearchBlockByBlockId(authorization, blockId, prepareSearchSchema)

Prepare Search Block by Block Id.

Returns a request ID for executing a block search on the requested DLT. Block searches can be prepared based on the Block ID, Block Number or for the latest block at the time

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.BlockSearchApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    BlockSearchApi apiInstance = new BlockSearchApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String blockId = "54678"; // String | 
    PrepareSearchSchema prepareSearchSchema = new PrepareSearchSchema(); // PrepareSearchSchema | 
    try {
      PrepareSearchResponseSchema result = apiInstance.prepareSearchBlockByBlockId(authorization, blockId, prepareSearchSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling BlockSearchApi#prepareSearchBlockByBlockId");
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
 **blockId** | **String**|  |
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

