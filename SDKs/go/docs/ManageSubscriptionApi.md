# \ManageSubscriptionApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DeleteSubscription**](ManageSubscriptionApi.md#DeleteSubscription) | **Delete** /v2/webhook/subscription/{subscriptionId} | Remove a subscription created by your application
[**ListSubscriptions**](ManageSubscriptionApi.md#ListSubscriptions) | **Get** /v2/webhook/subscriptions | Retrieve a list of subscriptions created by your application
[**UpdateSubscription**](ManageSubscriptionApi.md#UpdateSubscription) | **Patch** /v2/webhook/subscription/{subscriptionId} | Update a specific subscription created by your application



## DeleteSubscription

> SubscriptionDeletionResponse DeleteSubscription(ctx, subscriptionId).Authorization(authorization).Execute()

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
    resp, r, err := api_client.ManageSubscriptionApi.DeleteSubscription(context.Background(), subscriptionId).Authorization(authorization).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageSubscriptionApi.DeleteSubscription``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `DeleteSubscription`: SubscriptionDeletionResponse
    fmt.Fprintf(os.Stdout, "Response from `ManageSubscriptionApi.DeleteSubscription`: %v\n", resp)
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

[**SubscriptionDeletionResponse**](SubscriptionDeletionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ListSubscriptions

> []ListSubscriptionResponseSchema ListSubscriptions(ctx).Authorization(authorization).Execute()

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
    resp, r, err := api_client.ManageSubscriptionApi.ListSubscriptions(context.Background()).Authorization(authorization).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageSubscriptionApi.ListSubscriptions``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ListSubscriptions`: []ListSubscriptionResponseSchema
    fmt.Fprintf(os.Stdout, "Response from `ManageSubscriptionApi.ListSubscriptions`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiListSubscriptionsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 

### Return type

[**[]ListSubscriptionResponseSchema**](ListSubscriptionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateSubscription

> SubscriptionUpdateResponse UpdateSubscription(ctx, subscriptionId).Authorization(authorization).UpdateSubscriptionRequestSchema(updateSubscriptionRequestSchema).Execute()

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
    updateSubscriptionRequestSchema := *openapiclient.NewUpdateSubscriptionRequestSchema() // UpdateSubscriptionRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.ManageSubscriptionApi.UpdateSubscription(context.Background(), subscriptionId).Authorization(authorization).UpdateSubscriptionRequestSchema(updateSubscriptionRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageSubscriptionApi.UpdateSubscription``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `UpdateSubscription`: SubscriptionUpdateResponse
    fmt.Fprintf(os.Stdout, "Response from `ManageSubscriptionApi.UpdateSubscription`: %v\n", resp)
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

 **updateSubscriptionRequestSchema** | [**UpdateSubscriptionRequestSchema**](UpdateSubscriptionRequestSchema.md) |  | 

### Return type

[**SubscriptionUpdateResponse**](SubscriptionUpdateResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

