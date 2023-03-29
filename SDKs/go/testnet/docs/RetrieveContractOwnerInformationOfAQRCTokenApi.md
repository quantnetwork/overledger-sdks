# \RetrieveContractOwnerInformationOfAQRCTokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReadQRCSmartContractOwner**](RetrieveContractOwnerInformationOfAQRCTokenApi.md#ReadQRCSmartContractOwner) | **Post** /v2/tokenise/tokens/{flowType}/contract-owner | Retrieve which account has contract owner permissions for a QRC token



## ReadQRCSmartContractOwner

> TokenReadQRC721Response ReadQRCSmartContractOwner(ctx, flowType).Authorization(authorization).PrepareRequest(prepareRequest).Execute()

Retrieve which account has contract owner permissions for a QRC token



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
    resp, r, err := api_client.RetrieveContractOwnerInformationOfAQRCTokenApi.ReadQRCSmartContractOwner(context.Background(), flowType).Authorization(authorization).PrepareRequest(prepareRequest).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RetrieveContractOwnerInformationOfAQRCTokenApi.ReadQRCSmartContractOwner``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ReadQRCSmartContractOwner`: TokenReadQRC721Response
    fmt.Fprintf(os.Stdout, "Response from `RetrieveContractOwnerInformationOfAQRCTokenApi.ReadQRCSmartContractOwner`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**flowType** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiReadQRCSmartContractOwnerRequest struct via the builder pattern


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

