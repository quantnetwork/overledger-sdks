# Org.OpenAPITools.Api.CreateAndPayFromAQRC20SharedAccountApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ExecutePreparedRequestTransaction**](CreateAndPayFromAQRC20SharedAccountApi.md#executepreparedrequesttransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**PrepareSecondaryOwnerRequest**](CreateAndPayFromAQRC20SharedAccountApi.md#preparesecondaryownerrequest) | **POST** /v2/preparation/secondaryaccountowner | Prepare a request for a QRC20 shared account



## ExecutePreparedRequestTransaction

> ExecuteTransactionResponse ExecutePreparedRequestTransaction (string authorization, ExecuteTransactionRequest executeTransactionRequest)

Execute a transaction on a DLT

Takes a request ID and submits a signed transaction to the requested DLT.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ExecutePreparedRequestTransactionExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new CreateAndPayFromAQRC20SharedAccountApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var executeTransactionRequest = new ExecuteTransactionRequest(); // ExecuteTransactionRequest | 

            try
            {
                // Execute a transaction on a DLT
                ExecuteTransactionResponse result = apiInstance.ExecutePreparedRequestTransaction(authorization, executeTransactionRequest);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling CreateAndPayFromAQRC20SharedAccountApi.ExecutePreparedRequestTransaction: " + e.Message );
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
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **404** | Not Found |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PrepareSecondaryOwnerRequest

> PrepareTransactionResponse PrepareSecondaryOwnerRequest (string authorization, PrepareAddSecondaryAccountRequestSchema prepareAddSecondaryAccountRequestSchema)

Prepare a request for a QRC20 shared account

Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \"Remove Account\" which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class PrepareSecondaryOwnerRequestExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new CreateAndPayFromAQRC20SharedAccountApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var prepareAddSecondaryAccountRequestSchema = new PrepareAddSecondaryAccountRequestSchema(); // PrepareAddSecondaryAccountRequestSchema | 

            try
            {
                // Prepare a request for a QRC20 shared account
                PrepareTransactionResponse result = apiInstance.PrepareSecondaryOwnerRequest(authorization, prepareAddSecondaryAccountRequestSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling CreateAndPayFromAQRC20SharedAccountApi.PrepareSecondaryOwnerRequest: " + e.Message );
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
 **prepareAddSecondaryAccountRequestSchema** | [**PrepareAddSecondaryAccountRequestSchema**](PrepareAddSecondaryAccountRequestSchema.md)|  | 

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
| **200** | All good! |  -  |
| **400** | Bad Request |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

