# \CreateSubscriptionApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Subscription**](CreateSubscriptionApi.md#Subscription) | **Post** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource 



## Subscription

> []CreateSubscriptionResponseSchema Subscription(ctx).Authorization(authorization).CreateSubscriptionRequestSchema(createSubscriptionRequestSchema).Execute()

Create a subscription for a transaction or monitored resource 



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
    createSubscriptionRequestSchema := *openapiclient.NewCreateSubscriptionRequestSchema() // CreateSubscriptionRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.CreateSubscriptionApi.Subscription(context.Background()).Authorization(authorization).CreateSubscriptionRequestSchema(createSubscriptionRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CreateSubscriptionApi.Subscription``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `Subscription`: []CreateSubscriptionResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `CreateSubscriptionApi.Subscription`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiSubscriptionRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **createSubscriptionRequestSchema** | [**CreateSubscriptionRequestSchema**](CreateSubscriptionRequestSchema.md) |  | 

### Return type

[**[]CreateSubscriptionResponseSchema**](CreateSubscriptionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

