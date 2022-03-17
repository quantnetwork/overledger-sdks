# \AddressSearchApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AutoExecuteSearchAddressBalanceRequest**](AddressSearchApi.md#AutoExecuteSearchAddressBalanceRequest) | **Post** /v2/autoexecution/search/address/balance/{addressId} | Prepare and automatically execute a search for an address balance on a DLT.
[**ExecutePreparedSearchRequestAddressBalance**](AddressSearchApi.md#ExecutePreparedSearchRequestAddressBalance) | **Post** /v2/execution/search/address/balance | Execute a search for an address balance on a DLT
[**ExecutePreparedSearchRequestAddressSequence**](AddressSearchApi.md#ExecutePreparedSearchRequestAddressSequence) | **Post** /v2/execution/search/address/sequence | Execute a search for an address sequence on a DLT
[**PrepareAddressBalanceSearchRequest**](AddressSearchApi.md#PrepareAddressBalanceSearchRequest) | **Post** /v2/preparation/search/address/balance/{addressId} | Prepare Search for an Address Balance.
[**PrepareAddressSequenceSearchRequest**](AddressSearchApi.md#PrepareAddressSequenceSearchRequest) | **Post** /v2/preparation/search/address/sequence/{addressId} | Prepare Search for an Address Sequence.
[**PrepareAddressSequenceSearchRequest1**](AddressSearchApi.md#PrepareAddressSequenceSearchRequest1) | **Post** /v2/autoexecution/search/address/sequence/{addressId} | Prepare and automatically execute a search for an Address Sequence.



## AutoExecuteSearchAddressBalanceRequest

> AutoExecuteSearchAddressBalanceResponseSchema AutoExecuteSearchAddressBalanceRequest(ctx, addressId).Authorization(authorization).PrepareSearchSchema(prepareSearchSchema).Execute()

Prepare and automatically execute a search for an address balance on a DLT.



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
    addressId := "addressId_example" // string | 
    prepareSearchSchema := *openapiclient.NewPrepareSearchSchema() // PrepareSearchSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.AddressSearchApi.AutoExecuteSearchAddressBalanceRequest(context.Background(), addressId).Authorization(authorization).PrepareSearchSchema(prepareSearchSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `AddressSearchApi.AutoExecuteSearchAddressBalanceRequest``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `AutoExecuteSearchAddressBalanceRequest`: AutoExecuteSearchAddressBalanceResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `AddressSearchApi.AutoExecuteSearchAddressBalanceRequest`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**addressId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiAutoExecuteSearchAddressBalanceRequestRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 

 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  | 

### Return type

[**AutoExecuteSearchAddressBalanceResponseSchema**](AutoExecuteSearchAddressBalanceResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ExecutePreparedSearchRequestAddressBalance

> ExecuteSearchBalanceResponse ExecutePreparedSearchRequestAddressBalance(ctx).Authorization(authorization).RequestId(requestId).Execute()

Execute a search for an address balance on a DLT



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
    resp, r, err := api_client.AddressSearchApi.ExecutePreparedSearchRequestAddressBalance(context.Background()).Authorization(authorization).RequestId(requestId).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `AddressSearchApi.ExecutePreparedSearchRequestAddressBalance``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ExecutePreparedSearchRequestAddressBalance`: ExecuteSearchBalanceResponse
    fmt.Fprintf(os.Stdout, "Response from `AddressSearchApi.ExecutePreparedSearchRequestAddressBalance`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiExecutePreparedSearchRequestAddressBalanceRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **requestId** | **string** |  | 

### Return type

[**ExecuteSearchBalanceResponse**](ExecuteSearchBalanceResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ExecutePreparedSearchRequestAddressSequence

> ExecuteSearchSequenceResponse ExecutePreparedSearchRequestAddressSequence(ctx).Authorization(authorization).RequestId(requestId).Execute()

Execute a search for an address sequence on a DLT



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
    resp, r, err := api_client.AddressSearchApi.ExecutePreparedSearchRequestAddressSequence(context.Background()).Authorization(authorization).RequestId(requestId).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `AddressSearchApi.ExecutePreparedSearchRequestAddressSequence``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ExecutePreparedSearchRequestAddressSequence`: ExecuteSearchSequenceResponse
    fmt.Fprintf(os.Stdout, "Response from `AddressSearchApi.ExecutePreparedSearchRequestAddressSequence`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiExecutePreparedSearchRequestAddressSequenceRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **requestId** | **string** |  | 

### Return type

[**ExecuteSearchSequenceResponse**](ExecuteSearchSequenceResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PrepareAddressBalanceSearchRequest

> PrepareSearchResponseSchema PrepareAddressBalanceSearchRequest(ctx, addressId).Authorization(authorization).PrepareSearchSchema(prepareSearchSchema).Execute()

Prepare Search for an Address Balance.



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
    addressId := "addressId_example" // string | 
    prepareSearchSchema := *openapiclient.NewPrepareSearchSchema() // PrepareSearchSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.AddressSearchApi.PrepareAddressBalanceSearchRequest(context.Background(), addressId).Authorization(authorization).PrepareSearchSchema(prepareSearchSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `AddressSearchApi.PrepareAddressBalanceSearchRequest``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `PrepareAddressBalanceSearchRequest`: PrepareSearchResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `AddressSearchApi.PrepareAddressBalanceSearchRequest`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**addressId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiPrepareAddressBalanceSearchRequestRequest struct via the builder pattern


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


## PrepareAddressSequenceSearchRequest

> PrepareSearchResponseSchema PrepareAddressSequenceSearchRequest(ctx, addressId).Authorization(authorization).PrepareSearchSchema(prepareSearchSchema).Execute()

Prepare Search for an Address Sequence.



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
    addressId := "addressId_example" // string | 
    prepareSearchSchema := *openapiclient.NewPrepareSearchSchema() // PrepareSearchSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.AddressSearchApi.PrepareAddressSequenceSearchRequest(context.Background(), addressId).Authorization(authorization).PrepareSearchSchema(prepareSearchSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `AddressSearchApi.PrepareAddressSequenceSearchRequest``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `PrepareAddressSequenceSearchRequest`: PrepareSearchResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `AddressSearchApi.PrepareAddressSequenceSearchRequest`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**addressId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiPrepareAddressSequenceSearchRequestRequest struct via the builder pattern


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


## PrepareAddressSequenceSearchRequest1

> AutoExecSearchAddressSequenceResponseSchema PrepareAddressSequenceSearchRequest1(ctx, addressId).Authorization(authorization).PrepareSearchSchema(prepareSearchSchema).Execute()

Prepare and automatically execute a search for an Address Sequence.



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
    addressId := "addressId_example" // string | 
    prepareSearchSchema := *openapiclient.NewPrepareSearchSchema() // PrepareSearchSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.AddressSearchApi.PrepareAddressSequenceSearchRequest1(context.Background(), addressId).Authorization(authorization).PrepareSearchSchema(prepareSearchSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `AddressSearchApi.PrepareAddressSequenceSearchRequest1``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `PrepareAddressSequenceSearchRequest1`: AutoExecSearchAddressSequenceResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `AddressSearchApi.PrepareAddressSequenceSearchRequest1`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**addressId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiPrepareAddressSequenceSearchRequest1Request struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 

 **prepareSearchSchema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  | 

### Return type

[**AutoExecSearchAddressSequenceResponseSchema**](AutoExecSearchAddressSequenceResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

