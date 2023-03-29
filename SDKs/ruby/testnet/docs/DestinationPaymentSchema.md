# OpenapiClient::DestinationPaymentSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **destination_id** | **String** | Unique identifier of the destination/recipient |  |
| **payment** | [**PaymentSchema**](PaymentSchema.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DestinationPaymentSchema.new(
  destination_id: null,
  payment: null
)
```

