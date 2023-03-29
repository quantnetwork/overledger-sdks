# \RetrieveApprovedAccountInformationForAQRC20TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReadQRC20SecondaryAccountOwner**](RetrieveApprovedAccountInformationForAQRC20TokenApi.md#ReadQRC20SecondaryAccountOwner) | **Post** /v2/tokenise/tokens/qrc20/secondary-account-owner | Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.



## ReadQRC20SecondaryAccountOwner

> TokenReadQRC20Response ReadQRC20SecondaryAccountOwner(ctx).Authorization(authorization).ReadContractOwnerRequestSchema(readContractOwnerRequestSchema).Execute()

Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.



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
    readContractOwnerRequestSchema := *openapiclient.NewReadContractOwnerRequestSchema() // ReadContractOwnerRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RetrieveApprovedAccountInformationForAQRC20TokenApi.ReadQRC20SecondaryAccountOwner(context.Background()).Authorization(authorization).ReadContractOwnerRequestSchema(readContractOwnerRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RetrieveApprovedAccountInformationForAQRC20TokenApi.ReadQRC20SecondaryAccountOwner``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ReadQRC20SecondaryAccountOwner`: TokenReadQRC20Response
    fmt.Fprintf(os.Stdout, "Response from `RetrieveApprovedAccountInformationForAQRC20TokenApi.ReadQRC20SecondaryAccountOwner`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiReadQRC20SecondaryAccountOwnerRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **readContractOwnerRequestSchema** | [**ReadContractOwnerRequestSchema**](ReadContractOwnerRequestSchema.md) |  | 

### Return type

[**TokenReadQRC20Response**](TokenReadQRC20Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

