# OpenapiClient::DestinationPaymentSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **payment** | [**PaymentSchema**](PaymentSchema.md) |  | [optional] |
| **destination_id** | **String** | The unique identifiers of the destination | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DestinationPaymentSchema.new(
  payment: null,
  destination_id: null
)
```

