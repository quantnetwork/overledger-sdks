# AddressSearchApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedSearchRequestAddressBalance**](AddressSearchApi.md#executePreparedSearchRequestAddressBalance) | **POST** /v2/execution/search/address/balance | Execute a search for an address balance on a DLT
[**executePreparedSearchRequestAddressSequence**](AddressSearchApi.md#executePreparedSearchRequestAddressSequence) | **POST** /v2/execution/search/address/sequence | Execute a search for an address sequence on a DLT
[**prepareAddressBalanceSearchRequest**](AddressSearchApi.md#prepareAddressBalanceSearchRequest) | **POST** /v2/preparation/search/address/balance/{addressId} | Prepare Search for an Address Balance.
[**prepareAddressSequenceSearchRequest**](AddressSearchApi.md#prepareAddressSequenceSearchRequest) | **POST** /v2/preparation/search/address/sequence/{addressId} | Prepare Search for an Address Sequence.


<a name="executePreparedSearchRequestAddressBalance"></a>
# **executePreparedSearchRequestAddressBalance**
> ExecuteSearchBalanceResponse executePreparedSearchRequestAddressBalance(authorization, requestId)

Execute a search for an address balance on a DLT

Takes a request ID, searches for the address and retrieves the balance on the requested DLT. This API is only applicable for account based DLTs

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AddressSearchApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    AddressSearchApi apiInstance = new AddressSearchApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String requestId = "requestId_example"; // String | 
    try {
      ExecuteSearchBalanceResponse result = apiInstance.executePreparedSearchRequestAddressBalance(authorization, requestId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AddressSearchApi#executePreparedSearchRequestAddressBalance");
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

[**ExecuteSearchBalanceResponse**](ExecuteSearchBalanceResponse.md)

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

<a name="executePreparedSearchRequestAddressSequence"></a>
# **executePreparedSearchRequestAddressSequence**
> ExecuteSearchSequenceResponse executePreparedSearchRequestAddressSequence(authorization, requestId)

Execute a search for an address sequence on a DLT

Takes a request ID, searches for the address and retrieves the sequence on the requested DLT. This API is only applicable for account based DLT’s

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AddressSearchApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    AddressSearchApi apiInstance = new AddressSearchApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String requestId = "requestId_example"; // String | 
    try {
      ExecuteSearchSequenceResponse result = apiInstance.executePreparedSearchRequestAddressSequence(authorization, requestId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AddressSearchApi#executePreparedSearchRequestAddressSequence");
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

[**ExecuteSearchSequenceResponse**](ExecuteSearchSequenceResponse.md)

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

<a name="prepareAddressBalanceSearchRequest"></a>
# **prepareAddressBalanceSearchRequest**
> PrepareSearchResponseSchema prepareAddressBalanceSearchRequest(authorization, addressId, prepareSearchSchema)

Prepare Search for an Address Balance.

Perform an address balance search on the requested DLT. Returns a request ID to execute

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AddressSearchApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    AddressSearchApi apiInstance = new AddressSearchApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String addressId = "addressId_example"; // String | 
    PrepareSearchSchema prepareSearchSchema = new PrepareSearchSchema(); // PrepareSearchSchema | 
    try {
      PrepareSearchResponseSchema result = apiInstance.prepareAddressBalanceSearchRequest(authorization, addressId, prepareSearchSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AddressSearchApi#prepareAddressBalanceSearchRequest");
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
 **addressId** | **String**|  |
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

<a name="prepareAddressSequenceSearchRequest"></a>
# **prepareAddressSequenceSearchRequest**
> PrepareSearchResponseSchema prepareAddressSequenceSearchRequest(authorization, addressId, prepareSearchSchema)

Prepare Search for an Address Sequence.

Perform an address sequence search on the requested DLT.Returns a request ID to execute

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AddressSearchApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    AddressSearchApi apiInstance = new AddressSearchApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String addressId = "addressId_example"; // String | 
    PrepareSearchSchema prepareSearchSchema = new PrepareSearchSchema(); // PrepareSearchSchema | 
    try {
      PrepareSearchResponseSchema result = apiInstance.prepareAddressSequenceSearchRequest(authorization, addressId, prepareSearchSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AddressSearchApi#prepareAddressSequenceSearchRequest");
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
 **addressId** | **String**|  |
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

