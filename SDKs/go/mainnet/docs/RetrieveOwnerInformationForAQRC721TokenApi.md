# \RetrieveOwnerInformationForAQRC721TokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReadQRC721SmartContractTokenOwner**](RetrieveOwnerInformationForAQRC721TokenApi.md#ReadQRC721SmartContractTokenOwner) | **Post** /v2/tokenise/tokens/qrc721/token-owner | Retrieve which account currently owns a specific QRC721 token



## ReadQRC721SmartContractTokenOwner

> TokenReadQRC721Response ReadQRC721SmartContractTokenOwner(ctx).Authorization(authorization).ReadTokenOwnerRequestSchema(readTokenOwnerRequestSchema).Execute()

Retrieve which account currently owns a specific QRC721 token



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
    readTokenOwnerRequestSchema := *openapiclient.NewReadTokenOwnerRequestSchema() // ReadTokenOwnerRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RetrieveOwnerInformationForAQRC721TokenApi.ReadQRC721SmartContractTokenOwner(context.Background()).Authorization(authorization).ReadTokenOwnerRequestSchema(readTokenOwnerRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RetrieveOwnerInformationForAQRC721TokenApi.ReadQRC721SmartContractTokenOwner``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ReadQRC721SmartContractTokenOwner`: TokenReadQRC721Response
    fmt.Fprintf(os.Stdout, "Response from `RetrieveOwnerInformationForAQRC721TokenApi.ReadQRC721SmartContractTokenOwner`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiReadQRC721SmartContractTokenOwnerRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **readTokenOwnerRequestSchema** | [**ReadTokenOwnerRequestSchema**](ReadTokenOwnerRequestSchema.md) |  | 

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

