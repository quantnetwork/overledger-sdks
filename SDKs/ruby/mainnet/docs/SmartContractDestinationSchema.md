# OpenapiClient::SmartContractDestinationSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **destination_id** | **String** |  | [optional] |
| **smart_contract** | [**SmartContractSchema**](SmartContractSchema.md) |  | [optional] |
| **payment** | [**SmartContractPaymentSchema**](SmartContractPaymentSchema.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SmartContractDestinationSchema.new(
  destination_id: null,
  smart_contract: null,
  payment: null
)
```

