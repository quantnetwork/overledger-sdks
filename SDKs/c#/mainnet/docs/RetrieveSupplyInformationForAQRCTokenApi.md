# Org.OpenAPITools.Api.RetrieveSupplyInformationForAQRCTokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReadQRC721SmartContractCurrentSupply**](RetrieveSupplyInformationForAQRCTokenApi.md#readqrc721smartcontractcurrentsupply) | **POST** /v2/tokenise/tokens/{flowType}/current-supply | Retrieve how many QRC tokens are currently in supply



## ReadQRC721SmartContractCurrentSupply

> TokenReadQRC721Response ReadQRC721SmartContractCurrentSupply (string authorization, string flowType, PrepareRequest prepareRequest)

Retrieve how many QRC tokens are currently in supply

Submits a query to the Blockchain Network and returns the number of QRC tokens that are currently in circulation after tokens have been minted and burned.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ReadQRC721SmartContractCurrentSupplyExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new RetrieveSupplyInformationForAQRCTokenApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var flowType = flowType_example;  // string | 
            var prepareRequest = new PrepareRequest(); // PrepareRequest | 

            try
            {
                // Retrieve how many QRC tokens are currently in supply
                TokenReadQRC721Response result = apiInstance.ReadQRC721SmartContractCurrentSupply(authorization, flowType, prepareRequest);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling RetrieveSupplyInformationForAQRCTokenApi.ReadQRC721SmartContractCurrentSupply: " + e.Message );
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

