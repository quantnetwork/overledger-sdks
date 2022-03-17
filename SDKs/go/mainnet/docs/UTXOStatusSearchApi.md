# \UTXOStatusSearchApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AutoExecuteSearchUtxoRequest**](UTXOStatusSearchApi.md#AutoExecuteSearchUtxoRequest) | **Post** /v2/autoexecution/search/utxo/{utxoId} | Prepare and automatically execute a search for a UTXO on a DLT.
[**ExecuteUTXOPreparedSearchRequest**](UTXOStatusSearchApi.md#ExecuteUTXOPreparedSearchRequest) | **Post** /v2/execution/search/utxo | Execute a search for UTXO state on a DLT
[**PrepareSearchUTXOState**](UTXOStatusSearchApi.md#PrepareSearchUTXOState) | **Post** /v2/preparation/search/utxo/{utxoId} | Prepare Search for a UTXO State.



## AutoExecuteSearchUtxoRequest

> AutoExecuteSearchUTXOResponseSchema AutoExecuteSearchUtxoRequest(ctx, utxoId).Authorization(authorization).PrepareSearchSchema(prepareSearchSchema).Execute()

Prepare and automatically execute a search for a UTXO on a DLT.



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
    utxoId := "utxoId_example" // string | 
    prepareSearchSchema := *openapiclient.NewPrepareSearchSchema() // PrepareSearchSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.UTXOStatusSearchApi.AutoExecuteSearchUtxoRequest(context.Background(), utxoId).Authorization(authorization).PrepareSearchSchema(prepareSearchSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `UTXOStatusSearchApi.AutoExecuteSearchUtxoRequest``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `AutoExecuteSearchUtxoRequest`: AutoExecuteSearchUTXOResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `UTXOStatusSearchApi.AutoExecuteSearchUtxoRequest`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**utxoId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiAutoExecuteSearchUtxoRequestRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 

 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  | 

### Return type

[**AutoExecuteSearchUTXOResponseSchema**](AutoExecuteSearchUTXOResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ExecuteUTXOPreparedSearchRequest

> ExecuteSearchUTXOResponseSchema ExecuteUTXOPreparedSearchRequest(ctx).Authorization(authorization).RequestId(requestId).Execute()

Execute a search for UTXO state on a DLT



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
    resp, r, err := api_client.UTXOStatusSearchApi.ExecuteUTXOPreparedSearchRequest(context.Background()).Authorization(authorization).RequestId(requestId).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `UTXOStatusSearchApi.ExecuteUTXOPreparedSearchRequest``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ExecuteUTXOPreparedSearchRequest`: ExecuteSearchUTXOResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `UTXOStatusSearchApi.ExecuteUTXOPreparedSearchRequest`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiExecuteUTXOPreparedSearchRequestRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **requestId** | **string** |  | 

### Return type

[**ExecuteSearchUTXOResponseSchema**](ExecuteSearchUTXOResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PrepareSearchUTXOState

> PrepareSearchResponseSchema PrepareSearchUTXOState(ctx, utxoId).Authorization(authorization).PrepareSearchSchema(prepareSearchSchema).Execute()

Prepare Search for a UTXO State.



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
    utxoId := "utxoId_example" // string | 
    prepareSearchSchema := *openapiclient.NewPrepareSearchSchema() // PrepareSearchSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.UTXOStatusSearchApi.PrepareSearchUTXOState(context.Background(), utxoId).Authorization(authorization).PrepareSearchSchema(prepareSearchSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `UTXOStatusSearchApi.PrepareSearchUTXOState``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `PrepareSearchUTXOState`: PrepareSearchResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `UTXOStatusSearchApi.PrepareSearchUTXOState`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**utxoId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiPrepareSearchUTXOStateRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 

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

