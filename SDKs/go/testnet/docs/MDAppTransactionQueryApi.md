# \MDAppTransactionQueryApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetOvlTransactionByTxId**](MDAppTransactionQueryApi.md#GetOvlTransactionByTxId) | **Get** /v2/mdapptransaction/{overledgertransactionid} | Retrieve information about a specific transaction created by your application in Overledger
[**GetOvlTransactionsByClientId**](MDAppTransactionQueryApi.md#GetOvlTransactionsByClientId) | **Get** /v2/mdapptransactions | Retrieve a list of transactions created by your application in Overledger



## GetOvlTransactionByTxId

> OverledgerTransactionResponseSchema GetOvlTransactionByTxId(ctx, overledgertransactionid).Authorization(authorization).Execute()

Retrieve information about a specific transaction created by your application in Overledger



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
    overledgertransactionid := "overledgertransactionid_example" // string | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.MDAppTransactionQueryApi.GetOvlTransactionByTxId(context.Background(), overledgertransactionid).Authorization(authorization).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `MDAppTransactionQueryApi.GetOvlTransactionByTxId``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `GetOvlTransactionByTxId`: OverledgerTransactionResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `MDAppTransactionQueryApi.GetOvlTransactionByTxId`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**overledgertransactionid** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetOvlTransactionByTxIdRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 


### Return type

[**OverledgerTransactionResponseSchema**](OverledgerTransactionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetOvlTransactionsByClientId

> []OverledgerTransactionResponseSchema GetOvlTransactionsByClientId(ctx).Authorization(authorization).Offset(offset).Length(length).Execute()

Retrieve a list of transactions created by your application in Overledger



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
    offset := int32(56) // int32 |  (optional) (default to 0)
    length := int32(56) // int32 |  (optional) (default to 25)

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.MDAppTransactionQueryApi.GetOvlTransactionsByClientId(context.Background()).Authorization(authorization).Offset(offset).Length(length).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `MDAppTransactionQueryApi.GetOvlTransactionsByClientId``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `GetOvlTransactionsByClientId`: []OverledgerTransactionResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `MDAppTransactionQueryApi.GetOvlTransactionsByClientId`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiGetOvlTransactionsByClientIdRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **offset** | **int32** |  | [default to 0]
 **length** | **int32** |  | [default to 25]

### Return type

[**[]OverledgerTransactionResponseSchema**](OverledgerTransactionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

