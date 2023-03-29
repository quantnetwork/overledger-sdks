# Org.OpenAPITools.Api.MDAppTransactionQueryApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetOvlTransactionByTxId**](MDAppTransactionQueryApi.md#getovltransactionbytxid) | **GET** /v2/mdapptransaction/{overledgertransactionid} | Retrieve information about a specific transaction created by your application in Overledger
[**GetOvlTransactionsByClientId**](MDAppTransactionQueryApi.md#getovltransactionsbyclientid) | **GET** /v2/mdapptransactions | Retrieve a list of transactions created by your application in Overledger



## GetOvlTransactionByTxId

> OverledgerTransactionResponseSchema GetOvlTransactionByTxId (string authorization, string overledgertransactionid)

Retrieve information about a specific transaction created by your application in Overledger

Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class GetOvlTransactionByTxIdExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.sandbox.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new MDAppTransactionQueryApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var overledgertransactionid = overledgertransactionid_example;  // string | 

            try
            {
                // Retrieve information about a specific transaction created by your application in Overledger
                OverledgerTransactionResponseSchema result = apiInstance.GetOvlTransactionByTxId(authorization, overledgertransactionid);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling MDAppTransactionQueryApi.GetOvlTransactionByTxId: " + e.Message );
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
 **overledgertransactionid** | **string**|  | 

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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **404** | Not Found |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetOvlTransactionsByClientId

> List&lt;OverledgerTransactionResponseSchema&gt; GetOvlTransactionsByClientId (string authorization, int? offset = null, int? length = null)

Retrieve a list of transactions created by your application in Overledger

Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class GetOvlTransactionsByClientIdExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.sandbox.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new MDAppTransactionQueryApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var offset = 56;  // int? |  (optional)  (default to 0)
            var length = 56;  // int? |  (optional)  (default to 25)

            try
            {
                // Retrieve a list of transactions created by your application in Overledger
                List<OverledgerTransactionResponseSchema> result = apiInstance.GetOvlTransactionsByClientId(authorization, offset, length);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling MDAppTransactionQueryApi.GetOvlTransactionsByClientId: " + e.Message );
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
 **offset** | **int?**|  | [optional] [default to 0]
 **length** | **int?**|  | [optional] [default to 25]

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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

