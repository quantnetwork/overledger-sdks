# \ManageMonitoredResourcesApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DeleteEventMonitoring**](ManageMonitoredResourcesApi.md#DeleteEventMonitoring) | **Delete** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Stop monitoring a smart contract
[**DeleteResourceMonitoringAddress**](ManageMonitoredResourcesApi.md#DeleteResourceMonitoringAddress) | **Delete** /v2/resourcemonitoring/address/{resourceMonitoringId} | Stop monitoring an address
[**GetListOfAddresses**](ManageMonitoredResourcesApi.md#GetListOfAddresses) | **Get** /v2/resourcemonitoring/addresses | Retrieve a list of addresses being monitored
[**GetListOfResources**](ManageMonitoredResourcesApi.md#GetListOfResources) | **Get** /v2/resourcemonitoring | Retrieve a list of all resources being monitored
[**GetListOfSmartContractEvents**](ManageMonitoredResourcesApi.md#GetListOfSmartContractEvents) | **Get** /v2/resourcemonitoring/smartcontractevents | Retrieve a list of smart contracts being monitored
[**GetMonitoredAddress**](ManageMonitoredResourcesApi.md#GetMonitoredAddress) | **Get** /v2/resourcemonitoring/address/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored address
[**GetMonitoredSmartContractEventDetails**](ManageMonitoredResourcesApi.md#GetMonitoredSmartContractEventDetails) | **Get** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored smart contract
[**UpdateEventMonitoring**](ManageMonitoredResourcesApi.md#UpdateEventMonitoring) | **Patch** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Update the monitoring status of a smart contract
[**UpdateResourceMonitoringAddress**](ManageMonitoredResourcesApi.md#UpdateResourceMonitoringAddress) | **Patch** /v2/resourcemonitoring/address/{resourceMonitoringId} | Update the monitoring status of an address



## DeleteEventMonitoring

> SmartContractMonitoringSchema DeleteEventMonitoring(ctx, resourceMonitoringId).Authorization(authorization).Execute()

Stop monitoring a smart contract



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
    resourceMonitoringId := "resourceMonitoringId_example" // string | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.ManageMonitoredResourcesApi.DeleteEventMonitoring(context.Background(), resourceMonitoringId).Authorization(authorization).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageMonitoredResourcesApi.DeleteEventMonitoring``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `DeleteEventMonitoring`: SmartContractMonitoringSchema
    fmt.Fprintf(os.Stdout, "Response from `ManageMonitoredResourcesApi.DeleteEventMonitoring`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**resourceMonitoringId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiDeleteEventMonitoringRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 


### Return type

[**SmartContractMonitoringSchema**](SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteResourceMonitoringAddress

> DeleteResourceMonitoringAddressSchema DeleteResourceMonitoringAddress(ctx, resourceMonitoringId).Authorization(authorization).Execute()

Stop monitoring an address



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
    resourceMonitoringId := "resourceMonitoringId_example" // string | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.ManageMonitoredResourcesApi.DeleteResourceMonitoringAddress(context.Background(), resourceMonitoringId).Authorization(authorization).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageMonitoredResourcesApi.DeleteResourceMonitoringAddress``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `DeleteResourceMonitoringAddress`: DeleteResourceMonitoringAddressSchema
    fmt.Fprintf(os.Stdout, "Response from `ManageMonitoredResourcesApi.DeleteResourceMonitoringAddress`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**resourceMonitoringId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiDeleteResourceMonitoringAddressRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 


### Return type

[**DeleteResourceMonitoringAddressSchema**](DeleteResourceMonitoringAddressSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetListOfAddresses

> []ResourceMonitoringAddressSchema GetListOfAddresses(ctx).Authorization(authorization).Execute()

Retrieve a list of addresses being monitored



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
    resp, r, err := api_client.ManageMonitoredResourcesApi.GetListOfAddresses(context.Background()).Authorization(authorization).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageMonitoredResourcesApi.GetListOfAddresses``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `GetListOfAddresses`: []ResourceMonitoringAddressSchema
    fmt.Fprintf(os.Stdout, "Response from `ManageMonitoredResourcesApi.GetListOfAddresses`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiGetListOfAddressesRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 

### Return type

[**[]ResourceMonitoringAddressSchema**](ResourceMonitoringAddressSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetListOfResources

> []SmartContractMonitoringSchema GetListOfResources(ctx).Authorization(authorization).Execute()

Retrieve a list of all resources being monitored



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
    resp, r, err := api_client.ManageMonitoredResourcesApi.GetListOfResources(context.Background()).Authorization(authorization).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageMonitoredResourcesApi.GetListOfResources``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `GetListOfResources`: []SmartContractMonitoringSchema
    fmt.Fprintf(os.Stdout, "Response from `ManageMonitoredResourcesApi.GetListOfResources`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiGetListOfResourcesRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 

### Return type

[**[]SmartContractMonitoringSchema**](SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetListOfSmartContractEvents

> []SmartContractMonitoringSchema GetListOfSmartContractEvents(ctx).Authorization(authorization).Execute()

Retrieve a list of smart contracts being monitored



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
    resp, r, err := api_client.ManageMonitoredResourcesApi.GetListOfSmartContractEvents(context.Background()).Authorization(authorization).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageMonitoredResourcesApi.GetListOfSmartContractEvents``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `GetListOfSmartContractEvents`: []SmartContractMonitoringSchema
    fmt.Fprintf(os.Stdout, "Response from `ManageMonitoredResourcesApi.GetListOfSmartContractEvents`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiGetListOfSmartContractEventsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 

### Return type

[**[]SmartContractMonitoringSchema**](SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetMonitoredAddress

> AddressMonitoringDetailsSchema GetMonitoredAddress(ctx, resourceMonitoringId).Authorization(authorization).Execute()

Retrieve recorded updates for a specific monitored address



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
    resourceMonitoringId := "resourceMonitoringId_example" // string | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.ManageMonitoredResourcesApi.GetMonitoredAddress(context.Background(), resourceMonitoringId).Authorization(authorization).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageMonitoredResourcesApi.GetMonitoredAddress``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `GetMonitoredAddress`: AddressMonitoringDetailsSchema
    fmt.Fprintf(os.Stdout, "Response from `ManageMonitoredResourcesApi.GetMonitoredAddress`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**resourceMonitoringId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetMonitoredAddressRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 


### Return type

[**AddressMonitoringDetailsSchema**](AddressMonitoringDetailsSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetMonitoredSmartContractEventDetails

> SmartContractMonitoringDetailsSchema GetMonitoredSmartContractEventDetails(ctx, resourceMonitoringId).Authorization(authorization).Execute()

Retrieve recorded updates for a specific monitored smart contract



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
    resourceMonitoringId := "resourceMonitoringId_example" // string | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.ManageMonitoredResourcesApi.GetMonitoredSmartContractEventDetails(context.Background(), resourceMonitoringId).Authorization(authorization).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageMonitoredResourcesApi.GetMonitoredSmartContractEventDetails``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `GetMonitoredSmartContractEventDetails`: SmartContractMonitoringDetailsSchema
    fmt.Fprintf(os.Stdout, "Response from `ManageMonitoredResourcesApi.GetMonitoredSmartContractEventDetails`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**resourceMonitoringId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetMonitoredSmartContractEventDetailsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 


### Return type

[**SmartContractMonitoringDetailsSchema**](SmartContractMonitoringDetailsSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateEventMonitoring

> SmartContractMonitoringSchema UpdateEventMonitoring(ctx, resourceMonitoringId).Authorization(authorization).StatusUpdateMonitoringRequestSchema(statusUpdateMonitoringRequestSchema).Execute()

Update the monitoring status of a smart contract



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
    resourceMonitoringId := "resourceMonitoringId_example" // string | 
    statusUpdateMonitoringRequestSchema := *openapiclient.NewStatusUpdateMonitoringRequestSchema() // StatusUpdateMonitoringRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.ManageMonitoredResourcesApi.UpdateEventMonitoring(context.Background(), resourceMonitoringId).Authorization(authorization).StatusUpdateMonitoringRequestSchema(statusUpdateMonitoringRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageMonitoredResourcesApi.UpdateEventMonitoring``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `UpdateEventMonitoring`: SmartContractMonitoringSchema
    fmt.Fprintf(os.Stdout, "Response from `ManageMonitoredResourcesApi.UpdateEventMonitoring`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**resourceMonitoringId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiUpdateEventMonitoringRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 

 **statusUpdateMonitoringRequestSchema** | [**StatusUpdateMonitoringRequestSchema**](StatusUpdateMonitoringRequestSchema.md) |  | 

### Return type

[**SmartContractMonitoringSchema**](SmartContractMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpdateResourceMonitoringAddress

> UpdateAddressMonitoringSchema UpdateResourceMonitoringAddress(ctx, resourceMonitoringId).Authorization(authorization).StatusUpdateMonitoringRequestSchema(statusUpdateMonitoringRequestSchema).Execute()

Update the monitoring status of an address



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
    resourceMonitoringId := "resourceMonitoringId_example" // string | 
    statusUpdateMonitoringRequestSchema := *openapiclient.NewStatusUpdateMonitoringRequestSchema() // StatusUpdateMonitoringRequestSchema | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.ManageMonitoredResourcesApi.UpdateResourceMonitoringAddress(context.Background(), resourceMonitoringId).Authorization(authorization).StatusUpdateMonitoringRequestSchema(statusUpdateMonitoringRequestSchema).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ManageMonitoredResourcesApi.UpdateResourceMonitoringAddress``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `UpdateResourceMonitoringAddress`: UpdateAddressMonitoringSchema
    fmt.Fprintf(os.Stdout, "Response from `ManageMonitoredResourcesApi.UpdateResourceMonitoringAddress`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**resourceMonitoringId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiUpdateResourceMonitoringAddressRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string** |  | 

 **statusUpdateMonitoringRequestSchema** | [**StatusUpdateMonitoringRequestSchema**](StatusUpdateMonitoringRequestSchema.md) |  | 

### Return type

[**UpdateAddressMonitoringSchema**](UpdateAddressMonitoringSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

