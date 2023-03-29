# \ManageQRC20TokenSupplyApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ExecutePreparedRequestTransaction**](ManageQRC20TokenSupplyApi.md#ExecutePreparedRequestTransaction) | **Post** /v2/execution/transaction | Execute a transaction on a DLT
[**PrepareSupplyRequest1**](ManageQRC20TokenSupplyApi.md#PrepareSupplyRequest1) | **Post** /v2/preparation/supply | Prepare a request to manage QRC20 token supply



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
    resp, r, err := api_client.ManageQRC20TokenSupplyApi.ExecutePreparedRequestTransaction(context.Background()).Authorization(authorization).ExecuteTransactionRequest(executeTransactionRequest).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageQRC20TokenSupplyApi.ExecutePreparedRequestTransaction``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ExecutePreparedRequestTransaction`: ExecuteTransactionResponse
    fmt.Fprintf(os.Stdout, "Response from `ManageQRC20TokenSupplyApi.ExecutePreparedRequestTransaction`: %v\n", resp)
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


## PrepareSupplyRequest1

> PrepareTransactionResponse PrepareSupplyRequest1(ctx).Authorization(authorization).PrepareMintTransactionRequestSchemaQrc20(prepareMintTransactionRequestSchemaQrc20).Execute()

Prepare a request to manage QRC20 token supply



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
    prepareMintTransactionRequestSchemaQrc20 := *openapiclient.NewPrepareMintTransactionRequestSchemaQrc20(*openapiclient.NewLocation("Technology_example", "Network_example"), "Type_example", "Urgency_example") // PrepareMintTransactionRequestSchemaQrc20 | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.ManageQRC20TokenSupplyApi.PrepareSupplyRequest1(context.Background()).Authorization(authorization).PrepareMintTransactionRequestSchemaQrc20(prepareMintTransactionRequestSchemaQrc20).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageQRC20TokenSupplyApi.PrepareSupplyRequest1``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `PrepareSupplyRequest1`: PrepareTransactionResponse
    fmt.Fprintf(os.Stdout, "Response from `ManageQRC20TokenSupplyApi.PrepareSupplyRequest1`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiPrepareSupplyRequest1Request struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **prepareMintTransactionRequestSchemaQrc20** | [**PrepareMintTransactionRequestSchemaQrc20**](PrepareMintTransactionRequestSchemaQrc20.md) |  | 

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

