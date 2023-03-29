# \RetrieveApprovedAccountAllowanceForAQRC20TokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReadApprovedDebitAmount**](RetrieveApprovedAccountAllowanceForAQRC20TokenApi.md#ReadApprovedDebitAmount) | **Post** /v2/tokenise/tokens/qrc20/approved-debit-amount | Retrieve how many QRC20 tokens an address is allowed to debit



## ReadApprovedDebitAmount

> TokenReadQRC20Response ReadApprovedDebitAmount(ctx).Authorization(authorization).ReadApprovedAccountAllowanceRequestSchema(readApprovedAccountAllowanceRequestSchema).Execute()

Retrieve how many QRC20 tokens an address is allowed to debit



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
    readApprovedAccountAllowanceRequestSchema := *openapiclient.NewReadApprovedAccountAllowanceRequestSchema() // ReadApprovedAccountAllowanceRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RetrieveApprovedAccountAllowanceForAQRC20TokenApi.ReadApprovedDebitAmount(context.Background()).Authorization(authorization).ReadApprovedAccountAllowanceRequestSchema(readApprovedAccountAllowanceRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RetrieveApprovedAccountAllowanceForAQRC20TokenApi.ReadApprovedDebitAmount``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ReadApprovedDebitAmount`: TokenReadQRC20Response
    fmt.Fprintf(os.Stdout, "Response from `RetrieveApprovedAccountAllowanceForAQRC20TokenApi.ReadApprovedDebitAmount`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiReadApprovedDebitAmountRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **readApprovedAccountAllowanceRequestSchema** | [**ReadApprovedAccountAllowanceRequestSchema**](ReadApprovedAccountAllowanceRequestSchema.md) |  | 

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

