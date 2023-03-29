# Org.OpenAPITools.Api.RetrieveApprovedAccountAllowanceForAQRC20TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReadApprovedDebitAmount**](RetrieveApprovedAccountAllowanceForAQRC20TokenApi.md#readapproveddebitamount) | **POST** /v2/tokenise/tokens/qrc20/approved-debit-amount | Retrieve how many QRC20 tokens an address is allowed to debit



## ReadApprovedDebitAmount

> TokenReadQRC20Response ReadApprovedDebitAmount (string authorization, ReadApprovedAccountAllowanceRequestSchema readApprovedAccountAllowanceRequestSchema)

Retrieve how many QRC20 tokens an address is allowed to debit

Submits a query to the Blockchain Network and returns the number of QRC20 tokens a particular account is allowed to debit from another account

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ReadApprovedDebitAmountExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.sandbox.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new RetrieveApprovedAccountAllowanceForAQRC20TokenApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var readApprovedAccountAllowanceRequestSchema = new ReadApprovedAccountAllowanceRequestSchema(); // ReadApprovedAccountAllowanceRequestSchema | 

            try
            {
                // Retrieve how many QRC20 tokens an address is allowed to debit
                TokenReadQRC20Response result = apiInstance.ReadApprovedDebitAmount(authorization, readApprovedAccountAllowanceRequestSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling RetrieveApprovedAccountAllowanceForAQRC20TokenApi.ReadApprovedDebitAmount: " + e.Message );
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
 **readApprovedAccountAllowanceRequestSchema** | [**ReadApprovedAccountAllowanceRequestSchema**](ReadApprovedAccountAllowanceRequestSchema.md)|  | 

### Return type

[**TokenReadQRC20Response**](TokenReadQRC20Response.md)

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

