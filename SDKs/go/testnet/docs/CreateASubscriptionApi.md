# \CreateASubscriptionApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Subscription**](CreateASubscriptionApi.md#Subscription) | **Post** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource 



## Subscription

> []CreateWebhookSubscriptionResponseSchema Subscription(ctx).Authorization(authorization).CreateWebhookSubscriptionRequestSchema(createWebhookSubscriptionRequestSchema).Execute()

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
    createWebhookSubscriptionRequestSchema := *openapiclient.NewCreateWebhookSubscriptionRequestSchema() // CreateWebhookSubscriptionRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.CreateASubscriptionApi.Subscription(context.Background()).Authorization(authorization).CreateWebhookSubscriptionRequestSchema(createWebhookSubscriptionRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CreateASubscriptionApi.Subscription``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `Subscription`: []CreateWebhookSubscriptionResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `CreateASubscriptionApi.Subscription`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiSubscriptionRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 
 **createWebhookSubscriptionRequestSchema** | [**CreateWebhookSubscriptionRequestSchema**](CreateWebhookSubscriptionRequestSchema.md) |  | 

### Return type

[**[]CreateWebhookSubscriptionResponseSchema**](CreateWebhookSubscriptionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

