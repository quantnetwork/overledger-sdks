# Org.OpenAPITools.Api.RetrieveOwnerInformationForAQRC721TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReadQRC721SmartContractTokenOwner**](RetrieveOwnerInformationForAQRC721TokenApi.md#readqrc721smartcontracttokenowner) | **POST** /v2/tokenise/tokens/qrc721/token-owner | Retrieve which account currently owns a specific QRC721 token



## ReadQRC721SmartContractTokenOwner

> TokenReadQRC721Response ReadQRC721SmartContractTokenOwner (string authorization, ReadTokenOwnerRequestSchema readTokenOwnerRequestSchema)

Retrieve which account currently owns a specific QRC721 token

Submits a query to the DLN and returns the address that currently has owns a particular QRC721 token.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ReadQRC721SmartContractTokenOwnerExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.sandbox.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new RetrieveOwnerInformationForAQRC721TokenApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var readTokenOwnerRequestSchema = new ReadTokenOwnerRequestSchema(); // ReadTokenOwnerRequestSchema | 

            try
            {
                // Retrieve which account currently owns a specific QRC721 token
                TokenReadQRC721Response result = apiInstance.ReadQRC721SmartContractTokenOwner(authorization, readTokenOwnerRequestSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling RetrieveOwnerInformationForAQRC721TokenApi.ReadQRC721SmartContractTokenOwner: " + e.Message );
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
 **readTokenOwnerRequestSchema** | [**ReadTokenOwnerRequestSchema**](ReadTokenOwnerRequestSchema.md)|  | 

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

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

