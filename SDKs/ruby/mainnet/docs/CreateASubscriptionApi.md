# OpenapiClient::CreateASubscriptionApi

All URIs are relative to *https://api.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**subscription**](CreateASubscriptionApi.md#subscription) | **POST** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource  |


## subscription

> <Array<CreateWebhookSubscriptionResponseSchema>> subscription(authorization, create_webhook_subscription_request_schema)

Create a subscription for a transaction or monitored resource 

Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::CreateASubscriptionApi.new
authorization = 'authorization_example' # String | 
create_webhook_subscription_request_schema = OpenapiClient::CreateWebhookSubscriptionRequestSchema.new # CreateWebhookSubscriptionRequestSchema | 

begin
  # Create a subscription for a transaction or monitored resource 
  result = api_instance.subscription(authorization, create_webhook_subscription_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateASubscriptionApi->subscription: #{e}"
end
```

#### Using the subscription_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<CreateWebhookSubscriptionResponseSchema>>, Integer, Hash)> subscription_with_http_info(authorization, create_webhook_subscription_request_schema)

```ruby
begin
  # Create a subscription for a transaction or monitored resource 
  data, status_code, headers = api_instance.subscription_with_http_info(authorization, create_webhook_subscription_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<CreateWebhookSubscriptionResponseSchema>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateASubscriptionApi->subscription_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **create_webhook_subscription_request_schema** | [**CreateWebhookSubscriptionRequestSchema**](CreateWebhookSubscriptionRequestSchema.md) |  |  |

### Return type

[**Array&lt;CreateWebhookSubscriptionResponseSchema&gt;**](CreateWebhookSubscriptionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

