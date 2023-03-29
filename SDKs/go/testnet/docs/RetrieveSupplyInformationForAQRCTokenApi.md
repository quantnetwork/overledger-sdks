# \RetrieveSupplyInformationForAQRCTokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReadQRC721SmartContractCurrentSupply**](RetrieveSupplyInformationForAQRCTokenApi.md#ReadQRC721SmartContractCurrentSupply) | **Post** /v2/tokenise/tokens/{flowType}/current-supply | Retrieve how many QRC tokens are currently in supply



## ReadQRC721SmartContractCurrentSupply

> TokenReadQRC721Response ReadQRC721SmartContractCurrentSupply(ctx, flowType).Authorization(authorization).PrepareRequest(prepareRequest).Execute()

Retrieve how many QRC tokens are currently in supply



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
    authorization := "authorization_example" // string | 
    flowType := "flowType_example" // string | 
    prepareRequest := *openapiclient.NewPrepareRequest() // PrepareRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RetrieveSupplyInformationForAQRCTokenApi.ReadQRC721SmartContractCurrentSupply(context.Background(), flowType).Authorization(authorization).PrepareRequest(prepareRequest).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RetrieveSupplyInformationForAQRCTokenApi.ReadQRC721SmartContractCurrentSupply``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ReadQRC721SmartContractCurrentSupply`: TokenReadQRC721Response
    fmt.Fprintf(os.Stdout, "Response from `RetrieveSupplyInformationForAQRCTokenApi.ReadQRC721SmartContractCurrentSupply`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**flowType** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiReadQRC721SmartContractCurrentSupplyRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 

 **prepareRequest** | [**PrepareRequest**](PrepareRequest.md) |  | 

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

