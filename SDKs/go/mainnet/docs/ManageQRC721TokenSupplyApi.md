# \ManageQRC721TokenSupplyApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PrepareSupplyRequest**](ManageQRC721TokenSupplyApi.md#PrepareSupplyRequest) | **Post** /v2/tokenise/preparation/transaction/qrc721/supply | Prepare a transaction to manage QRC721 token supply



## PrepareSupplyRequest

> PrepareTransactionResponse PrepareSupplyRequest(ctx).Authorization(authorization).PrepareMintTransactionRequestSchemaQrc721(prepareMintTransactionRequestSchemaQrc721).Execute()

Prepare a transaction to manage QRC721 token supply



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
    prepareMintTransactionRequestSchemaQrc721 := *openapiclient.NewPrepareMintTransactionRequestSchemaQrc721(*openapiclient.NewLocation("Technology_example", "Network_example"), "Type_example", "Urgency_example") // PrepareMintTransactionRequestSchemaQrc721 | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.ManageQRC721TokenSupplyApi.PrepareSupplyRequest(context.Background()).Authorization(authorization).PrepareMintTransactionRequestSchemaQrc721(prepareMintTransactionRequestSchemaQrc721).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageQRC721TokenSupplyApi.PrepareSupplyRequest``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `PrepareSupplyRequest`: PrepareTransactionResponse
    fmt.Fprintf(os.Stdout, "Response from `ManageQRC721TokenSupplyApi.PrepareSupplyRequest`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiPrepareSupplyRequestRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **prepareMintTransactionRequestSchemaQrc721** | [**PrepareMintTransactionRequestSchemaQrc721**](PrepareMintTransactionRequestSchemaQrc721.md) |  | 

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

