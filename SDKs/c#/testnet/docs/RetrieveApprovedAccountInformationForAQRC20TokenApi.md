# Org.OpenAPITools.Api.RetrieveApprovedAccountInformationForAQRC20TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReadQRC20SecondaryAccountOwner**](RetrieveApprovedAccountInformationForAQRC20TokenApi.md#readqrc20secondaryaccountowner) | **POST** /v2/tokenise/tokens/qrc20/secondary-account-owner | Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.



## ReadQRC20SecondaryAccountOwner

> TokenReadQRC20Response ReadQRC20SecondaryAccountOwner (string authorization, ReadContractOwnerRequestSchema readContractOwnerRequestSchema)

Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.

Submits a query to the Blockchain Network and returns whether an account is approved to make payments on behalf of another account for a particular QRC20 token.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ReadQRC20SecondaryAccountOwnerExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.sandbox.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new RetrieveApprovedAccountInformationForAQRC20TokenApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var readContractOwnerRequestSchema = new ReadContractOwnerRequestSchema(); // ReadContractOwnerRequestSchema | 

            try
            {
                // Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.
                TokenReadQRC20Response result = apiInstance.ReadQRC20SecondaryAccountOwner(authorization, readContractOwnerRequestSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling RetrieveApprovedAccountInformationForAQRC20TokenApi.ReadQRC20SecondaryAccountOwner: " + e.Message );
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
 **readContractOwnerRequestSchema** | [**ReadContractOwnerRequestSchema**](ReadContractOwnerRequestSchema.md)|  | 

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

