# \ManageSubscriptionsApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**delete_subscription**](ManageSubscriptionsApi.md#delete_subscription) | **DELETE** /v2/webhook/subscription/{subscriptionId} | Remove a subscription created by your application
[**list_subscriptions**](ManageSubscriptionsApi.md#list_subscriptions) | **GET** /v2/webhook/subscriptions | Retrieve a list of subscriptions created by your application
[**update_subscription**](ManageSubscriptionsApi.md#update_subscription) | **PATCH** /v2/webhook/subscription/{subscriptionId} | Update a specific subscription created by your application



## delete_subscription

> crate::models::WebhookSubscriptionStatusUpdateResponse delete_subscription(authorization, subscription_id)
Remove a subscription created by your application

Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**subscription_id** | **String** |  | [required] |

### Return type

[**crate::models::WebhookSubscriptionStatusUpdateResponse**](WebhookSubscriptionStatusUpdateResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## list_subscriptions

> Vec<crate::models::ListWebhookSubscriptionResponseSchema> list_subscriptions(authorization)
Retrieve a list of subscriptions created by your application

Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |

### Return type

[**Vec<crate::models::ListWebhookSubscriptionResponseSchema>**](ListWebhookSubscriptionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## update_subscription

> crate::models::WebhookSubscriptionStatusUpdateResponse update_subscription(authorization, subscription_id, update_webhook_subscription_request_schema)
Update a specific subscription created by your application

Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**subscription_id** | **String** |  | [required] |
**update_webhook_subscription_request_schema** | [**UpdateWebhookSubscriptionRequestSchema**](UpdateWebhookSubscriptionRequestSchema.md) |  | [required] |

### Return type

[**crate::models::WebhookSubscriptionStatusUpdateResponse**](WebhookSubscriptionStatusUpdateResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

