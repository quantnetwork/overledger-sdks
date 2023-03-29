# \FungibleTokenControllerApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetToken**](FungibleTokenControllerApi.md#GetToken) | **Get** /v2/token/fungible | 



## GetToken

> Erc20DTO GetToken(ctx).Technology(technology).Network(network).Unit(unit).Execute()



### Example

```go
package main

import (
    "context"
    "fmt"
    "os"
    openapiclient "./openapi"
)

func main() {
    technology := "technology_example" // string | 
    network := "network_example" // string | 
    unit := "unit_example" // string | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.FungibleTokenControllerApi.GetToken(context.Background()).Technology(technology).Network(network).Unit(unit).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `FungibleTokenControllerApi.GetToken``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `GetToken`: Erc20DTO
    fmt.Fprintf(os.Stdout, "Response from `FungibleTokenControllerApi.GetToken`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiGetTokenRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **technology** | **string** |  | 
 **network** | **string** |  | 
 **unit** | **string** |  | 

### Return type

[**Erc20DTO**](Erc20DTO.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

