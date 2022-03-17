# OpenapiClient::PayeeCreditSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **payment** | [**PaymentSchema**](PaymentSchema.md) |  | [optional] |
| **payee_id** | **String** | The unique identifiers of the payees | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PayeeCreditSchema.new(
  payment: null,
  payee_id: null
)
```

