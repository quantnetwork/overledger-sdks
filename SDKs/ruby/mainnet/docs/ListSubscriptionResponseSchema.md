# OpenapiClient::ListSubscriptionResponseSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **subscription_details** | [**SubscriptionDetailsSchema**](SubscriptionDetailsSchema.md) |  | [optional] |
| **subscribed_time** | **Time** |  | [optional] |
| **last_updated_time** | **Time** |  | [optional] |
| **callback_url** | **String** |  | [optional] |
| **subscription_id** | **String** |  | [optional] |
| **type** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ListSubscriptionResponseSchema.new(
  subscription_details: null,
  subscribed_time: null,
  last_updated_time: null,
  callback_url: null,
  subscription_id: null,
  type: null
)
```

