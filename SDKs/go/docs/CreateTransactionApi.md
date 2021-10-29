# \CreateTransactionApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ExecutePreparedRequestNativeTransaction**](CreateTransactionApi.md#ExecutePreparedRequestNativeTransaction) | **Post** /v2/execution/nativetransaction | Execute a native transaction on the DLT
[**ExecutePreparedRequestTransaction**](CreateTransactionApi.md#ExecutePreparedRequestTransaction) | **Post** /v2/execution/transaction | Execute a transaction on the DLT
[**PrepareNativeTransaction**](CreateTransactionApi.md#PrepareNativeTransaction) | **Post** /v2/preparation/nativetransaction | Prepare a DLT native transaction
[**PrepareTransactionRequest**](CreateTransactionApi.md#PrepareTransactionRequest) | **Post** /v2/preparation/transaction | Prepare a DLT transaction for signing



## ExecutePreparedRequestNativeTransaction

> ExecuteTransactionResponse ExecutePreparedRequestNativeTransaction(ctx).Authorization(authorization).ExecuteTransactionRequest(executeTransactionRequest).Execute()

Execute a native transaction on the DLT



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
    executeTransactionRequest := *openapiclient.NewExecuteTransactionRequest("RequestId_example", "Signed_example") // ExecuteTransactionRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.CreateTransactionApi.ExecutePreparedRequestNativeTransaction(context.Background()).Authorization(authorization).ExecuteTransactionRequest(executeTransactionRequest).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CreateTransactionApi.ExecutePreparedRequestNativeTransaction``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ExecutePreparedRequestNativeTransaction`: ExecuteTransactionResponse
    fmt.Fprintf(os.Stdout, "Response from `CreateTransactionApi.ExecutePreparedRequestNativeTransaction`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiExecutePreparedRequestNativeTransactionRequest struct via the builder pattern


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


## ExecutePreparedRequestTransaction

> ExecuteTransactionResponse ExecutePreparedRequestTransaction(ctx).Authorization(authorization).ExecuteTransactionRequest(executeTransactionRequest).Execute()

Execute a transaction on the DLT



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
    executeTransactionRequest := *openapiclient.NewExecuteTransactionRequest("RequestId_example", "Signed_example") // ExecuteTransactionRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.CreateTransactionApi.ExecutePreparedRequestTransaction(context.Background()).Authorization(authorization).ExecuteTransactionRequest(executeTransactionRequest).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CreateTransactionApi.ExecutePreparedRequestTransaction``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ExecutePreparedRequestTransaction`: ExecuteTransactionResponse
    fmt.Fprintf(os.Stdout, "Response from `CreateTransactionApi.ExecutePreparedRequestTransaction`: %v\n", resp)
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


## PrepareNativeTransaction

> PrepareSearchResponseSchema PrepareNativeTransaction(ctx).Authorization(authorization).PrepareNativeTransactionRequestSchema(prepareNativeTransactionRequestSchema).Execute()

Prepare a DLT native transaction



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
    prepareNativeTransactionRequestSchema := *openapiclient.NewPrepareNativeTransactionRequestSchema() // PrepareNativeTransactionRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.CreateTransactionApi.PrepareNativeTransaction(context.Background()).Authorization(authorization).PrepareNativeTransactionRequestSchema(prepareNativeTransactionRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CreateTransactionApi.PrepareNativeTransaction``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `PrepareNativeTransaction`: PrepareSearchResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `CreateTransactionApi.PrepareNativeTransaction`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiPrepareNativeTransactionRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **prepareNativeTransactionRequestSchema** | [**PrepareNativeTransactionRequestSchema**](PrepareNativeTransactionRequestSchema.md) |  | 

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


## PrepareTransactionRequest

> PrepareTransactionResponse PrepareTransactionRequest(ctx).Authorization(authorization).UNKNOWNBASETYPE(uNKNOWNBASETYPE).Execute()

Prepare a DLT transaction for signing



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
    uNKNOWNBASETYPE := TODO // UNKNOWN_BASE_TYPE | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.CreateTransactionApi.PrepareTransactionRequest(context.Background()).Authorization(authorization).UNKNOWNBASETYPE(uNKNOWNBASETYPE).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CreateTransactionApi.PrepareTransactionRequest``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `PrepareTransactionRequest`: PrepareTransactionResponse
    fmt.Fprintf(os.Stdout, "Response from `CreateTransactionApi.PrepareTransactionRequest`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiPrepareTransactionRequestRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **uNKNOWNBASETYPE** | [**UNKNOWN_BASE_TYPE**](UNKNOWN_BASE_TYPE.md) |  | 

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

