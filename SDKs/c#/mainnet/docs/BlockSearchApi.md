# Org.OpenAPITools.Api.BlockSearchApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AutoExecuteSearchBlockRequest**](BlockSearchApi.md#autoexecutesearchblockrequest) | **POST** /v2/autoexecution/search/block/{blockId} | Prepare and automatically execute a search for a block on a DLT.
[**ExecutePreparedSearchRequestBlock**](BlockSearchApi.md#executepreparedsearchrequestblock) | **POST** /v2/execution/search/block | Execute a search for a block on a DLT
[**PrepareSearchBlockByBlockId**](BlockSearchApi.md#preparesearchblockbyblockid) | **POST** /v2/preparation/search/block/{blockId} | Prepare Search Block by Block Id.



## AutoExecuteSearchBlockRequest

> AutoExecuteSearchBlockResponseSchema AutoExecuteSearchBlockRequest (string authorization, string blockId, PrepareSearchSchema prepareSearchSchema)

Prepare and automatically execute a search for a block on a DLT.

Generates a request ID and automatically executes the block search on the requested DLT.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class AutoExecuteSearchBlockRequestExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new BlockSearchApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var blockId = 54678;  // string | 
            var prepareSearchSchema = new PrepareSearchSchema(); // PrepareSearchSchema | 

            try
            {
                // Prepare and automatically execute a search for a block on a DLT.
                AutoExecuteSearchBlockResponseSchema result = apiInstance.AutoExecuteSearchBlockRequest(authorization, blockId, prepareSearchSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling BlockSearchApi.AutoExecuteSearchBlockRequest: " + e.Message );
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
 **blockId** | **string**|  | 
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
| **200** | All good! |  -  |
| **400** | Bad Request |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ExecutePreparedSearchRequestBlock

> ExecuteSearchBlockResponse ExecutePreparedSearchRequestBlock (string authorization, string requestId)

Execute a search for a block on a DLT

Takes a request ID and searches for the block on the requested DLT based on the parameters specified in the prepare request

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ExecutePreparedSearchRequestBlockExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new BlockSearchApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var requestId = requestId_example;  // string | 

            try
            {
                // Execute a search for a block on a DLT
                ExecuteSearchBlockResponse result = apiInstance.ExecutePreparedSearchRequestBlock(authorization, requestId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling BlockSearchApi.ExecutePreparedSearchRequestBlock: " + e.Message );
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

[**ExecuteSearchBlockResponse**](ExecuteSearchBlockResponse.md)

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


## PrepareSearchBlockByBlockId

> PrepareSearchResponseSchema PrepareSearchBlockByBlockId (string authorization, string blockId, PrepareSearchSchema prepareSearchSchema)

Prepare Search Block by Block Id.

Returns a request ID for executing a block search on the requested DLT. Block searches can be prepared based on the Block ID, Block Number or for the latest block at the time

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class PrepareSearchBlockByBlockIdExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new BlockSearchApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var blockId = 54678;  // string | 
            var prepareSearchSchema = new PrepareSearchSchema(); // PrepareSearchSchema | 

            try
            {
                // Prepare Search Block by Block Id.
                PrepareSearchResponseSchema result = apiInstance.PrepareSearchBlockByBlockId(authorization, blockId, prepareSearchSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling BlockSearchApi.PrepareSearchBlockByBlockId: " + e.Message );
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
 **blockId** | **string**|  | 
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

