# OpenapiClient::PaymentSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **amount** | **String** | The payload amount. The exact format depends on the unit of the token. |  |
| **unit** | **String** | The currency or token code |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PaymentSchema.new(
  amount: null,
  unit: null
)
```

