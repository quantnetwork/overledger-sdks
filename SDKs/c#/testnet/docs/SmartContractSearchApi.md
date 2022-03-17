# Org.OpenAPITools.Api.SmartContractSearchApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AutoExecuteSearchSmartContractQueryRequest**](SmartContractSearchApi.md#autoexecutesearchsmartcontractqueryrequest) | **POST** /v2/autoexecution/search/smartcontract | Prepare and automatically execute a search for a smart contract query on a DLT.
[**ExecutePreparedSearchRequest**](SmartContractSearchApi.md#executepreparedsearchrequest) | **POST** /v2/execution/search/smartcontract | Execute a read of a smart contract on a DLT
[**PrepareSmartContractQueryRequest**](SmartContractSearchApi.md#preparesmartcontractqueryrequest) | **POST** /v2/preparation/search/smartcontract | Prepare a read of a smart contract on a DLT



## AutoExecuteSearchSmartContractQueryRequest

> AutoExecuteSearchAddressBalanceResponseSchema AutoExecuteSearchSmartContractQueryRequest (string authorization, PrepareSearchSchema prepareSearchSchema)

Prepare and automatically execute a search for a smart contract query on a DLT.

Generates a request ID and automatically executes the smart contract query search on the requested DLT.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class AutoExecuteSearchSmartContractQueryRequestExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.sandbox.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new SmartContractSearchApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var prepareSearchSchema = new PrepareSearchSchema(); // PrepareSearchSchema | 

            try
            {
                // Prepare and automatically execute a search for a smart contract query on a DLT.
                AutoExecuteSearchAddressBalanceResponseSchema result = apiInstance.AutoExecuteSearchSmartContractQueryRequest(authorization, prepareSearchSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling SmartContractSearchApi.AutoExecuteSearchSmartContractQueryRequest: " + e.Message );
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
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md)|  | 

### Return type

[**AutoExecuteSearchAddressBalanceResponseSchema**](AutoExecuteSearchAddressBalanceResponseSchema.md)

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


## ExecutePreparedSearchRequest

> ExecuteSmartContractReadResponseSchema ExecutePreparedSearchRequest (string authorization, string requestId)

Execute a read of a smart contract on a DLT

Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ExecutePreparedSearchRequestExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.sandbox.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new SmartContractSearchApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var requestId = requestId_example;  // string | 

            try
            {
                // Execute a read of a smart contract on a DLT
                ExecuteSmartContractReadResponseSchema result = apiInstance.ExecutePreparedSearchRequest(authorization, requestId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling SmartContractSearchApi.ExecutePreparedSearchRequest: " + e.Message );
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

[**ExecuteSmartContractReadResponseSchema**](ExecuteSmartContractReadResponseSchema.md)

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


## PrepareSmartContractQueryRequest

> PrepareSearchResponseSchema PrepareSmartContractQueryRequest (string authorization, PrepareSearchSmartContractRequestSchema prepareSearchSmartContractRequestSchema)

Prepare a read of a smart contract on a DLT

Returns a request ID for executing a smart contract read on Ethereum.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class PrepareSmartContractQueryRequestExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.sandbox.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new SmartContractSearchApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var prepareSearchSmartContractRequestSchema = new PrepareSearchSmartContractRequestSchema(); // PrepareSearchSmartContractRequestSchema | 

            try
            {
                // Prepare a read of a smart contract on a DLT
                PrepareSearchResponseSchema result = apiInstance.PrepareSmartContractQueryRequest(authorization, prepareSearchSmartContractRequestSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling SmartContractSearchApi.PrepareSmartContractQueryRequest: " + e.Message );
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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

