# \RetrieveTheCountOfQRC721TokensApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetTokenCount**](RetrieveTheCountOfQRC721TokensApi.md#GetTokenCount) | **Post** /v2/tokenise/tokens/qrc721/token-count | Retrieve the count of a QRC721 token for a particular account



## GetTokenCount

> TokenReadQRC721Response GetTokenCount(ctx).Authorization(authorization).ReadBalanceRequestSchema(readBalanceRequestSchema).Execute()

Retrieve the count of a QRC721 token for a particular account



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
    readBalanceRequestSchema := *openapiclient.NewReadBalanceRequestSchema() // ReadBalanceRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RetrieveTheCountOfQRC721TokensApi.GetTokenCount(context.Background()).Authorization(authorization).ReadBalanceRequestSchema(readBalanceRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RetrieveTheCountOfQRC721TokensApi.GetTokenCount``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `GetTokenCount`: TokenReadQRC721Response
    fmt.Fprintf(os.Stdout, "Response from `RetrieveTheCountOfQRC721TokensApi.GetTokenCount`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiGetTokenCountRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **readBalanceRequestSchema** | [**ReadBalanceRequestSchema**](ReadBalanceRequestSchema.md) |  | 

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

