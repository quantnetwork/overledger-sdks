# Org.OpenAPITools.Api.UTXOStatusSearchApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AutoExecuteSearchUtxoRequest**](UTXOStatusSearchApi.md#autoexecutesearchutxorequest) | **POST** /v2/autoexecution/search/utxo/{utxoId} | Prepare and automatically execute a search for a UTXO on a DLT.
[**ExecuteUTXOPreparedSearchRequest**](UTXOStatusSearchApi.md#executeutxopreparedsearchrequest) | **POST** /v2/execution/search/utxo | Execute a search for UTXO state on a DLT
[**PrepareSearchUTXOState**](UTXOStatusSearchApi.md#preparesearchutxostate) | **POST** /v2/preparation/search/utxo/{utxoId} | Prepare Search for a UTXO State.



## AutoExecuteSearchUtxoRequest

> AutoExecuteSearchUTXOResponseSchema AutoExecuteSearchUtxoRequest (string authorization, string utxoId, PrepareSearchSchema prepareSearchSchema)

Prepare and automatically execute a search for a UTXO on a DLT.

Generates a request ID and automatically executes the utxo search on the requested DLT.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class AutoExecuteSearchUtxoRequestExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new UTXOStatusSearchApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var utxoId = utxoId_example;  // string | 
            var prepareSearchSchema = new PrepareSearchSchema(); // PrepareSearchSchema | 

            try
            {
                // Prepare and automatically execute a search for a UTXO on a DLT.
                AutoExecuteSearchUTXOResponseSchema result = apiInstance.AutoExecuteSearchUtxoRequest(authorization, utxoId, prepareSearchSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling UTXOStatusSearchApi.AutoExecuteSearchUtxoRequest: " + e.Message );
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
 **utxoId** | **string**|  | 
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**AutoExecuteSearchUTXOResponseSchema**](AutoExecuteSearchUTXOResponseSchema.md)

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
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ExecuteUTXOPreparedSearchRequest

> ExecuteSearchUTXOResponseSchema ExecuteUTXOPreparedSearchRequest (string authorization, string requestId)

Execute a search for UTXO state on a DLT

Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ExecuteUTXOPreparedSearchRequestExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new UTXOStatusSearchApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var requestId = requestId_example;  // string | 

            try
            {
                // Execute a search for UTXO state on a DLT
                ExecuteSearchUTXOResponseSchema result = apiInstance.ExecuteUTXOPreparedSearchRequest(authorization, requestId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling UTXOStatusSearchApi.ExecuteUTXOPreparedSearchRequest: " + e.Message );
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

[**ExecuteSearchUTXOResponseSchema**](ExecuteSearchUTXOResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **404** | Not Found |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PrepareSearchUTXOState

> PrepareSearchResponseSchema PrepareSearchUTXOState (string authorization, string utxoId, PrepareSearchSchema prepareSearchSchema)

Prepare Search for a UTXO State.

Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class PrepareSearchUTXOStateExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new UTXOStatusSearchApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var utxoId = utxoId_example;  // string | 
            var prepareSearchSchema = new PrepareSearchSchema(); // PrepareSearchSchema | 

            try
            {
                // Prepare Search for a UTXO State.
                PrepareSearchResponseSchema result = apiInstance.PrepareSearchUTXOState(authorization, utxoId, prepareSearchSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling UTXOStatusSearchApi.PrepareSearchUTXOState: " + e.Message );
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
 **utxoId** | **string**|  | 
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

