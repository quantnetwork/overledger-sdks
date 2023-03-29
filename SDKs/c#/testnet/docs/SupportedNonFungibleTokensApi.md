# Org.OpenAPITools.Api.SupportedNonFungibleTokensApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetAllNonFungibleTokens**](SupportedNonFungibleTokensApi.md#getallnonfungibletokens) | **GET** /v2/tokenise/tokens/nonfungible | Retrieve a list of ERC721 and QRC721 tokens



## GetAllNonFungibleTokens

> NonFungibleTokenResponse GetAllNonFungibleTokens (string authorization, string contractType = null, string technology = null, string network = null, string tokenName = null)

Retrieve a list of ERC721 and QRC721 tokens

Retrieves a list of non-fungible tokens supported by Overledger and which API's and functions you can use for each. You can retrieve all non-fungible token types for all locations without providing parameters. If you want to see what tokens are supported for a specific contract type you can pass in either ERC721 or QRC721 as a contract type parameter. You can then filter further by including the resource using technology and network parameters. You can also look for a specific token by passing in the tokenName as a parameter.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class GetAllNonFungibleTokensExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.sandbox.overledger.io";
            var apiInstance = new SupportedNonFungibleTokensApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var contractType = contractType_example;  // string |  (optional) 
            var technology = technology_example;  // string |  (optional) 
            var network = network_example;  // string |  (optional) 
            var tokenName = tokenName_example;  // string |  (optional) 

            try
            {
                // Retrieve a list of ERC721 and QRC721 tokens
                NonFungibleTokenResponse result = apiInstance.GetAllNonFungibleTokens(authorization, contractType, technology, network, tokenName);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling SupportedNonFungibleTokensApi.GetAllNonFungibleTokens: " + e.Message );
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
 **contractType** | **string**|  | [optional] 
 **technology** | **string**|  | [optional] 
 **network** | **string**|  | [optional] 
 **tokenName** | **string**|  | [optional] 

### Return type

[**NonFungibleTokenResponse**](NonFungibleTokenResponse.md)

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

