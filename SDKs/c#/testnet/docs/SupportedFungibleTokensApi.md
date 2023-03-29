# Org.OpenAPITools.Api.SupportedFungibleTokensApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetTokens**](SupportedFungibleTokensApi.md#gettokens) | **GET** /v2/tokens/fungible | Retrieve a list of ERC20 and QRC20 tokens



## GetTokens

> FungibleTokenResponseDTO GetTokens (Location location = null, string contractType = null, string unit = null)

Retrieve a list of ERC20 and QRC20 tokens

Retrieves a list of fungible tokens supported by Overledger and which APIs and functions you can use for each. You can retrieve all fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC20 or QRC20 as a contract type parameter. You can then filter further by including the resource using the technology and network parameters. You can also look for a specific token by passing in the unit as a parameter.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class GetTokensExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.sandbox.overledger.io";
            var apiInstance = new SupportedFungibleTokensApi(Configuration.Default);
            var location = new Location(); // Location |  (optional) 
            var contractType = contractType_example;  // string |  (optional) 
            var unit = unit_example;  // string |  (optional) 

            try
            {
                // Retrieve a list of ERC20 and QRC20 tokens
                FungibleTokenResponseDTO result = apiInstance.GetTokens(location, contractType, unit);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling SupportedFungibleTokensApi.GetTokens: " + e.Message );
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
 **location** | [**Location**](Location.md)|  | [optional] 
 **contractType** | **string**|  | [optional] 
 **unit** | **string**|  | [optional] 

### Return type

[**FungibleTokenResponseDTO**](FungibleTokenResponseDTO.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
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

