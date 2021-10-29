# \CreateSubscriptionApi

All URIs are relative to *https://OVL 2.0*

Method | HTTP request | Description
------------- | ------------- | -------------
[**subscription**](CreateSubscriptionApi.md#subscription) | **POST** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource 



## subscription

> Vec<crate::models::CreateSubscriptionResponseSchema> subscription(authorization, create_subscription_request_schema)
Create a subscription for a transaction or monitored resource 

Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**create_subscription_request_schema** | [**CreateSubscriptionRequestSchema**](CreateSubscriptionRequestSchema.md) |  | [required] |

### Return type

[**Vec<crate::models::CreateSubscriptionResponseSchema>**](CreateSubscriptionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

