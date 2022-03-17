# Org.OpenAPITools.Api.TransactionSearchApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AutoExecuteSearchTransactionRequest**](TransactionSearchApi.md#autoexecutesearchtransactionrequest) | **POST** /v2/autoexecution/search/transaction | Prepare and automatically execute a search for a transaction on a DLT.
[**ExecutePreparedSearchRequestTransaction**](TransactionSearchApi.md#executepreparedsearchrequesttransaction) | **POST** /v2/execution/search/transaction | Execute a search for a transaction on a DLT
[**PrepareSearchRequest**](TransactionSearchApi.md#preparesearchrequest) | **POST** /v2/preparation/search/transaction | Prepare a search for a transaction on a DLT



## AutoExecuteSearchTransactionRequest

> PrepareAndExecuteTransactionResponse AutoExecuteSearchTransactionRequest (string authorization, string transactionId, PrepareSearchSchema prepareSearchSchema)

Prepare and automatically execute a search for a transaction on a DLT.

Generates a request ID and automatically executes the transaction search on the requested DLT.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class AutoExecuteSearchTransactionRequestExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new TransactionSearchApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var transactionId = transactionId_example;  // string | 
            var prepareSearchSchema = new PrepareSearchSchema(); // PrepareSearchSchema | 

            try
            {
                // Prepare and automatically execute a search for a transaction on a DLT.
                PrepareAndExecuteTransactionResponse result = apiInstance.AutoExecuteSearchTransactionRequest(authorization, transactionId, prepareSearchSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling TransactionSearchApi.AutoExecuteSearchTransactionRequest: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **transactionId** | **string**|  | 
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
| **200** | All good! |  -  |
| **400** | Bad Request |  -  |
| **401** | Unauthorised |  -  |
| **404** | Not Found |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ExecutePreparedSearchRequestTransaction

> ExecuteSearchTransactionResponse ExecutePreparedSearchRequestTransaction (string authorization, string requestId)

Execute a search for a transaction on a DLT

Takes a request ID and searches for the transaction on the requested DLT

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ExecutePreparedSearchRequestTransactionExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new TransactionSearchApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var requestId = requestId_example;  // string | 

            try
            {
                // Execute a search for a transaction on a DLT
                ExecuteSearchTransactionResponse result = apiInstance.ExecutePreparedSearchRequestTransaction(authorization, requestId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling TransactionSearchApi.ExecutePreparedSearchRequestTransaction: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **requestId** | **string**|  | 

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
| **200** | All good! |  -  |
| **400** | Bad Request |  -  |
| **401** | Unauthorised |  -  |
| **404** | Not Found |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PrepareSearchRequest

> PrepareSearchResponseSchema PrepareSearchRequest (string authorization, string transactionId, PrepareSearchSchema prepareSearchSchema)

Prepare a search for a transaction on a DLT

Searches for and returns data on transactions on a particular DLT. Returns a request ID for executing a transaction search on the requested DLT

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class PrepareSearchRequestExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new TransactionSearchApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var transactionId = transactionId_example;  // string | 
            var prepareSearchSchema = new PrepareSearchSchema(); // PrepareSearchSchema | 

            try
            {
                // Prepare a search for a transaction on a DLT
                PrepareSearchResponseSchema result = apiInstance.PrepareSearchRequest(authorization, transactionId, prepareSearchSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling TransactionSearchApi.PrepareSearchRequest: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **transactionId** | **string**|  | 
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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

