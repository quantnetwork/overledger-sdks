# CreateTransactionApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedRequestNativeTransaction**](CreateTransactionApi.md#executePreparedRequestNativeTransaction) | **POST** /v2/execution/nativetransaction | Execute a native transaction on the DLT
[**executePreparedRequestTransaction**](CreateTransactionApi.md#executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on the DLT
[**prepareNativeTransaction**](CreateTransactionApi.md#prepareNativeTransaction) | **POST** /v2/preparation/nativetransaction | Prepare a DLT native transaction
[**prepareTransactionRequest**](CreateTransactionApi.md#prepareTransactionRequest) | **POST** /v2/preparation/transaction | Prepare a DLT transaction for signing


<a name="executePreparedRequestNativeTransaction"></a>
# **executePreparedRequestNativeTransaction**
> ExecuteTransactionResponse executePreparedRequestNativeTransaction(authorization, executeTransactionRequest)

Execute a native transaction on the DLT

Takes a request ID and submits a signed native transaction to the requested DLT

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.CreateTransactionApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    CreateTransactionApi apiInstance = new CreateTransactionApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    ExecuteTransactionRequest executeTransactionRequest = new ExecuteTransactionRequest(); // ExecuteTransactionRequest | 
    try {
      ExecuteTransactionResponse result = apiInstance.executePreparedRequestNativeTransaction(authorization, executeTransactionRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling CreateTransactionApi#executePreparedRequestNativeTransaction");
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

<a name="executePreparedRequestTransaction"></a>
# **executePreparedRequestTransaction**
> ExecuteTransactionResponse executePreparedRequestTransaction(authorization, executeTransactionRequest)

Execute a transaction on the DLT

Takes a request ID and submits a signed transaction to the requested DLT.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.CreateTransactionApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    CreateTransactionApi apiInstance = new CreateTransactionApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    ExecuteTransactionRequest executeTransactionRequest = new ExecuteTransactionRequest(); // ExecuteTransactionRequest | 
    try {
      ExecuteTransactionResponse result = apiInstance.executePreparedRequestTransaction(authorization, executeTransactionRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling CreateTransactionApi#executePreparedRequestTransaction");
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

<a name="prepareNativeTransaction"></a>
# **prepareNativeTransaction**
> PrepareSearchResponseSchema prepareNativeTransaction(authorization, prepareNativeTransactionRequestSchema)

Prepare a DLT native transaction

Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.CreateTransactionApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    CreateTransactionApi apiInstance = new CreateTransactionApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    PrepareNativeTransactionRequestSchema prepareNativeTransactionRequestSchema = new PrepareNativeTransactionRequestSchema(); // PrepareNativeTransactionRequestSchema | 
    try {
      PrepareSearchResponseSchema result = apiInstance.prepareNativeTransaction(authorization, prepareNativeTransactionRequestSchema);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling CreateTransactionApi#prepareNativeTransaction");
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
 **prepareNativeTransactionRequestSchema** | [**PrepareNativeTransactionRequestSchema**](PrepareNativeTransactionRequestSchema.md)|  |

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

<a name="prepareTransactionRequest"></a>
# **prepareTransactionRequest**
> PrepareTransactionResponse prepareTransactionRequest(authorization, UNKNOWN_BASE_TYPE)

Prepare a DLT transaction for signing

Transforms a transaction request into a payload ready for signing for the requested DLT and returns a request ID for executing. Supported transaction types in this release are “Payment” (to send payments) and “Smart Contract Invoke” (to invoke arbitrary smart contract functions)

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.CreateTransactionApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://OVL 2.0");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    CreateTransactionApi apiInstance = new CreateTransactionApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    UNKNOWN_BASE_TYPE UNKNOWN_BASE_TYPE = {"urgency":"normal","requestDetails":{"overledgerSigningType":"overledger-javascript-library","origin":[{"originId":"0x08f0C8451eC8283638F35D863DfFD8c1e1b3E39d"}],"destination":[{"payment":{"amount":"0.001","unit":"QNT"},"destinationId":"0xd8b31B65878a6B1a6cAf9f4819C1A42d68a7A116"}],"message":"Example message here"},"location":{"technology":"Ethereum","network":"Ropsten Testnet"},"type":"PAYMENT"}; // UNKNOWN_BASE_TYPE | 
    try {
      PrepareTransactionResponse result = apiInstance.prepareTransactionRequest(authorization, UNKNOWN_BASE_TYPE);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling CreateTransactionApi#prepareTransactionRequest");
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
 **UNKNOWN_BASE_TYPE** | [**UNKNOWN_BASE_TYPE**](UNKNOWN_BASE_TYPE.md)|  |

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

