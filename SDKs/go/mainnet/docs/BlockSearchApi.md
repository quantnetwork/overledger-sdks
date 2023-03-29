# \BlockSearchApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AutoExecuteSearchBlockRequest**](BlockSearchApi.md#AutoExecuteSearchBlockRequest) | **Post** /v2/autoexecution/search/block/{blockId} | Prepare and automatically execute a search for a block on a DLT.
[**ExecutePreparedSearchRequestBlock**](BlockSearchApi.md#ExecutePreparedSearchRequestBlock) | **Post** /v2/execution/search/block | Execute a search for a block on a DLT
[**PrepareSearchBlockByBlockId**](BlockSearchApi.md#PrepareSearchBlockByBlockId) | **Post** /v2/preparation/search/block/{blockId} | Prepare Search Block by Block Id.



## AutoExecuteSearchBlockRequest

> AutoExecuteSearchBlockResponseSchema AutoExecuteSearchBlockRequest(ctx, blockId).Authorization(authorization).PrepareSearchSchema(prepareSearchSchema).Execute()

Prepare and automatically execute a search for a block on a DLT.



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
    blockId := "54678" // string | 
    prepareSearchSchema := *openapiclient.NewPrepareSearchSchema() // PrepareSearchSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.BlockSearchApi.AutoExecuteSearchBlockRequest(context.Background(), blockId).Authorization(authorization).PrepareSearchSchema(prepareSearchSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `BlockSearchApi.AutoExecuteSearchBlockRequest``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `AutoExecuteSearchBlockRequest`: AutoExecuteSearchBlockResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `BlockSearchApi.AutoExecuteSearchBlockRequest`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**blockId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiAutoExecuteSearchBlockRequestRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 

 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  | 

### Return type

[**AutoExecuteSearchBlockResponseSchema**](AutoExecuteSearchBlockResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ExecutePreparedSearchRequestBlock

> ExecuteSearchBlockResponse ExecutePreparedSearchRequestBlock(ctx).Authorization(authorization).RequestId(requestId).Execute()

Execute a search for a block on a DLT



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
    resp, r, err := api_client.BlockSearchApi.ExecutePreparedSearchRequestBlock(context.Background()).Authorization(authorization).RequestId(requestId).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `BlockSearchApi.ExecutePreparedSearchRequestBlock``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ExecutePreparedSearchRequestBlock`: ExecuteSearchBlockResponse
    fmt.Fprintf(os.Stdout, "Response from `BlockSearchApi.ExecutePreparedSearchRequestBlock`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiExecutePreparedSearchRequestBlockRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **requestId** | **string** |  | 

### Return type

[**ExecuteSearchBlockResponse**](ExecuteSearchBlockResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PrepareSearchBlockByBlockId

> PrepareSearchResponseSchema PrepareSearchBlockByBlockId(ctx, blockId).Authorization(authorization).PrepareSearchSchema(prepareSearchSchema).Execute()

Prepare Search Block by Block Id.



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
    blockId := "54678" // string | 
    prepareSearchSchema := *openapiclient.NewPrepareSearchSchema() // PrepareSearchSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.BlockSearchApi.PrepareSearchBlockByBlockId(context.Background(), blockId).Authorization(authorization).PrepareSearchSchema(prepareSearchSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `BlockSearchApi.PrepareSearchBlockByBlockId``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `PrepareSearchBlockByBlockId`: PrepareSearchResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `BlockSearchApi.PrepareSearchBlockByBlockId`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**blockId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiPrepareSearchBlockByBlockIdRequest struct via the builder pattern


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

