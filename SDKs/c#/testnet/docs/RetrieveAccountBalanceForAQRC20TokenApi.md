# Org.OpenAPITools.Api.RetrieveAccountBalanceForAQRC20TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReadQRC20SmartContractBalance**](RetrieveAccountBalanceForAQRC20TokenApi.md#readqrc20smartcontractbalance) | **POST** /v2/tokenise/tokens/qrc20/account-balance | Retrieve the balance of QRC20 tokens for an account



## ReadQRC20SmartContractBalance

> TokenReadQRC20Response ReadQRC20SmartContractBalance (string authorization, ReadAccountBalanceRequestSchema readAccountBalanceRequestSchema)

Retrieve the balance of QRC20 tokens for an account

Submits a query to the Blockchain Network and returns the balance of QRC20 tokens for an account .

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ReadQRC20SmartContractBalanceExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.sandbox.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new RetrieveAccountBalanceForAQRC20TokenApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var readAccountBalanceRequestSchema = new ReadAccountBalanceRequestSchema(); // ReadAccountBalanceRequestSchema | 

            try
            {
                // Retrieve the balance of QRC20 tokens for an account
                TokenReadQRC20Response result = apiInstance.ReadQRC20SmartContractBalance(authorization, readAccountBalanceRequestSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling RetrieveAccountBalanceForAQRC20TokenApi.ReadQRC20SmartContractBalance: " + e.Message );
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
 **readAccountBalanceRequestSchema** | [**ReadAccountBalanceRequestSchema**](ReadAccountBalanceRequestSchema.md)|  | 

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

