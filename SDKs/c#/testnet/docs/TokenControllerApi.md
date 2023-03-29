# Org.OpenAPITools.Api.TokenControllerApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetNonFungibleToken**](TokenControllerApi.md#getnonfungibletoken) | **GET** /v2/nonfungibletoken | 



## GetNonFungibleToken

> NonFungibleTokenDTO GetNonFungibleToken (string tokenName, string technology, string network)



### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class GetNonFungibleTokenExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.sandbox.overledger.io";
            var apiInstance = new TokenControllerApi(Configuration.Default);
            var tokenName = tokenName_example;  // string | 
            var technology = technology_example;  // string | 
            var network = network_example;  // string | 

            try
            {
                NonFungibleTokenDTO result = apiInstance.GetNonFungibleToken(tokenName, technology, network);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling TokenControllerApi.GetNonFungibleToken: " + e.Message );
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
 **tokenName** | **string**|  | 
 **technology** | **string**|  | 
 **network** | **string**|  | 

### Return type

[**NonFungibleTokenDTO**](NonFungibleTokenDTO.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: */*


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | OK |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

