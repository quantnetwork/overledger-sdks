# \RetrieveApprovedAccountInformationOfAQRC721TokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReadQRC721SmartContractApprovedAccount**](RetrieveApprovedAccountInformationOfAQRC721TokenApi.md#ReadQRC721SmartContractApprovedAccount) | **Post** /v2/tokenise/tokens/qrc721/approved-account | Retrieve which account is approved to collect a QRC721 token



## ReadQRC721SmartContractApprovedAccount

> TokenReadQRC721Response ReadQRC721SmartContractApprovedAccount(ctx).Authorization(authorization).ReadApprovedAccountRequestSchema(readApprovedAccountRequestSchema).Execute()

Retrieve which account is approved to collect a QRC721 token



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
    resp, r, err := api_client.RetrieveApprovedAccountInformationOfAQRC721TokenApi.ReadQRC721SmartContractApprovedAccount(context.Background()).Authorization(authorization).ReadApprovedAccountRequestSchema(readApprovedAccountRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RetrieveApprovedAccountInformationOfAQRC721TokenApi.ReadQRC721SmartContractApprovedAccount``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ReadQRC721SmartContractApprovedAccount`: TokenReadQRC721Response
    fmt.Fprintf(os.Stdout, "Response from `RetrieveApprovedAccountInformationOfAQRC721TokenApi.ReadQRC721SmartContractApprovedAccount`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiReadQRC721SmartContractApprovedAccountRequest struct via the builder pattern


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

