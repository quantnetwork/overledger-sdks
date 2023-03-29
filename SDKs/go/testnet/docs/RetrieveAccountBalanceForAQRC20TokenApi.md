# \RetrieveAccountBalanceForAQRC20TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReadQRC20SmartContractBalance**](RetrieveAccountBalanceForAQRC20TokenApi.md#ReadQRC20SmartContractBalance) | **Post** /v2/tokenise/tokens/qrc20/account-balance | Retrieve the balance of QRC20 tokens for an account



## ReadQRC20SmartContractBalance

> TokenReadQRC20Response ReadQRC20SmartContractBalance(ctx).Authorization(authorization).ReadAccountBalanceRequestSchema(readAccountBalanceRequestSchema).Execute()

Retrieve the balance of QRC20 tokens for an account



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
    readAccountBalanceRequestSchema := *openapiclient.NewReadAccountBalanceRequestSchema() // ReadAccountBalanceRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RetrieveAccountBalanceForAQRC20TokenApi.ReadQRC20SmartContractBalance(context.Background()).Authorization(authorization).ReadAccountBalanceRequestSchema(readAccountBalanceRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RetrieveAccountBalanceForAQRC20TokenApi.ReadQRC20SmartContractBalance``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ReadQRC20SmartContractBalance`: TokenReadQRC20Response
    fmt.Fprintf(os.Stdout, "Response from `RetrieveAccountBalanceForAQRC20TokenApi.ReadQRC20SmartContractBalance`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiReadQRC20SmartContractBalanceRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **readAccountBalanceRequestSchema** | [**ReadAccountBalanceRequestSchema**](ReadAccountBalanceRequestSchema.md) |  | 

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

