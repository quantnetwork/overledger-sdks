# Org.OpenAPITools.Api.FungibleTokenControllerApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetToken**](FungibleTokenControllerApi.md#gettoken) | **GET** /v2/token/fungible | 



## GetToken

> Erc20DTO GetToken (string technology, string network, string unit)



### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class GetTokenExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            var apiInstance = new FungibleTokenControllerApi(Configuration.Default);
            var technology = technology_example;  // string | 
            var network = network_example;  // string | 
            var unit = unit_example;  // string | 

            try
            {
                Erc20DTO result = apiInstance.GetToken(technology, network, unit);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling FungibleTokenControllerApi.GetToken: " + e.Message );
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
 **technology** | **string**|  | 
 **network** | **string**|  | 
 **unit** | **string**|  | 

### Return type

[**Erc20DTO**](Erc20DTO.md)

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

