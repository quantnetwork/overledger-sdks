# \TransactionSearchApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AutoExecuteSearchTransactionRequest**](TransactionSearchApi.md#AutoExecuteSearchTransactionRequest) | **Post** /v2/autoexecution/search/transaction | Prepare and automatically execute a search for a transaction on a DLT.
[**ExecutePreparedSearchRequestTransaction**](TransactionSearchApi.md#ExecutePreparedSearchRequestTransaction) | **Post** /v2/execution/search/transaction | Execute a search for a transaction on a DLT
[**PrepareSearchRequest**](TransactionSearchApi.md#PrepareSearchRequest) | **Post** /v2/preparation/search/transaction | Prepare a search for a transaction on a DLT



## AutoExecuteSearchTransactionRequest

> PrepareAndExecuteTransactionResponse AutoExecuteSearchTransactionRequest(ctx).Authorization(authorization).TransactionId(transactionId).PrepareSearchSchema(prepareSearchSchema).Execute()

Prepare and automatically execute a search for a transaction on a DLT.



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
    transactionId := "transactionId_example" // string | 
    prepareSearchSchema := *openapiclient.NewPrepareSearchSchema() // PrepareSearchSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransactionSearchApi.AutoExecuteSearchTransactionRequest(context.Background()).Authorization(authorization).TransactionId(transactionId).PrepareSearchSchema(prepareSearchSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransactionSearchApi.AutoExecuteSearchTransactionRequest``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `AutoExecuteSearchTransactionRequest`: PrepareAndExecuteTransactionResponse
    fmt.Fprintf(os.Stdout, "Response from `TransactionSearchApi.AutoExecuteSearchTransactionRequest`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiAutoExecuteSearchTransactionRequestRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **transactionId** | **string** |  | 
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  | 

### Return type

[**PrepareAndExecuteTransactionResponse**](PrepareAndExecuteTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ExecutePreparedSearchRequestTransaction

> ExecuteSearchTransactionResponse ExecutePreparedSearchRequestTransaction(ctx).Authorization(authorization).RequestId(requestId).Execute()

Execute a search for a transaction on a DLT



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
    requestId := "requestId_example" // string | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransactionSearchApi.ExecutePreparedSearchRequestTransaction(context.Background()).Authorization(authorization).RequestId(requestId).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransactionSearchApi.ExecutePreparedSearchRequestTransaction``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ExecutePreparedSearchRequestTransaction`: ExecuteSearchTransactionResponse
    fmt.Fprintf(os.Stdout, "Response from `TransactionSearchApi.ExecutePreparedSearchRequestTransaction`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiExecutePreparedSearchRequestTransactionRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **requestId** | **string** |  | 

### Return type

[**ExecuteSearchTransactionResponse**](ExecuteSearchTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PrepareSearchRequest

> PrepareSearchResponseSchema PrepareSearchRequest(ctx).Authorization(authorization).TransactionId(transactionId).PrepareSearchSchema(prepareSearchSchema).Execute()

Prepare a search for a transaction on a DLT



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
    transactionId := "transactionId_example" // string | 
    prepareSearchSchema := *openapiclient.NewPrepareSearchSchema() // PrepareSearchSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransactionSearchApi.PrepareSearchRequest(context.Background()).Authorization(authorization).TransactionId(transactionId).PrepareSearchSchema(prepareSearchSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransactionSearchApi.PrepareSearchRequest``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `PrepareSearchRequest`: PrepareSearchResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `TransactionSearchApi.PrepareSearchRequest`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiPrepareSearchRequestRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **transactionId** | **string** |  | 
 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  | 

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

