# ManageQrc721TokenSupplyApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**prepareSupplyRequest**](ManageQrc721TokenSupplyApi.md#prepareSupplyRequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/supply | Prepare a transaction to manage QRC721 token supply


<a name="prepareSupplyRequest"></a>
# **prepareSupplyRequest**
> PrepareTransactionResponse prepareSupplyRequest(authorization, prepareMintTransactionRequestSchemaQrc721)

Prepare a transaction to manage QRC721 token supply

Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \&quot;Burn Tokens\&quot; which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ManageQrc721TokenSupplyApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.overledger.io");
    
    // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
    OAuth OAuth2_Security_Scheme = (OAuth) defaultClient.getAuthentication("OAuth2_Security_Scheme");
    OAuth2_Security_Scheme.setAccessToken("YOUR ACCESS TOKEN");

    ManageQrc721TokenSupplyApi apiInstance = new ManageQrc721TokenSupplyApi(defaultClient);
    String authorization = "authorization_example"; // String | 
    PrepareMintTransactionRequestSchemaQrc721 prepareMintTransactionRequestSchemaQrc721 = new PrepareMintTransactionRequestSchemaQrc721(); // PrepareMintTransactionRequestSchemaQrc721 | 
    try {
      PrepareTransactionResponse result = apiInstance.prepareSupplyRequest(authorization, prepareMintTransactionRequestSchemaQrc721);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ManageQrc721TokenSupplyApi#prepareSupplyRequest");
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
 **prepareMintTransactionRequestSchemaQrc721** | [**PrepareMintTransactionRequestSchemaQrc721**](PrepareMintTransactionRequestSchemaQrc721.md)|  |

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
**401** | Unauthorised |  -  |
**500** | Something went wrong on our side |  -  |

