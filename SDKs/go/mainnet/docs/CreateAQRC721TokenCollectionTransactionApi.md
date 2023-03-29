# \CreateAQRC721TokenCollectionTransactionApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PrepareCollectRequest**](CreateAQRC721TokenCollectionTransactionApi.md#PrepareCollectRequest) | **Post** /v2/tokenise/preparation/transaction/qrc721/collect | Prepare a QRC721 token collection transaction for signing



## PrepareCollectRequest

> PrepareTransactionResponse PrepareCollectRequest(ctx).Authorization(authorization).PreparePaymentTransactionRequestSchema(preparePaymentTransactionRequestSchema).Execute()

Prepare a QRC721 token collection transaction for signing



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
    preparePaymentTransactionRequestSchema := *openapiclient.NewPreparePaymentTransactionRequestSchema(*openapiclient.NewLocation("Technology_example", "Network_example"), "Type_example", "Urgency_example", *openapiclient.NewPaymentRequestDetailsSchema([]openapiclient.DestinationPaymentSchema{*openapiclient.NewDestinationPaymentSchema("DestinationId_example", *openapiclient.NewPaymentSchema("Amount_example", "Unit_example"))}, []openapiclient.OriginPaymentSchema{*openapiclient.NewOriginPaymentSchema("OriginId_example")})) // PreparePaymentTransactionRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.CreateAQRC721TokenCollectionTransactionApi.PrepareCollectRequest(context.Background()).Authorization(authorization).PreparePaymentTransactionRequestSchema(preparePaymentTransactionRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CreateAQRC721TokenCollectionTransactionApi.PrepareCollectRequest``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `PrepareCollectRequest`: PrepareTransactionResponse
    fmt.Fprintf(os.Stdout, "Response from `CreateAQRC721TokenCollectionTransactionApi.PrepareCollectRequest`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiPrepareCollectRequestRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **preparePaymentTransactionRequestSchema** | [**PreparePaymentTransactionRequestSchema**](PreparePaymentTransactionRequestSchema.md) |  | 

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

