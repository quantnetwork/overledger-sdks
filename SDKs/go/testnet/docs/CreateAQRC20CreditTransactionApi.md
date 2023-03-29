# \CreateAQRC20CreditTransactionApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ExecutePreparedRequestTransaction**](CreateAQRC20CreditTransactionApi.md#ExecutePreparedRequestTransaction) | **Post** /v2/execution/transaction | Execute a transaction on a DLT
[**PrepareCreditRequest**](CreateAQRC20CreditTransactionApi.md#PrepareCreditRequest) | **Post** /v2/preparation/credit | Prepare a QRC20 token credit transaction for signing



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
    resp, r, err := api_client.CreateAQRC20CreditTransactionApi.ExecutePreparedRequestTransaction(context.Background()).Authorization(authorization).ExecuteTransactionRequest(executeTransactionRequest).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CreateAQRC20CreditTransactionApi.ExecutePreparedRequestTransaction``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ExecutePreparedRequestTransaction`: ExecuteTransactionResponse
    fmt.Fprintf(os.Stdout, "Response from `CreateAQRC20CreditTransactionApi.ExecutePreparedRequestTransaction`: %v\n", resp)
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


## PrepareCreditRequest

> PrepareTransactionResponse PrepareCreditRequest(ctx).Authorization(authorization).PrepareCreditTransactionRequestSchema(prepareCreditTransactionRequestSchema).Execute()

Prepare a QRC20 token credit transaction for signing



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
    prepareCreditTransactionRequestSchema := *openapiclient.NewPrepareCreditTransactionRequestSchema(*openapiclient.NewLocation("Technology_example", "Network_example"), "Type_example", "Urgency_example") // PrepareCreditTransactionRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.CreateAQRC20CreditTransactionApi.PrepareCreditRequest(context.Background()).Authorization(authorization).PrepareCreditTransactionRequestSchema(prepareCreditTransactionRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CreateAQRC20CreditTransactionApi.PrepareCreditRequest``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `PrepareCreditRequest`: PrepareTransactionResponse
    fmt.Fprintf(os.Stdout, "Response from `CreateAQRC20CreditTransactionApi.PrepareCreditRequest`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiPrepareCreditRequestRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **prepareCreditTransactionRequestSchema** | [**PrepareCreditTransactionRequestSchema**](PrepareCreditTransactionRequestSchema.md) |  | 

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

