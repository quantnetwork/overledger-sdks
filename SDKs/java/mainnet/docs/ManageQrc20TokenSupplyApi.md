# ManageQrc20TokenSupplyApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedRequestTransaction**](ManageQrc20TokenSupplyApi.md#executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**prepareSupplyRequest1**](ManageQrc20TokenSupplyApi.md#prepareSupplyRequest1) | **POST** /v2/preparation/supply | Prepare a request to manage QRC20 token supply


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
import org.openapitools.client.api.ManageQrc20TokenSupplyApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageQrc20TokenSupplyApi apiInstance = new ManageQrc20TokenSupplyApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    ExecuteTransactionRequest executeTransactionRequest = new ExecuteTransactionRequest(); // ExecuteTransactionRequest | 
    try {
      ExecuteTransactionResponse result = apiInstance.executePreparedRequestTransaction(authorization, executeTransactionRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageQrc20TokenSupplyApi#executePreparedRequestTransaction");
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

<a name="prepareSupplyRequest1"></a>
# **prepareSupplyRequest1**
> PrepareTransactionResponse prepareSupplyRequest1(authorization, prepareMintTransactionRequestSchemaQrc20)

Prepare a request to manage QRC20 token supply

Transforms a transaction request to manage QRC20 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue more tokens for your QRC20 token, and \&quot;Burn Tokens\&quot; which will allow you to destroy your QRC20 tokens. Successfully prepared transactions can then be executed using the /execution/transaction API.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ManageQrc20TokenSupplyApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageQrc20TokenSupplyApi apiInstance = new ManageQrc20TokenSupplyApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    PrepareMintTransactionRequestSchemaQrc20 prepareMintTransactionRequestSchemaQrc20 = new PrepareMintTransactionRequestSchemaQrc20(); // PrepareMintTransactionRequestSchemaQrc20 | 
    try {
      PrepareTransactionResponse result = apiInstance.prepareSupplyRequest1(authorization, prepareMintTransactionRequestSchemaQrc20);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageQrc20TokenSupplyApi#prepareSupplyRequest1");
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
 **prepareMintTransactionRequestSchemaQrc20** | [**PrepareMintTransactionRequestSchemaQrc20**](PrepareMintTransactionRequestSchemaQrc20.md)|  |

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

