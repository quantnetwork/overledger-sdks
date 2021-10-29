# OpenapiClient::ManageSubscriptionApi

All URIs are relative to *https://api.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**delete_subscription**](ManageSubscriptionApi.md#delete_subscription) | **DELETE** /v2/webhook/subscription/{subscriptionId} | Remove a subscription created by your application |
| [**list_subscriptions**](ManageSubscriptionApi.md#list_subscriptions) | **GET** /v2/webhook/subscriptions | Retrieve a list of subscriptions created by your application |
| [**update_subscription**](ManageSubscriptionApi.md#update_subscription) | **PATCH** /v2/webhook/subscription/{subscriptionId} | Update a specific subscription created by your application |


## delete_subscription

> <SubscriptionDeletionResponse> delete_subscription(authorization, subscription_id)

Remove a subscription created by your application

Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::ManageSubscriptionApi.new
authorization = 'authorization_example' # String | 
subscription_id = 'subscription_id_example' # String | 

begin
  # Remove a subscription created by your application
  result = api_instance.delete_subscription(authorization, subscription_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageSubscriptionApi->delete_subscription: #{e}"
end
```

#### Using the delete_subscription_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SubscriptionDeletionResponse>, Integer, Hash)> delete_subscription_with_http_info(authorization, subscription_id)

```ruby
begin
  # Remove a subscription created by your application
  data, status_code, headers = api_instance.delete_subscription_with_http_info(authorization, subscription_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SubscriptionDeletionResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageSubscriptionApi->delete_subscription_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **subscription_id** | **String** |  |  |

### Return type

[**SubscriptionDeletionResponse**](SubscriptionDeletionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## list_subscriptions

> <Array<ListSubscriptionResponseSchema>> list_subscriptions(authorization)

Retrieve a list of subscriptions created by your application

Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::ManageSubscriptionApi.new
authorization = 'authorization_example' # String | 

begin
  # Retrieve a list of subscriptions created by your application
  result = api_instance.list_subscriptions(authorization)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageSubscriptionApi->list_subscriptions: #{e}"
end
```

#### Using the list_subscriptions_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ListSubscriptionResponseSchema>>, Integer, Hash)> list_subscriptions_with_http_info(authorization)

```ruby
begin
  # Retrieve a list of subscriptions created by your application
  data, status_code, headers = api_instance.list_subscriptions_with_http_info(authorization)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ListSubscriptionResponseSchema>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageSubscriptionApi->list_subscriptions_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |

### Return type

[**Array&lt;ListSubscriptionResponseSchema&gt;**](ListSubscriptionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## update_subscription

> <SubscriptionUpdateResponse> update_subscription(authorization, subscription_id, update_subscription_request_schema)

Update a specific subscription created by your application

Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::ManageSubscriptionApi.new
authorization = 'authorization_example' # String | 
subscription_id = 'subscription_id_example' # String | 
update_subscription_request_schema = OpenapiClient::UpdateSubscriptionRequestSchema.new # UpdateSubscriptionRequestSchema | 

begin
  # Update a specific subscription created by your application
  result = api_instance.update_subscription(authorization, subscription_id, update_subscription_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageSubscriptionApi->update_subscription: #{e}"
end
```

#### Using the update_subscription_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SubscriptionUpdateResponse>, Integer, Hash)> update_subscription_with_http_info(authorization, subscription_id, update_subscription_request_schema)

```ruby
begin
  # Update a specific subscription created by your application
  data, status_code, headers = api_instance.update_subscription_with_http_info(authorization, subscription_id, update_subscription_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SubscriptionUpdateResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageSubscriptionApi->update_subscription_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **subscription_id** | **String** |  |  |
| **update_subscription_request_schema** | [**UpdateSubscriptionRequestSchema**](UpdateSubscriptionRequestSchema.md) |  |  |

### Return type

[**SubscriptionUpdateResponse**](SubscriptionUpdateResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

