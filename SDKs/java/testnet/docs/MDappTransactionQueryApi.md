# MDappTransactionQueryApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getOvlTransactionByTxId**](MDappTransactionQueryApi.md#getOvlTransactionByTxId) | **GET** /v2/mdapptransaction/{overledgertransactionid} | Retrieve information about a specific transaction created by your application in Overledger
[**getOvlTransactionsByClientId**](MDappTransactionQueryApi.md#getOvlTransactionsByClientId) | **GET** /v2/mdapptransactions | Retrieve a list of transactions created by your application in Overledger


<a name="getOvlTransactionByTxId"></a>
# **getOvlTransactionByTxId**
> OverledgerTransactionResponseSchema getOvlTransactionByTxId(authorization, overledgertransactionid)

Retrieve information about a specific transaction created by your application in Overledger

Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MDappTransactionQueryApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    MDappTransactionQueryApi apiInstance = new MDappTransactionQueryApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    String overledgertransactionid = "overledgertransactionid_example"; // String | 
    try {
      OverledgerTransactionResponseSchema result = apiInstance.getOvlTransactionByTxId(authorization, overledgertransactionid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MDappTransactionQueryApi#getOvlTransactionByTxId");
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
 **overledgertransactionid** | **String**|  |

### Return type

[**OverledgerTransactionResponseSchema**](OverledgerTransactionResponseSchema.md)

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

<a name="getOvlTransactionsByClientId"></a>
# **getOvlTransactionsByClientId**
> List&lt;OverledgerTransactionResponseSchema&gt; getOvlTransactionsByClientId(authorization, offset, length)

Retrieve a list of transactions created by your application in Overledger

Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MDappTransactionQueryApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.sandbox.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    MDappTransactionQueryApi apiInstance = new MDappTransactionQueryApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    Integer offset = 0; // Integer | 
    Integer length = 25; // Integer | 
    try {
      List<OverledgerTransactionResponseSchema> result = apiInstance.getOvlTransactionsByClientId(authorization, offset, length);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MDappTransactionQueryApi#getOvlTransactionsByClientId");
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
 **offset** | **Integer**|  | [optional] [default to 0]
 **length** | **Integer**|  | [optional] [default to 25]

### Return type

[**List&lt;OverledgerTransactionResponseSchema&gt;**](OverledgerTransactionResponseSchema.md)

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
**500** | Something went wrong on our side |  -  |

