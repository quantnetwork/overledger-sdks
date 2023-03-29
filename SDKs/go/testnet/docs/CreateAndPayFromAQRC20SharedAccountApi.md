# \CreateAndPayFromAQRC20SharedAccountApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ExecutePreparedRequestTransaction**](CreateAndPayFromAQRC20SharedAccountApi.md#ExecutePreparedRequestTransaction) | **Post** /v2/execution/transaction | Execute a transaction on a DLT
[**PrepareSecondaryOwnerRequest**](CreateAndPayFromAQRC20SharedAccountApi.md#PrepareSecondaryOwnerRequest) | **Post** /v2/preparation/secondaryaccountowner | Prepare a request for a QRC20 shared account



## ExecutePreparedRequestTransaction

> ExecuteTransactionResponse ExecutePreparedRequestTransaction(ctx).Authorization(authorization).ExecuteTransactionRequest(executeTransactionRequest).Execute()

Execute a transaction on a DLT



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
    executeTransactionRequest := *openapiclient.NewExecuteTransactionRequest("RequestId_example") // ExecuteTransactionRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.CreateAndPayFromAQRC20SharedAccountApi.ExecutePreparedRequestTransaction(context.Background()).Authorization(authorization).ExecuteTransactionRequest(executeTransactionRequest).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CreateAndPayFromAQRC20SharedAccountApi.ExecutePreparedRequestTransaction``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ExecutePreparedRequestTransaction`: ExecuteTransactionResponse
    fmt.Fprintf(os.Stdout, "Response from `CreateAndPayFromAQRC20SharedAccountApi.ExecutePreparedRequestTransaction`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiExecutePreparedRequestTransactionRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **executeTransactionRequest** | [**ExecuteTransactionRequest**](ExecuteTransactionRequest.md) |  | 

### Return type

[**ExecuteTransactionResponse**](ExecuteTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PrepareSecondaryOwnerRequest

> PrepareTransactionResponse PrepareSecondaryOwnerRequest(ctx).Authorization(authorization).PrepareAddSecondaryAccountRequestSchema(prepareAddSecondaryAccountRequestSchema).Execute()

Prepare a request for a QRC20 shared account



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
    prepareAddSecondaryAccountRequestSchema := *openapiclient.NewPrepareAddSecondaryAccountRequestSchema(*openapiclient.NewLocation("Technology_example", "Network_example"), "Type_example", "Urgency_example") // PrepareAddSecondaryAccountRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.CreateAndPayFromAQRC20SharedAccountApi.PrepareSecondaryOwnerRequest(context.Background()).Authorization(authorization).PrepareAddSecondaryAccountRequestSchema(prepareAddSecondaryAccountRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CreateAndPayFromAQRC20SharedAccountApi.PrepareSecondaryOwnerRequest``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `PrepareSecondaryOwnerRequest`: PrepareTransactionResponse
    fmt.Fprintf(os.Stdout, "Response from `CreateAndPayFromAQRC20SharedAccountApi.PrepareSecondaryOwnerRequest`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiPrepareSecondaryOwnerRequestRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **prepareAddSecondaryAccountRequestSchema** | [**PrepareAddSecondaryAccountRequestSchema**](PrepareAddSecondaryAccountRequestSchema.md) |  | 

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

