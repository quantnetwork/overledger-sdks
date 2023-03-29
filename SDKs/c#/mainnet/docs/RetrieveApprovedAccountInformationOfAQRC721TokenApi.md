# Org.OpenAPITools.Api.RetrieveApprovedAccountInformationOfAQRC721TokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReadQRC721SmartContractApprovedAccount**](RetrieveApprovedAccountInformationOfAQRC721TokenApi.md#readqrc721smartcontractapprovedaccount) | **POST** /v2/tokenise/tokens/qrc721/approved-account | Retrieve which account is approved to collect a QRC721 token



## ReadQRC721SmartContractApprovedAccount

> TokenReadQRC721Response ReadQRC721SmartContractApprovedAccount (string authorization, ReadApprovedAccountRequestSchema readApprovedAccountRequestSchema)

Retrieve which account is approved to collect a QRC721 token

Submits a query to the DLN and returns the address that is approved to collect a particular QRC721 token ID.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ReadQRC721SmartContractApprovedAccountExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new RetrieveApprovedAccountInformationOfAQRC721TokenApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var readApprovedAccountRequestSchema = new ReadApprovedAccountRequestSchema(); // ReadApprovedAccountRequestSchema | 

            try
            {
                // Retrieve which account is approved to collect a QRC721 token
                TokenReadQRC721Response result = apiInstance.ReadQRC721SmartContractApprovedAccount(authorization, readApprovedAccountRequestSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling RetrieveApprovedAccountInformationOfAQRC721TokenApi.ReadQRC721SmartContractApprovedAccount: " + e.Message );
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
 **readApprovedAccountRequestSchema** | [**ReadApprovedAccountRequestSchema**](ReadApprovedAccountRequestSchema.md)|  | 

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

