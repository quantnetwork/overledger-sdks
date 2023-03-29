# Org.OpenAPITools.Api.RetrieveContractOwnerInformationOfAQRCTokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReadQRCSmartContractOwner**](RetrieveContractOwnerInformationOfAQRCTokenApi.md#readqrcsmartcontractowner) | **POST** /v2/tokenise/tokens/{flowType}/contract-owner | Retrieve which account has contract owner permissions for a QRC token



## ReadQRCSmartContractOwner

> TokenReadQRC721Response ReadQRCSmartContractOwner (string authorization, string flowType, PrepareRequest prepareRequest)

Retrieve which account has contract owner permissions for a QRC token

Submits a query to the Blockchain Network and returns the address that currently has contract owner permissions for a particular QRC token.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ReadQRCSmartContractOwnerExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new RetrieveContractOwnerInformationOfAQRCTokenApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var flowType = flowType_example;  // string | 
            var prepareRequest = new PrepareRequest(); // PrepareRequest | 

            try
            {
                // Retrieve which account has contract owner permissions for a QRC token
                TokenReadQRC721Response result = apiInstance.ReadQRCSmartContractOwner(authorization, flowType, prepareRequest);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling RetrieveContractOwnerInformationOfAQRCTokenApi.ReadQRCSmartContractOwner: " + e.Message );
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
 **flowType** | **string**|  | 
 **prepareRequest** | [**PrepareRequest**](PrepareRequest.md)|  | 

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

