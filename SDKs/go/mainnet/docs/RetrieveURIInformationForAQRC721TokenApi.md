# \RetrieveURIInformationForAQRC721TokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReadQRC721SmartContractUri**](RetrieveURIInformationForAQRC721TokenApi.md#ReadQRC721SmartContractUri) | **Post** /v2/tokenise/tokens/qrc721/token-uri | Retrieve the URI for a specific QRC721 token



## ReadQRC721SmartContractUri

> TokenReadQRC721Response ReadQRC721SmartContractUri(ctx).Authorization(authorization).ReadApprovedAccountRequestSchema(readApprovedAccountRequestSchema).Execute()

Retrieve the URI for a specific QRC721 token



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
    readApprovedAccountRequestSchema := *openapiclient.NewReadApprovedAccountRequestSchema() // ReadApprovedAccountRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RetrieveURIInformationForAQRC721TokenApi.ReadQRC721SmartContractUri(context.Background()).Authorization(authorization).ReadApprovedAccountRequestSchema(readApprovedAccountRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RetrieveURIInformationForAQRC721TokenApi.ReadQRC721SmartContractUri``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ReadQRC721SmartContractUri`: TokenReadQRC721Response
    fmt.Fprintf(os.Stdout, "Response from `RetrieveURIInformationForAQRC721TokenApi.ReadQRC721SmartContractUri`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiReadQRC721SmartContractUriRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **readApprovedAccountRequestSchema** | [**ReadApprovedAccountRequestSchema**](ReadApprovedAccountRequestSchema.md) |  | 

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

