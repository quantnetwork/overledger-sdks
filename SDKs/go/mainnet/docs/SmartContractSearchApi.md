# \SmartContractSearchApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ExecutePreparedSearchRequest**](SmartContractSearchApi.md#ExecutePreparedSearchRequest) | **Post** /v2/execution/search/smartcontract | Execute a read of a smart contract on a DLT
[**PrepareSmartContractQueryRequest**](SmartContractSearchApi.md#PrepareSmartContractQueryRequest) | **Post** /v2/preparation/search/smartcontract | Prepare a read of a smart contract on a DLT



## ExecutePreparedSearchRequest

> ExecuteSmartContractReadResponseSchema ExecutePreparedSearchRequest(ctx).Authorization(authorization).RequestId(requestId).Execute()

Execute a read of a smart contract on a DLT



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
    resp, r, err := api_client.SmartContractSearchApi.ExecutePreparedSearchRequest(context.Background()).Authorization(authorization).RequestId(requestId).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `SmartContractSearchApi.ExecutePreparedSearchRequest``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ExecutePreparedSearchRequest`: ExecuteSmartContractReadResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `SmartContractSearchApi.ExecutePreparedSearchRequest`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiExecutePreparedSearchRequestRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **requestId** | **string** |  | 

### Return type

[**ExecuteSmartContractReadResponseSchema**](ExecuteSmartContractReadResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PrepareSmartContractQueryRequest

> PrepareSearchResponseSchema PrepareSmartContractQueryRequest(ctx).Authorization(authorization).PrepareSearchSmartContractRequestSchema(prepareSearchSmartContractRequestSchema).Execute()

Prepare a read of a smart contract on a DLT



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
    prepareSearchSmartContractRequestSchema := *openapiclient.NewPrepareSearchSmartContractRequestSchema() // PrepareSearchSmartContractRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.SmartContractSearchApi.PrepareSmartContractQueryRequest(context.Background()).Authorization(authorization).PrepareSearchSmartContractRequestSchema(prepareSearchSmartContractRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `SmartContractSearchApi.PrepareSmartContractQueryRequest``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `PrepareSmartContractQueryRequest`: PrepareSearchResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `SmartContractSearchApi.PrepareSmartContractQueryRequest`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiPrepareSmartContractQueryRequestRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **prepareSearchSmartContractRequestSchema** | [**PrepareSearchSmartContractRequestSchema**](PrepareSearchSmartContractRequestSchema.md) |  | 

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

