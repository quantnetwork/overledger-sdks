# OpenapiClient::ListWebhookSubscriptionResponseSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **subscription_details** | [**WebhookSubscriptionDetailsSchema**](WebhookSubscriptionDetailsSchema.md) |  | [optional] |
| **last_updated_time** | **Time** |  | [optional] |
| **callback_url** | **String** |  | [optional] |
| **subscription_id** | **String** |  | [optional] |
| **type** | **String** |  | [optional] |
| **subscribed_time** | **Time** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ListWebhookSubscriptionResponseSchema.new(
  subscription_details: null,
  last_updated_time: null,
  callback_url: null,
  subscription_id: null,
  type: null,
  subscribed_time: null
)
```

