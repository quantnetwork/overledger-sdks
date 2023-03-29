# \ManageSubscriptionsApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DeleteSubscription**](ManageSubscriptionsApi.md#DeleteSubscription) | **Delete** /v2/webhook/subscription/{subscriptionId} | Remove a subscription created by your application
[**ListSubscriptions**](ManageSubscriptionsApi.md#ListSubscriptions) | **Get** /v2/webhook/subscriptions | Retrieve a list of subscriptions created by your application
[**UpdateSubscription**](ManageSubscriptionsApi.md#UpdateSubscription) | **Patch** /v2/webhook/subscription/{subscriptionId} | Update a specific subscription created by your application



## DeleteSubscription

> WebhookSubscriptionStatusUpdateResponse DeleteSubscription(ctx, subscriptionId).Authorization(authorization).Execute()

Remove a subscription created by your application



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
    subscriptionId := "subscriptionId_example" // string | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.ManageSubscriptionsApi.DeleteSubscription(context.Background(), subscriptionId).Authorization(authorization).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageSubscriptionsApi.DeleteSubscription``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `DeleteSubscription`: WebhookSubscriptionStatusUpdateResponse
    fmt.Fprintf(os.Stdout, "Response from `ManageSubscriptionsApi.DeleteSubscription`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**subscriptionId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiDeleteSubscriptionRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 


### Return type

[**WebhookSubscriptionStatusUpdateResponse**](WebhookSubscriptionStatusUpdateResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ListSubscriptions

> []ListWebhookSubscriptionResponseSchema ListSubscriptions(ctx).Authorization(authorization).Execute()

Retrieve a list of subscriptions created by your application



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

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.ManageSubscriptionsApi.ListSubscriptions(context.Background()).Authorization(authorization).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageSubscriptionsApi.ListSubscriptions``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ListSubscriptions`: []ListWebhookSubscriptionResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `ManageSubscriptionsApi.ListSubscriptions`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiListSubscriptionsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 

### Return type

[**[]ListWebhookSubscriptionResponseSchema**](ListWebhookSubscriptionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateSubscription

> WebhookSubscriptionStatusUpdateResponse UpdateSubscription(ctx, subscriptionId).Authorization(authorization).UpdateWebhookSubscriptionRequestSchema(updateWebhookSubscriptionRequestSchema).Execute()

Update a specific subscription created by your application



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
    subscriptionId := "subscriptionId_example" // string | 
    updateWebhookSubscriptionRequestSchema := *openapiclient.NewUpdateWebhookSubscriptionRequestSchema() // UpdateWebhookSubscriptionRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.ManageSubscriptionsApi.UpdateSubscription(context.Background(), subscriptionId).Authorization(authorization).UpdateWebhookSubscriptionRequestSchema(updateWebhookSubscriptionRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageSubscriptionsApi.UpdateSubscription``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `UpdateSubscription`: WebhookSubscriptionStatusUpdateResponse
    fmt.Fprintf(os.Stdout, "Response from `ManageSubscriptionsApi.UpdateSubscription`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**subscriptionId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiUpdateSubscriptionRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 

 **updateWebhookSubscriptionRequestSchema** | [**UpdateWebhookSubscriptionRequestSchema**](UpdateWebhookSubscriptionRequestSchema.md) |  | 

### Return type

[**WebhookSubscriptionStatusUpdateResponse**](WebhookSubscriptionStatusUpdateResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

