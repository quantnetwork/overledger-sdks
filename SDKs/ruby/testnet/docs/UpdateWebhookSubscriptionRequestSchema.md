# OpenapiClient::UpdateWebhookSubscriptionRequestSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **status_update** | [**WebhookStatusUpdateSchema**](WebhookStatusUpdateSchema.md) |  | [optional] |
| **callback_url** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::UpdateWebhookSubscriptionRequestSchema.new(
  status_update: null,
  callback_url: null
)
```

