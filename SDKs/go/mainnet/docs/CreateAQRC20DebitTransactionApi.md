# \CreateAQRC20DebitTransactionApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ExecutePreparedRequestTransaction**](CreateAQRC20DebitTransactionApi.md#ExecutePreparedRequestTransaction) | **Post** /v2/execution/transaction | Execute a transaction on a DLT
[**PrepareDebitRequest**](CreateAQRC20DebitTransactionApi.md#PrepareDebitRequest) | **Post** /v2/preparation/debit | Prepare a QRC20 token debit transaction for signing



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
    resp, r, err := api_client.CreateAQRC20DebitTransactionApi.ExecutePreparedRequestTransaction(context.Background()).Authorization(authorization).ExecuteTransactionRequest(executeTransactionRequest).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CreateAQRC20DebitTransactionApi.ExecutePreparedRequestTransaction``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ExecutePreparedRequestTransaction`: ExecuteTransactionResponse
    fmt.Fprintf(os.Stdout, "Response from `CreateAQRC20DebitTransactionApi.ExecutePreparedRequestTransaction`: %v\n", resp)
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


## PrepareDebitRequest

> PrepareTransactionResponse PrepareDebitRequest(ctx).Authorization(authorization).PrepareCreditTransactionRequestSchema(prepareCreditTransactionRequestSchema).Execute()

Prepare a QRC20 token debit transaction for signing



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
    resp, r, err := api_client.CreateAQRC20DebitTransactionApi.PrepareDebitRequest(context.Background()).Authorization(authorization).PrepareCreditTransactionRequestSchema(prepareCreditTransactionRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CreateAQRC20DebitTransactionApi.PrepareDebitRequest``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `PrepareDebitRequest`: PrepareTransactionResponse
    fmt.Fprintf(os.Stdout, "Response from `CreateAQRC20DebitTransactionApi.PrepareDebitRequest`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiPrepareDebitRequestRequest struct via the builder pattern


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

