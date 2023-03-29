# OpenapiClient::WebhookSubscriptionStatusUpdateResponse

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **subscription_details** | [**WebhookSubscriptionDetails**](WebhookSubscriptionDetails.md) |  | [optional] |
| **callback_url** | **String** |  | [optional] |
| **subscription_id** | **String** |  | [optional] |
| **type** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookSubscriptionStatusUpdateResponse.new(
  subscription_details: null,
  callback_url: null,
  subscription_id: null,
  type: null
)
```

